#include <stdio.h>

void print_array(const int *a, int n) {
	
	int i;
	
	for (i = 0 ; i < n ; i++) {
		printf("%d ", *(a + i));
	}
	printf("\n");
}

/* 2‚Â‚ÌintŒ^”z—ñ‚Ì“à—e‚ð“ü‚ê‘Ö‚¦‚éŠÖ” */
void swap_array(int *a1, int *a2, int n) {
	
	int i, temp;
	
	for (i = 0 ; i < n ; i++) {
		temp = *(a1 + i);
		*(a1 + i) = *(a2 + i);
		*(a2 + i) = temp;
	}
}

/* intŒ^”z—ña1‚ÌŠe—v‘f‚Éa2‚Ì—v‘f‚ð‰ÁŽZ‚·‚éŠÖ” */
void add_array(int *a1, int *a2, int n) {
	
	int i;
	
	for (i = 0 ; i < n ; i++) {
		*(a1 + i) += *(a2 + i);
	}
}

int main(void) {
	
	int a1[] = {1, 3, 6};
	int a2[] = {2, 1, 3};
	
	/* swap_array(a1, a2, 3); */
	add_array(a1, a2, 3);
	print_array(a1, 3);
	print_array(a2, 3);
	
	return 0;
	
}