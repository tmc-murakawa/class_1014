#include <stdio.h>

void print_array(const int *a, int n) {
	
	int i;
	
	for (i = 0 ; i < n ; i++) {
		printf("%d ", *(a + i));
	}
	printf("\n");
}

/* int^zρΜζͺvfπν·ιΦ */
void delete(int *a, int n) {
	
	int i;
	
	for (i = 0 ; i < n - 1 ; i++) {
		*(a + i) = *(a + i + 1);
	}
	*(a + i) = 0;
}

/* int^zρΜYposΜΚuΜvfπν·ιΦ */
void delete_pos(int *a, int n, int pos) {
	
	int i;
	
	for (i = pos ; i < n - 1 ; i++) {
		*(a + i) = *(a + i + 1);
	}
	*(a + i) = 0;
}

int main(void) {
	
	/* int a[] = {1, 3, 6}; */
	/* delete(a, 3); */
	
	int a[] = {1, 3, 6, 7};
	delete_pos(a, 4, 1);
	print_array(a, 4);
	
	return 0;
	
}