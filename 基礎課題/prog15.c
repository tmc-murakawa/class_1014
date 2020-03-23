#include <stdio.h>

void print_array(const int *a, int n) {
	
	int i;
	
	for (i = 0 ; i < n ; i++) {
		printf("%d ", *(a + i));
	}
	printf("\n");
}

/* int�^�z��src�̓��e���Adest�ɃR�s�[����֐� */
void copy(int *dest, const int *src, int n) {
	
	int i;
	
	for (i = 0 ; i < n ; i++) {
		*(dest + i) = *(src + i);
	}
}

/* int�^�z��src�̓��e���Cdest�ɋt���ɃR�s�[����֐� */
void rcopy(int *dest, const int *src, int n) {
	
	int i;
	
	for (i = 0 ; i < n ; i++) {
		*(dest + i) = *(src - i + n - 1);
	}
}


int main(void) {
	
	/* int src[] = {1, 3, 6}; */
	/* int dest[] = {2, 1, 3}; */
	
	/* copy(dest, src, 3); */
	
	int src[] = {5, 3, 6};
	int dest[] = {2, 1, 3};
	rcopy(dest, src, 3);
	print_array(dest, 3);
	
	return 0;
	
}