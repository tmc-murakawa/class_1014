#include <stdio.h>
#define SIZE 3

/* 三目並べゲーム */

/* 盤 初期化 */
void init(int (*array)[SIZE], int n) {
	
	int i, j;
	
	for (i = 0 ; i < n ; i++) {
		for (j = 0 ; j < n ; j++) {
			*(*(array + i) + j) = 0;
		}
	}
}

/* マスに置けるかチェック */
int putCheck(int (*array)[SIZE], int row, int col, char player) {
	
	if (row < 1 || row > 3 || col < 1 || col > 3){
		return 0;
	}
	
	if (*(*(array + row - 1) + col - 1) == 0) {
		if (player == '1') {
			*(*(array + row - 1) + col - 1) = 1;
		} else {
			*(*(array + row - 1) + col - 1) = 2;
		}
		return 1;
	}
	
	return 0;
}

/* 盤 途中経過 表示 */
void display(int (*array)[SIZE], int n) {
	
	int i, j;
	
	printf("\n");
	
	for (i = 0 ; i < n ; i++) {
		for (j = 0 ; j < n ; j++) {
			if (*(*(array + i) + j) == 1) {
				printf(" O ");
			} else if (*(*(array + i) + j) == 2) {
				printf(" X ");
			} else {
				printf(" - ");
			}
		}
		printf("\n");
	}
	printf("\n");
}

/* 勝敗チェック */
int check(int (*array)[SIZE], int n, int elem) {
	
	int i, j;
	
	/* 横 判定 */
	for (i = 0 ; i < n ; i++) {
		if (*(*(array + i) + 0) * *(*(array + i) + 1) * *(*(array + i) + 2) == 1) {
			return 1;
		} else if (*(*(array + i) + 0) + *(*(array + i) + 1) + *(*(array + i) + 2) == 6) {
			return 2;
		}
	}
	
	/* 縦 判定 */
	for (j = 0 ; j < n ; j++) {
		if (*(*(array + 0) + j) * *(*(array + 1) + j) * *(*(array + 2) + j) == 1) {
			return 1;
		} else if (*(*(array + 0) + j) + *(*(array + 1) + j) + *(*(array + 2) + j) == 6) {
			return 2;
		}
	}
	
	/* 右 判定 */
	if (*(*(array + 0) + 0) * *(*(array + 1) + 1) * *(*(array + 2) + 2) == 1) {
		return 1;
	} else if (*(*(array + 0) + 0) + *(*(array + 1) + 1) + *(*(array + 2) + 2) == 6) {
		return 2;
	}
	/* 左 判定 */
	if (*(*(array + 0) + 2) * *(*(array + 1) + 1) * *(*(array + 2) + 0) == 1) {
		return 1;
	} else if (*(*(array + 0) + 2) + *(*(array + 1) + 1) + *(*(array + 2) + 0) == 6) {
		return 2;
	}
	
	/* 配列 全要素あり */
	if (elem == n * n) {
		return 3;
	}
	
	return 0;  /* 継続 */
}

/* 判定 */
int judge(int v) {
	
	if (v == 1) {
		printf("Player1の勝利！\n");
		return 0;
	} else if (v == 2) {
		printf("Player2の勝利！\n");
		return 0;
	} else if (v == 3) {
		printf("引き分け\n");
		return 0;
	}
	return 1; /* 継続 */
}

int main(void) {
	
	char player = '1';
	int board[SIZE][SIZE];
	int row, col, elemCount = 0, judgeFlag, gameFlag = 1;
	
	init(board, SIZE);
	
	printf("game start！\n\n");
	
	while (gameFlag) {
		
		printf("player%c turn\n", player);
		printf("行(1 - 3)：");
		scanf("%d", &row);
		printf("列(1 - 3)：");
		scanf("%d", &col);
		
		if (putCheck(board, row, col, player) == 1) {
			display(board, SIZE);
			elemCount++;
			judgeFlag = check(board, SIZE, elemCount);
			gameFlag = judge(judgeFlag);
			player = player != '1' ? '1': '2';
		} else {
			printf("値が不正です\n");
			display(board, SIZE);
		}
	}
	
	return 0;
	
}