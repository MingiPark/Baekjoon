/*
#include<stdio.h>
#include<string.h>
#include<ctype.h>

//Alphabet upper words ascii codes : 65 ~ 90

int main(void) {
	char a[100] = {NULL};
	while (1) {
		printf("Insert the words : ");
		gets(a);
		if (strlen(a) > 100) {
			printf("Input words have to get 0 to 1000000 legnth.\n");
			continue;
		}
		break;
	}

	//모두 대문자로 변환
	for (int i = 0; i < strlen(a); i++) {
		if (islower(a[i])) {
			a[i] = toupper(a[i]);
		}
	}
	
	//같은 문자 개수 카운트 
	int count[26] = {NULL};
	for (int k = 65; k < 91; k++) {
		for (int kk = 0; kk < strlen(a); kk++) {
			if (a[kk] == k) {
				count[k-65]++;
			}
		}
	}
	
	//최대 중복 수 찾기
	int max = count[0];
	for (int m = 0; m < 26; m++) {
		if (count[m] > max) {
			max = count[m];
		}
	}


	for (int n = 0; n < 26; n++) {
		if (count[n] == max) {
			for (int k = n+1; k < 26; k++) {
				if (count[k] == max) {
					printf("Result : ?\n");
					return 0;
				}
			}
			printf("Result : %c\n", n + 65);
		}
	}

	return 0;
}
*/