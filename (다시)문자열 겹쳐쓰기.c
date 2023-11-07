#define _CRT_SECURE_NO_WARNINGS //scanf등 (unsafe)문법에 대한 대응방식
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#define LEN_INPUT 1001

char* solution(const char* my_string, const char* overwrite_string, int s) {
	size_t my_string_length = strlen(my_string);
	size_t overwrite_length = strlen(overwrite_string);

	char* answer = (char*)malloc((my_string_length + 1) * sizeof(char));
	strcpy(answer, my_string);
	strncpy(answer + s, overwrite_string, overwrite_length);

	return answer;
}

int main() {
	char* my_string = (char*)malloc(LEN_INPUT * sizeof(char));
	char* overwrite_string = (char*)malloc(LEN_INPUT * sizeof(char));
	int s;

	scanf("%s %s %d", my_string, overwrite_string, &s);

	char* result = solution(my_string, overwrite_string, s);


	printf("%s\n", result);
	return 0;
}