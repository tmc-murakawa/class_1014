#include <stdio.h>

/* üŒ`’Tõ”Å */
int search(const int *a, int n, int v) {
	
	int i;
	
	for (i = 0 ; i < n ; i++) {
		if (*(a + i) == v) {
			return i;
		}
	}
	
	return -1;
}

/* “ñ•ª’Tõ”Å */
int binary_search(const int *a, int n, int v) {
	
	int left = 0;
	int right = n - 1;
	
	while (left < right) {
		int mid = (left + right) / 2;
		if (*(a + mid) == v) {
			return mid;
		}
		if (*(a + mid) > v) {
			left = mid + 1;
		} else {
			right = mid - 1;
		}
	}
	return -1;
}

int main(void) {
	
	/* int a[] = {1, 3, 6}; */
	/* printf("%d\n", search(a, 3, 1)); */
	
	int a[] = {1, 3, 6, 8, 10};
	printf("%d\n", search(a, 5, 1));
	
	return 0;
	
}