#include <stdio.h>
#include <math.h>

int main() {
    float r1, i1, r2, i2, dist;

    printf("Enter the real and imaginary parts of the first complex number: ");
    scanf("%f %f", &r1, &i1);
    printf("Enter the real and imaginary parts of the second complex number: ");
    scanf("%f %f", &r2, &i2);

    dist = sqrt(pow(r2 - r1, 2) + pow(i2 - i1, 2));

    printf("\nThe distance between the two complex numbers is: %.2f\n", dist);
    return 0;
}

