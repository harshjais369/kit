#include<stdio.h>
#include<math.h>


int decToBin(int n) {
	int b = 0, i = b;
	while(n) {
		b += (n % 2) * pow(10, i);
		n /= 2;
		i++;
	}
	return b;
}

int binToDec(int n) {
	int d = 0, i = d;
	while(n) {
		d += ((n%10)*pow(2, i));
		n /= 10;
		i++;
	}
	return d;
}

void main(void) {
	int n = 137;
	printf("%i\n", decToBin(n));
	printf("%i", binToDec(decToBin(n)));
}
