#define _CRT_SECURE_NO_WARNINGS //scanf�� (unsafe)������ ���� �������
#include <stdio.h>

int main(void) {
    //Ǯ��
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d",a,b, a + b);

    return 0;
}