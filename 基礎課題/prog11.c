#include <stdio.h>
#define DECIMALNUM 8

void print_array(const int *a, int n) {
	
	int i;
	
	for (i = 0 ; i < n ; i++) {
		printf("%d ", *(a + i));
	}
	printf("\n");
}

/* ����10�i����d�ɑΉ�����n�r�b�g2�i��b�����߂�֐� */
void decimal_to_binary(int d, int *b, int n) {
	
	int i, j;
	
	for (i = 0 ; d > 0 ; i++) {
		*(b - i + n - 1) = d % 2;
		d /= 2;
	}
	
	for (; i < n ; i++) {
		*(b - i + n - 1) = 0;
	}
	
	print_array(b, n);
}

/* ����n�r�b�g2�i��b�ɑΉ�����10�i������Ԃ��֐� */
int binary_to_decimal(const int *b, int n) {
	
	int i, result = 1, binary = 1;
	
	for (i = 1 ; i < n ; i++) {
		binary *= 2;
		if (*(b - i + n - 1) == 1) {
			result += binary;
		}
	}
	
	return result;
}

int main(void) {
	
	/* int d = 127; */
	/* int b[DECIMALNUM]; */
	/* decimal_to_binary(d, b, DECIMALNUM); */
	
	int b[] = {0, 1, 1, 1, 1, 1, 1, 1};
	printf("%d\n ", binary_to_decimal(b, DECIMALNUM));
	
	return 0;
	
}