#include <stdio.h>

float conTemp (char unit, float value) {
	float f_value;
	if(unit == 'f') {
		f_value = (value - 32.0) * (5.0/9.0); // into c
	} else {
		f_value = (value*(9.0/5.0)) + 32; // into f
	}
	return f_value;
}

void main() {
	char tmpc;
	float tmpf;
	printf("\n\nEnter the temp unit (f/c) and value followed by a space: ");
	scanf("%c %f", &tmpc, &tmpf);
	printf("\nConverted value: %.1f", conTemp(tmpc, tmpf));
}
