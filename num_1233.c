/*
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

	int* arr; //������ �� �迭
	int size = a * b * c;
	arr = (int*)malloc(sizeof(int) * size);

	int l = 0; //��������� ��ü ���� ����

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
		//printf("%d ", arr2[k]); //Ȯ�ο� ���
	}

	//�ߺ� Ƚ���� ���� ���� �� ã��
	int max = arr2[0];
	for (int m = 0; m < 80; m++) {
		if (arr2[m] > max) {
			max = arr2[m];
		}
	}

	//�ߺ� Ƚ���� ���� �� �� �ּڰ� ã��
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
*/