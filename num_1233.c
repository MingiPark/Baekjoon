#include<stdio.h>

int main(void) {

	int a, b, c = 0;
	while (1) {
		printf("input(1 2 3) : ");
		scanf_s("%d %d %d", &a, &b, &c);
		if (a < 2 || a > 20 || b < 2 || b > 20 || c < 2 || c > 40) {
			printf("Wrong input. Try again\n");
			continue;
		}
		else {
			break;
		}
	}

	int* arr; //총합의 값 배열
	int size = a * b * c;
	arr = (int*)malloc(sizeof(int) * size);

	int l = 0; //만들어지는 전체 합의 개수

	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= b; j++) {
			for (int k = 1; k <= c; k++) {
				arr[l] = i + j + k;
				l++;
			}
		}
	}

	int arr2[80] = {NULL};

	int m = 0;

	for (int k = 0; k <80; k++) {
		for (int kk = 0; kk <= l; kk++) {
			if (arr[kk] == k) {
				arr2[k]++;
			}
		}
		//printf("%d ", arr2[k]); //확인용 출력
	}

	//중복 횟수가 가장 많은 것 찾기
	int max = arr2[0];
	for (int m = 0; m < 80; m++) {
		if (arr2[m] > max) {
			max = arr2[m];
		}
	}

	//중복 횟수가 많은 것 중 최솟값 찾기
	int min = 0;
	for (int n = 0; n < 80; n++) {
		if(arr2[n]==max){
			min = n;
			break;
		}
	}

	printf("result : %d\n", min);
	
	return 0;
}
