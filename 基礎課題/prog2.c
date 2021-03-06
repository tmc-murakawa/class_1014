#include <stdio.h>

/* n以下の非負整数の和を求める関数 */
int sum(int n) {
	
	if (n < 0) {
		return 0;
	} else {
		int temp = n + sum(n - 1);
		return temp;
	}
}

/* n!を求める関数 */
int factorial(int n) {
	
	if (n > 0) {
		int temp = n * factorial(n - 1);
		return temp;
	} else if (n == 0) {
		return 1;
	}
	return 0;  /* 負数の場合 */
}

int main(void) {
	
	printf("%d\n", sum(10));
	printf("%d\n", factorial(5));
	
	return 0;
	
}