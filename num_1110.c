/*
#include <stdio.h>

int main(void) {

	int a = 0;

	while (1) {
		printf("input : ");
		scanf_s("%d", &a);
		if (a < 0 || a > 99) {
			printf("input is 0 to 99.\n");
			continue;
		}
		break;
	}

	int ten = a / 10;
	int one = a % 10;
	int new_one = ten + one;
	new_one = new_one % 10;
	int new_a = one * 10 + new_one;

	int count = 0;

	while (1) {
		if (new_a == a) {
			count++;
			break;
		}
		else {
			int ten = new_a / 10;
			int one = new_a % 10;
			int new_one = ten + one;
			new_one = new_one % 10;
			new_a = one * 10 + new_one;
			count++;
			continue;
		}
	}
	printf("\n");
	printf("output : %d\n", count);

	return 0;
}
*/
