#include <stdio.h>

/* 配列の添字と要素を、先頭から出力する関数 */
void print_array(const int *a, int n) {
	
	int i;
	
	for (i = 0 ; i < n ; i++) {
		printf("[%d] => %d\n", i, *(a + i));
	}
	
}

/* 配列の要素を、先頭からCSV形式で出力する関数 */
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