#include <stdio.h>

/* ‚×‚«æ‚ğ‹‚ß‚éŠÖ” */
double power(double n, int p) {
	
	int i, flag = 0;
	double result = 1.0;
	
	if (p < 0) {
		p *= -1;
		flag = 1;
	}
	
	for (i = 0 ; i < p ; i++) {
		if (flag != 1) {
			result *= n;
		} else {
			result /= n;
		}
	}
	return result;
}

int main(void) {
	
	printf("%.1f\n", power(2.0, 5));
	printf("%.1f\n", power(2.0, 0));
	printf("%.2f\n", power(2.0, -2));
	
	return 0;
	
}