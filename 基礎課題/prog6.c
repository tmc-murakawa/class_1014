#include <stdio.h>

/* �z��̓Y���Ɨv�f���A�擪����o�͂���֐� */
void print_array(const int *a, int n) {
	
	int i;
	
	for (i = 0 ; i < n ; i++) {
		printf("[%d] => %d\n", i, *(a + i));
	}
	
}

/* �z��̗v�f���A�擪����CSV�`���ŏo�͂���֐� */
void print_array_csv(const int *a, int n) {
	
	int i;
	
	for (i = 0 ; i < n - 1 ; i++) {
		printf("%d, ", *(a + i));
	}
	printf("%d\n", *(a + i));
	
}

int main(void) {
	
	int a[] = {1, 3, 6};
	print_array(a, 3);
	
	print_array_csv(a, 3);
	
	return 0;
	
}