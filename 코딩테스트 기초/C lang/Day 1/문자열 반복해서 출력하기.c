#define _CRT_SECURE_NO_WARNINGS //scanf등 (unsafe)문법에 대한 대응방식
#include <stdio.h>
#define LEN_INPUT 11

int main(void) {
    //풀이
    char str[LEN_INPUT];
    int n;

    scanf("%s %d", &str, &n);

    for (int i = 0; i < n; i++) {
        printf("%s", str);
    }
    //내가 몰랐던 풀이법

    return 0;
}