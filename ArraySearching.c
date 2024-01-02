#include <stdio.h>
#include <stdlib.h>

int getInput(char *message) {
    int input;
    printf("%s", message);
    scanf("%d", &input);
    return input;
}

void linearSearch(int arr[], int size, int myElement) {
    int index;
    
    for (index = 0; index < size; index++) {
        if (arr[index] == myElement) {
            printf("Element %d found at index [%d]", myElement, index);
            return;
        }
    }
    printf("Element %d not found!", myElement);
}

void binarySearch(int arr[], int myElement, int low, int high) {
    if (high >= low) {
        int mid = low + ((high - low) / 2);
        if (arr[mid] == myElement) {
            printf("\nElement %d found at index [%d]\n", myElement, mid);
            return;
        }
        if (arr[mid] > myElement)
            return binarySearch(arr, myElement, low, mid-1);
        return binarySearch(arr, myElement, mid+1, high);
    }
    printf("Element %d not found!", myElement);
}

void main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 9, 10};
    int choice, myElement, size = sizeof(arr) / sizeof(arr[0]);
    choice = getInput("Choose a searching algorithms:\n\t1. Linear Search\n\t2. Binary Search\n");
    myElement = getInput("Enter the element to search: ");
    if (choice == 1)
        linearSearch(arr, size, myElement);
    else if (choice == 2)
        binarySearch(arr, myElement, 0, size-1);
    else
        printf("Invalid choice!");
}