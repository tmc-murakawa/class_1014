#include <stdio.h>

/* n1, n2 最大値を返す関数 */
int max2(int n1, int n2) {
	if (n1 > n2) {
		return n1;
	}
	return n2;
}

/* n1, n2 平均値を返す関数 */
double average2(int n1, int n2) {
	return (n1 + n2) / 2.0;
}

int main(void) {
	
	printf("%d\n", max2(2, 3));
	printf("%.1f\n", average2(2, 3));
	
	return 0;
	
}