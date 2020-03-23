#include <stdio.h>

/* int型配列から、最大値を求める関数 */
int find_max(const int *a, int n) {
	
	int i, max = *(a);
	
	for (i = 1 ; i < n ; i++) {
		if (max < *(a + i)) {
			max = *(a + i);
		}
	}
	return max;
}

/* int型配列から、最大値が格納されている位置の添字を求める関数 */
int find_max_index(const int *a, int n) {
	
	int i, max = *(a), index = 0;
	
	for (i = 1 ; i < n ; i++) {
		if (max < *(a + i)) {
			max = *(a + i);
			index = i;
		}
	}
	return index;
}

int main(void) {
	
	int a[] = {1, 5, 4};
	printf("%d\n", find_max(a, 3));
	
	printf("%d\n", find_max_index(a, 3));
	
	return 0;
	
}