#define _CRT_SECURE_NO_WARNINGS //scanf등 (unsafe)문법에 대한 대응방식
#include <stdio.h>

int main(void) {
    //풀이
    char my_string, overwrite_string;
    int s;
    scanf("%s", &my_string);
    scanf("%s", &overwrite_string);
    scanf("%d", &s);

    printf("%d");

    return 0;
}