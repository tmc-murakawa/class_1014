#include <stdio.h>

/* n!を求める関数 */
int factorial(int n) {
	
	if (n > 0) {
		int temp = n * factorial(n - 1);
		return temp;
	} else if (n == 0) {
		return 1;
	}
	return 0;
}

/* nPm(順列)を求める関数 */
int permutation(int n, int m) {
	
	int i, result = 1;
	
	if (n < m || n < 0 || m < 0) {
		return 0;
	}
	
	for (i = n ; i > n - m ; i--) {
		result *= i;
	}
	
	return result;
}

/* nCm(組み合わせ)を求める関数 */
int combination(int n, int m) {
	
	if (n < m || n < 0 || m < 0) {
		return 0;
	}
	
	int p = permutation(n, m);
	int f = factorial(m);
	
	return p / f;
}

int main(void) {
	
	/* printf("%d\n", permutation(10, 3)); */
	printf("%d\n", combination(10, 3));
	
	return 0;
	
}