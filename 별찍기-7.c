#include <stdio.h>

int main() {
	printf("Hello World!\n\n");

	int n = 5;

	for (int i = 1; i < 5; i++) {	
		
		for (int j = 0; j < n-i; j++) {
			printf(" ");
		}
		for (int k = 0; k < 2*i-1; k++) {
			printf("*");
		}
		printf("\n");
	}

	for (int i = 5; i < 10; i++) {
		for (int j = 0; j < i-n; j++) {
			printf(" ");
		}
		for (int k = 0; k < 9-2*(i-n); k++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}