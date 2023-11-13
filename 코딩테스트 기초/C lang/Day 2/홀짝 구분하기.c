#define _CRT_SECURE_NO_WARNINGS //scanf등 (unsafe)문법에 대한 대응방식
#include <stdio.h>

int main(void) {
    //풀이
    int n;
    scanf("%d", &n);

    if (n % 2 == 0) {   //변수를 2로 나눴을때 0이 되는지 판별해서 짝수로 인식
        printf("%d is even", n);
    }
    else {
        printf("%d is odd", n);
    }

    //내가 몰랐던 풀이법

    return 0;
}