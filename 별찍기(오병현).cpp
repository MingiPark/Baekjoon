#include <stdio.h>

void main()
{
	int a=5, i, j, k;
	scanfs("%d",a);

	for (i = 1; i <= a; i++) {
		for (j = 5-i; j > 0; j--) {
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
		for (j = i - 5; j > 0; j--) {
			printf(" ");
		}
		k = 9 - (i - 5) * 2;
		while (k > 0) {
			printf("*");
			k--;
		}
		printf("\n");
	}
}
