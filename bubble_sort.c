#include <stdio.h>
#include <time.h>

void bubble_sort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        int z = 0;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                z = z + 1;
            }
        }
        if (!z) break;
        // show passes
        printf("\nPass %i:\n\t[", i + 1);
        for (int p = 0; p < n; p++)
            printf("%i,", arr[p]);
        printf("]");
    }
}

void main() {
    clock_t start, finish;
    int arr[] = {64, 34, 25, 12, 22, 11, 90, 90, 67856, 73, 9, 0, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    start = clock();
    bubble_sort(arr, n);
    finish = clock();
    time_t _seconds = time(NULL);
    printf("\n\nSorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n\nSorted in (seconds): %.10fs\n\n", ((double)(finish - start) / CLOCKS_PER_SEC));
}