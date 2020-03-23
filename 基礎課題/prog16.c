#include <stdio.h>

/* 2‚Â‚ÌintŒ^”z—ñ‚Ì“à—e‚ğ”äŠr‚·‚éŠÖ” */
int compare(const int *a1, const int *a2, int n) {
	
	int i, result = 0;
	
	for (i = 0 ; i < n ; i++) {
		if (*(a1 + i) != *(a2 + i)) {
			return 0;
		}
	}
	
	return 1;
}

int main(void) {
	
	int a1[] = {1, 3, 6};
	int a2[] = {1, 3, 6};
	
	printf("%d\n", compare(a1, a2, 3));
	
	return 0;
	
}