#include <stdio.h>

void print_array(const int *a, int n) {
	
	int i;
	
	for (i = 0 ; i < n ; i++) {
		printf("%d ", *(a + i));
	}
	printf("\n");
}

/* intŒ^”z—ñsrc1Asrc2‚ð‚±‚Ì‡‚Éƒ}[ƒW‚µAdest‚ÉŠi”[‚·‚é */
void simple_marge(int *dest, const int *src1, int n1, int *src2, int n2) {
	
	int i, j;
	
	for (i = 0 ; i < n1 ; i++) {
		*(dest + i) = *(src1 + i);
	}
	
	for (j = 0 ; j < n2 ; j++) {
		*(dest + i + j) = *(src2 + j);
	}
	
	print_array(dest, n1 + n2);
}

int main(void) {
	
	int src1[] = {1, 3, 6};
	int src2[] = {2, 3, 4, 8};
	int n1 = sizeof src1 / sizeof src1[0];
	int n2 = sizeof src2 / sizeof src2[0];
	
	int dest[n1 + n2];
	
	simple_marge(dest, src1, n1, src2, n2);
	
	return 0;
	
}