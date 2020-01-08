#include<stdio.h>
#include <stdlib.h>

void merge(int data[], int p, int q, int r);
void mergeSort(int data[] ,int p, int r);

int main(void) {
	
	int a = 0;
	
	while (1) {
		printf("숫자 개수 지정 : ");
		scanf_s("%d", &a);
		if (a > 50 || a<=0) {
			printf("다시 입력하여 주세요.\n");
			continue;
		}
		break;
	}

	int *arr1;
	int *arr2;
	
	while (1) {
		arr1 = (int*)malloc(sizeof(int) * a);
		printf("A의 배열 : ");
		for (int i = 0; i < a; i++) {
			scanf_s("%d", &arr1[i]);
		}
		int max = arr1[0];
		int min = arr1[0];
		for (int j = 0; j < a; j++) {
			if (arr1[j] > max) {
				max = arr1[j];
			}
			if (arr1[j] < min) {
				min = arr1[j];
			}
		}
		if (max > 100 || min < 0) {
			printf("100이하의 정수를 입력하세요.\n");
			free(arr1);
			continue;
		}
	break;
	}
	
	while (1) {
		arr2 = (int*)malloc(sizeof(int) * a);
		printf("B의 배열 : ");
		for (int k = 0; k < a; k++) {
			scanf_s("%d", &arr2[k]);
		}
		int max = arr2[0];
		int min = arr2[0];
		for (int l = 0; l < a; l++) {
			if (arr2[l] > max) {
				max = arr2[l];
			}
			if (arr2[l] < min) {
				min = arr2[l];
			}
		}
		if (max > 100 || min < 0) {
			printf("100이하의 정수를 입력하세요.\n");
			free(arr2);
			continue;
		}
		break;
	}

	
	printf("---------------------------\n");
	
	int* rank;
	rank = (int*)malloc(sizeof(int) * a);
	for (int b = 0; b < a; b++) {
		rank[b] = 0;
	}
	for (int c = 0; c < a; c++) {
		for (int d = 0; d < a; d++) {
			if (c != d) {
				if (arr2[c] < arr2[d]) {
					rank[c]++;
				}
			}
		}
	}
	
	//합병 정렬(merge Sort)
	mergeSort(arr1, 0, a-1);
	
	int result = 0;

	for (int f = 0; f < a; f++) {
		result += arr1[rank[f]] * arr2[f];
	}
	printf("결과값은 %d 입니다.\n", result);
	return 0;
}

void mergeSort(int data[], int p, int r) {
	int q;
	if (p < r) {
		q = (p + r) / 2;
		mergeSort(data, p, q);
		mergeSort(data, q + 1, r);
		merge(data, p, q, r);
	}
}
void merge(int data[], int p, int q, int r) {
	int i = p, j = q + 1, k = p;
	int tmp[8];
	while (i <= q && j <= r) {
		if (data[i] <= data[j]) {
			tmp[k++] = data[i++];
		}
		else {
			tmp[k++] = data[j++];
		}
	}
	while (i <= q) {
		tmp[k++] = data[i++];
	}
	while (j <= r) {
		tmp[k++] = data[j++];
	}
	for (int a = p; a <= r; a++) {
		data[a] = tmp[a];
	}
}