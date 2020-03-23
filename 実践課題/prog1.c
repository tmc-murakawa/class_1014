#include <stdio.h>
#define SIZE 100

/* 配列内の要素 初期化 */
void init(int *array, int n) {
	
	int i;
	
	for (i = 0 ; i < n ; i++) {
		*(array + i) = 0;
	}
}

/* 配列の末尾にデータを追加 */
void insert(int *array, int n, int v) {
	
	int i;
	
	if (v <= 0) {
		printf("正の整数を入力してください。\n");
		return;
	}
	
	for (i = 0 ; i < n ; i++) {
		if (*(array + i) == v) {
			printf("%dはすでに存在します。\n", *(array + i));
			return;
		}
		if (*(array + i) == 0) {
			*(array + i) = v;
			break;
		}
	}
	if (i < n) {
		printf("%dを追加しました\n", *(array + i));
	} else {
		printf("配列が満杯です。\n");
	}
}

/* 配列内の要素を検索 */
void search(const int *array, int n, int v) {
	
	int i, flag = 0;
	
	if (v <= 0) {
		printf("正の整数を入力してください。\n");
		return;
	}
	
	for (i = 0 ; i < n ; i++) {
		if (*(array + i) == 0) {
			break;
		}
		if (*(array + i) == v) {
			flag = 1;
		
		}
	}
	if (flag == 1) {
		printf("見つかりました。\n");
	} else {
		printf("見つかりません。\n");
	}
}

/* 配列内の要素を削除 */
void delete(int *array, int n, int v) {
	
	int i, j, pos = -1;
	
	if (v <= 0) {
		printf("正の整数を入力してください。\n");
		return;
	}
	if (*(array) == 0) {
		printf("配列内に要素がありません。\n");
		return;
	}
	
	for (i = 0 ; i < n ; i++) {
		if (*(array + i) == 0) {
			break;
		}
		if (*(array + i) == v) {
			pos = i;
		}
	}
	if (pos != -1) {
		for (j = pos ; j < i ; j++) {
			*(array + j) = *(array + j + 1);
		}
		printf("削除しました。\n");
		return;
	}
	
	printf("見つかりません。\n");
}

/* 配列内の要素 表示 */
void show(const int *array, int n) {
	
	int i, flag = 0;
	
	for (i = 0 ; i < n ; i++) {
		if (*(array + i) != 0) {
			printf("%d ", *(array + i));
			flag = 1;
		}
	}
	
	if (flag == 0) {
		printf("データがありません。");
	}
	
	printf("\n");
}

int main(void) {
	
	int a[SIZE], num, add, index, del;
	int flag = 1;
	
	init(a, SIZE);
	
	while (flag) {
		printf("--- 何をしますか？(1:追加, 2:探索, 3:削除, 4:表示, 0:終了): ");
		scanf("%d", &num);
		
		switch(num) {
			case 0:
				flag = 0;
				printf("終了します。\n");
				break;
			case 1:
				printf("--- 値を入力してください: ");
				scanf("%d", &add);
				insert(a, SIZE, add);
				break;
			case 2:
				printf("--- 値を入力してください: ");
				scanf("%d", &index);
				search(a, SIZE, index);
				break;
			case 3:
				printf("--- 値を入力してください: ");
				scanf("%d", &del);
				delete(a, SIZE, del);
				break;
			case 4:
				show(a, SIZE);
				break;
			default:
				printf("0から4を入力して下さい。\n");
		}
	}
	
	return 0;
	
}