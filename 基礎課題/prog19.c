#include <stdio.h>

void print_array(const int *a, int n) {
	
	int i;
	
	for (i = 0 ; i < n ; i++) {
		printf("%d ", *(a + i));
	}
	printf("\n");
}

/* int型配列src1, src2をこの順にマージしdestに格納する */
void simple_merge(int *dest, const int *src1, int n1, const int *src2, int n2) {
	
	int i = 0, j = 0, k = 0;
	
	while (k < n1 + n2) {
		/* 配列src2を配列destに格納 */
		if (i >= n1) {
			while(j < n2) {
				*(dest + k++) = *(src2 + j++);
			}
		}
		
		/* 配列src1を配列destに格納 */
		if (j >= n2) {
			while(i < n1) {
				*(dest + k++) = *(src1 + i++);
			}
		}
		
		/* 配列に要素があれば比較して、destに格納 */
		if (*(src1 + i) < *(src2 + j)) {
			*(dest + k++) = *(src1 + i++);
		} else {
			*(dest + k++) = *(src2 + j++);
		}
	}
	
	print_array(dest, n1 + n2);
}

int main(void) {
	
	int src1[] = {1, 3, 6, 8};
	int src2[] = {2, 3, 4};
	
	int n1 = sizeof src1 / sizeof src1[0];
	int n2 = sizeof src2 / sizeof src2[0];
	
	int dest[n1 + n2];
	
	simple_merge(dest,src1, n1, src2, n2);
	
	return 0;
	
}