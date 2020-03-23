#include <stdio.h>

/* n‚Ì³‚Ì–ñ”‚ğA¬‚³‚¢‚à‚Ì‚©‚ç‡‚É•\¦‚·‚éŠÖ” */
void print_divisor(int n) {
	
	int i;
	
	if (n <= 0) {
		return;
	}
	
	for (i = 0 ; i < n ; i++) {
		if (n % (i + 1) == 0) {
			printf("%d ", i + 1);
		}
	}
}

/* ³‚Ì2”nAm‚ÌÅ‘åŒö–ñ”‚ğ‹‚ß‚éŠÖ” */
int gcd(int n, int m) {
	
	if (n <= 0 || m <= 0) {
		return 0;
	}
	
	if (n % m == 0) {
		return m;
	} else {
		return gcd(m, n % m);
	}
}

int main(void) {
	
	/* print_divisor(12); */
	printf("%d\n", gcd(36, 60));
	
	return 0;
	
}