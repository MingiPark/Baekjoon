/*
#include<stdio.h>
#include<stdlib.h>

void merge(int data[], int p, int q, int r);
void mergeSort(int data[], int p, int r);

int main(void) {

	int a = 0; //��� ���� �Է� ����

	while (1) {
		printf("����� ���� : ");
		scanf_s("%d", &a);
		if (a > 50 || a <= 0) {
			printf("50���� �۰ų� ���� �ڿ����� �Է��ϼ���.\n");
			continue;
		}
		break;
	}

	int* arr;
	arr = (int*)malloc(sizeof(int) * a);

	int* arr2;
	arr2 = (int*)malloc(sizeof(int) * a);

	for (int i = 0; i < a; i++) {
		scanf_s("%d", &arr[i]);
	}
	//��¥ ��� �Է� �ޱ�

	int max = 0; //��¥ ��� �� �ִ밪
	int min = 0; //��¥ ��� �� �ּҰ�

	mergeSort(arr, 0, a - 1);

	max = arr[0];
	min = arr[a-1];

	int result = min * max;
	int cnt = 0; // �ִ� �ּ��� ���� ���� ��¥ ����� �� �Ǻ�

	int ii = 0;
	
	for (int k = 2; k < result; k++) {
		if (result % k == 0) {
			arr2[ii] = k;
			cnt++;
			ii++;
		}
		else {
			continue;
		}
	}
	
	
	int check = 0;

	for (int d = 0; d < a; d++){
		if (arr[d] != arr2[d]) {
			check++;
		}
	}
	
	if (result > 50 || result < 1 || min <= 1 || cnt != a || check != 0) {
		printf("�߸��� �Է��Դϴ�. \n");
		return 0;
	}
	else {
		printf("��� ���� %d �Դϴ�.\n", result);
	}

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
*/
