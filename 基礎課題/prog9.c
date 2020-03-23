#include <stdio.h>

/* int�^�z��̑S�v�f��v��������֐� */
void assign(int *a, int n, int v) {
	
	int i;
	
	for (i = 0 ; i < n ; i++) {
		*(a + i) = v;
	}
}

/* int�^�z�񂩂�A�l�����ł�����̂̌���Ԃ��֐� */
int count_positive(const int *a , int n) {
	
	int i, count = 0;
	
	for (i = 0 ; i < n ; i++) {
		if (*(a + i) > 0) {
			count++;
		}
	}
	
	return count;
}

int main(void) {
	
	int a[] = {1, 3, 6};
	assign(a, 3, 8);
	
	printf("%d\n", count_positive(a, 3));
	
	return 0;
	
}