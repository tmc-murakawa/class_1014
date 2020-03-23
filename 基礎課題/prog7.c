#include <stdio.h>

/* int�^�z��̑S�v�f�̍��v�����߂�֐� */
int sum(const int *a, int n) {
	
	int i, sum = 0;
	
	for (i = 0 ; i < n ; i++) {
		sum += *(a + i);
	}
	return sum;
}

/* int�^�z��̑S�v�f�̕��ς����߂�֐� */
double average(const int *a, int n) {
	
	int i;
	double ave;
	
	for (i = 0 ; i < n ; i++) {
		ave += *(a + i);
	}
	return ave / n;
	
}

int main(void) {
	
	int a[] = {1, 3, 6};
	printf("%d\n", sum(a, 3));
	
	printf("%f\n", average(a, 3));
	
	return 0;
	
}