#include <stdio.h>

/* n1, n2 �ő�l��Ԃ��֐� */
int max2(int n1, int n2) {
	if (n1 > n2) {
		return n1;
	}
	return n2;
}

/* n1, n2 ���ϒl��Ԃ��֐� */
double average2(int n1, int n2) {
	return (n1 + n2) / 2.0;
}

int main(void) {
	
	printf("%d\n", max2(2, 3));
	printf("%.1f\n", average2(2, 3));
	
	return 0;
	
}