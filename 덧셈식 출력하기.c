#define _CRT_SECURE_NO_WARNINGS //scanf등 (unsafe)문법에 대한 대응방식
#include <stdio.h>

int main(void) {
    //풀이
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d",a,b, a + b);

    return 0;
}