#include <stdio.h>

/* n�̐��̖񐔂��A���������̂��珇�ɕ\������֐� */
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

/* ����2��n�Am�̍ő���񐔂����߂�֐� */
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