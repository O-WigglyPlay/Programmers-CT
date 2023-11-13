#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define LEN_MAX 50

int main() {
	char nickname[LEN_MAX];
	scanf("%s", &nickname);
	if (strlen(nickname) < LEN_MAX) {
		printf("%s??!", nickname);
	}
	else printf("문자열의 길이가 너무 깁니다.\n");
	return 0;
}