/*
#include<stdio.h>

int main(void) {
	int a = 0;
	printf("input : ");
	scanf_s("%d", &a);

	int count = 0;

	if (a < 100) {
		for (int j = 0; j < a; j++) {
			count++;
		}
	}

	if (a > 100) {
		count += 99;

		for (int i = 101; i <= a; i++) {
			int front = i / 100;
			int middle = (i-front*100) / 10;
			int end = i- (front*100 + middle*10);

			if (2 * middle == front + end) {
				count++;
			}
		}
	}


	printf("result : %d\n", count);

	return 0;
}
*/
