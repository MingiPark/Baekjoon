/*
#include<stdio.h>

int fibonacci(int n);
int count_0 = 0;
int count_1 = 0;


int main(void) {
	int a = 0;
	printf("TestCase Number : ");
	scanf_s("%d", &a);
	printf("\n");

	int* arr;

	while (1) {
		arr = (int*)malloc(sizeof(int) * a);
		for (int i = 0; i < a; i++) {
			printf("Case %d : ", i);
			scanf_s("%d", &arr[i]);
		}
		int max = arr[0];
		int min = arr[0];
		for (int j = 0; j < a; j++) {
			if (arr[j] > max) {
				max = arr[j];
			}
			if (arr[j] < min) {
				min = arr[j];
			}
		}
		if (max > 40 || min < 0) {
			printf("40 이하의 정수를 입력하세요.\n");
			free(arr);
			continue;
		}
		break;
	}


	printf("\n");
	printf("--------------------------\n");
	printf("\n");

	for (int j = 0; j < a; j++) {
		fibonacci(arr[j]);
		printf("Case %d => count 0 : %d / count 1: %d\n", j, count_0, count_1);
		count_0 = 0;
		count_1 = 0;
	}

	return 0;
}

int fibonacci(int n) {
	
	if (n == 0) {
		count_0++;
		return 0;
	}
	else if (n == 1) {
		count_1++;
		return 1;
	}
	else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}
*/