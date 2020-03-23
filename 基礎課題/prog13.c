#include <stdio.h>

void print_array(const int *a, int n) {
	
	int i;
	
	for (i = 0 ; i < n ; i++) {
		printf("%d ", *(a + i));
	}
	
}

/* int�^�z��̐擪�ɁA����v��}������֐� */
void insert(int *a, int n, int v) {
	
	int i;
	
	for (i = n - 1 ; i > 0 ; i--) {
		*(a + i) = *(a + i - 1);
	}
	*(a + i) = v;
}

/* int�^�z��̓Y��pos�̈ʒu�ɁC����v��}������֐� */
void insert_pos(int *a, int n, int v, int pos) {
	
	int i;
	
	for (i = n - 1 ; i > pos ; i--) {
		*(a + i) = *(a + i - 1);
	}
	*(a + i) = v;
}

int main(void) {
	
	/* int a[] = {1, 3, 6}; */
	/* insert(a, 3, 5); */
	int a[] = {1, 3, 6, 7};
	insert_pos(a, 4, 5, 1);
	print_array(a, 4);
	
	return 0;
	
}