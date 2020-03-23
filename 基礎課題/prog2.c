#include <stdio.h>

/* nˆÈ‰º‚Ì”ñ•‰®”‚Ì˜a‚ğ‹‚ß‚éŠÖ” */
int sum(int n) {
	
	if (n < 0) {
		return 0;
	} else {
		int temp = n + sum(n - 1);
		return temp;
	}
}

/* n!‚ğ‹‚ß‚éŠÖ” */
int factorial(int n) {
	
	if (n > 0) {
		int temp = n * factorial(n - 1);
		return temp;
	} else if (n == 0) {
		return 1;
	}
	return 0;  /* •‰”‚Ìê‡ */
}

int main(void) {
	
	printf("%d\n", sum(10));
	printf("%d\n", factorial(5));
	
	return 0;
	
}