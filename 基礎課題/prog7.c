#include <stdio.h>

/* int^zρΜSvfΜvπίιΦ */
int sum(const int *a, int n) {
	
	int i, sum = 0;
	
	for (i = 0 ; i < n ; i++) {
		sum += *(a + i);
	}
	return sum;
}

/* int^zρΜSvfΜ½ΟπίιΦ */
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