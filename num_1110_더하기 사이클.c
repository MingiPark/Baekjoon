#include <stdio.h>

int main(void) {
	int N,NN;

	int count = 0;
	while (1) {
		scanf_s("%d", &N);
		if (N < 0 || N>99) {
			printf("�ٽ� �Է��ϼ���(����)");
			continue;
		}
		NN = N;
		break;
	}
	while(1) {
		N = 10 * (N % 10) + (((N / 10) + (N % 10)) % 10);
		count++;
		if (NN - N == 0) break;
	}

	printf("%d", count);
	

	return 0;
}