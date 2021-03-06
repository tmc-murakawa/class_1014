#include <stdio.h>

/* l π· */
void swap(int *x, int *y) {
	
	int temp = *x;
	*x = *y;
	*y = temp;
}

/* int^zρΜΰeπtΙΐΧΦ¦ιΦ */
void reverse(int *a, int n) {
	
	int i, temp;
	
	for (i = 0 ; i < n / 2 ; i++) {
		swap(&a[i], &a[i + n - 1]);
	}
}

/* int^zρΜΰeπΈΙ\[g·ιΦ */
void sort(int *a, int n) {
	/* Iπ\[g */
	int i, j, min;
	
	for (i = 0 ; i < n - 1 ; i++) {
		min = i;
		for (j = i + 1 ; j < n ; j++) {
			if (*(a + min) > *(a + j)) {
				min = j;
			}
		}
		swap(&a[i], &a[min]);
	}
	
	for (i = 0 ; i < n ; i++) {
		printf("%d ", *(a + i));
	}
}

/* int^zρΜΰeπ~Ι\[g·ιΦ */
void rsort(int *a, int n) {
	/* }ό\[g */
	int i, j, temp;
	
	for (i = 1 ; i < n ; i++) {
		temp = *(a + i);
		for (j = i - 1 ; j >= 0 && temp < *(a + j) ; j--) {
			*(a + j + 1) = *(a + j);
		}
		*(a + j + 1) = temp;
	}
	
	for (i = 0 ; i < n ; i++) {
		printf("%d ", *(a + i));
	}
}

int main(void) {
	
	int a[] = {3, 9, 6, 1, 2};
	/* reverse(a, 3); */
	/* sort(a, 3); */
	rsort(a, 5);
	return 0;
	
}