#include <stdio.h>

void main() {
    int a[5];
    
    for (int i = 0; i < 5; i++) {
        scanf("%i", &a[i]);
    }

    printf("Length of array: %i\n", (int) (sizeof(a) / sizeof(a[0])));


}