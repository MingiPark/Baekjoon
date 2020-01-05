#include <stdio.h>

void main()
{
	int a, i, j, k;
	scanf_s("%d", &a);

	for (i = 1; i <= a; i++) {
		for (j = a-i; j > 0; j--) {
			printf(" ");
		}
		k = 1 + (i - 1) * 2;
		while (k > 0) {
			printf("*");
			k--;
		}
		printf("\n");
	}
	for (i = a + 1; i < 2 * a; i++) {
		for (j = i - a; j > 0; j--) {
			printf(" ");
		}
		k = (2*a-1) - (i - a) * 2;
		while (k > 0) {
			printf("*");
			k--;
		}
		printf("\n");
	}
}
