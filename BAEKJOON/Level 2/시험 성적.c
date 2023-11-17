#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int result = 0;

	scanf("%d", &result);
	if (90 <= result) {
		printf("A");
	}
	else if (80 <= result) {
		printf("B");
	}
	else if (70 <= result) {
		printf("C");
	}
	else if (60 <= result) {
		printf("D");
	}
	else {
		printf("F");
	}

	return 0;
}