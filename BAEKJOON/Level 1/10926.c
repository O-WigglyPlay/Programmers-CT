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
	else printf("���ڿ��� ���̰� �ʹ� ��ϴ�.\n");
	return 0;
}