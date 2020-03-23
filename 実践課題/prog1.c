#include <stdio.h>
#define SIZE 100

/* �z����̗v�f ������ */
void init(int *array, int n) {
	
	int i;
	
	for (i = 0 ; i < n ; i++) {
		*(array + i) = 0;
	}
}

/* �z��̖����Ƀf�[�^��ǉ� */
void insert(int *array, int n, int v) {
	
	int i;
	
	if (v <= 0) {
		printf("���̐�������͂��Ă��������B\n");
		return;
	}
	
	for (i = 0 ; i < n ; i++) {
		if (*(array + i) == v) {
			printf("%d�͂��łɑ��݂��܂��B\n", *(array + i));
			return;
		}
		if (*(array + i) == 0) {
			*(array + i) = v;
			break;
		}
	}
	if (i < n) {
		printf("%d��ǉ����܂���\n", *(array + i));
	} else {
		printf("�z�񂪖��t�ł��B\n");
	}
}

/* �z����̗v�f������ */
void search(const int *array, int n, int v) {
	
	int i, flag = 0;
	
	if (v <= 0) {
		printf("���̐�������͂��Ă��������B\n");
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
		printf("������܂����B\n");
	} else {
		printf("������܂���B\n");
	}
}

/* �z����̗v�f���폜 */
void delete(int *array, int n, int v) {
	
	int i, j, pos = -1;
	
	if (v <= 0) {
		printf("���̐�������͂��Ă��������B\n");
		return;
	}
	if (*(array) == 0) {
		printf("�z����ɗv�f������܂���B\n");
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
		printf("�폜���܂����B\n");
		return;
	}
	
	printf("������܂���B\n");
}

/* �z����̗v�f �\�� */
void show(const int *array, int n) {
	
	int i, flag = 0;
	
	for (i = 0 ; i < n ; i++) {
		if (*(array + i) != 0) {
			printf("%d ", *(array + i));
			flag = 1;
		}
	}
	
	if (flag == 0) {
		printf("�f�[�^������܂���B");
	}
	
	printf("\n");
}

int main(void) {
	
	int a[SIZE], num, add, index, del;
	int flag = 1;
	
	init(a, SIZE);
	
	while (flag) {
		printf("--- �������܂����H(1:�ǉ�, 2:�T��, 3:�폜, 4:�\��, 0:�I��): ");
		scanf("%d", &num);
		
		switch(num) {
			case 0:
				flag = 0;
				printf("�I�����܂��B\n");
				break;
			case 1:
				printf("--- �l����͂��Ă�������: ");
				scanf("%d", &add);
				insert(a, SIZE, add);
				break;
			case 2:
				printf("--- �l����͂��Ă�������: ");
				scanf("%d", &index);
				search(a, SIZE, index);
				break;
			case 3:
				printf("--- �l����͂��Ă�������: ");
				scanf("%d", &del);
				delete(a, SIZE, del);
				break;
			case 4:
				show(a, SIZE);
				break;
			default:
				printf("0����4����͂��ĉ������B\n");
		}
	}
	
	return 0;
	
}