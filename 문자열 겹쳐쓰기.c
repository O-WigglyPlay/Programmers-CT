#define _CRT_SECURE_NO_WARNINGS //scanf�� (unsafe)������ ���� �������
#include <stdio.h>

int main(void) {
    //Ǯ��
    char my_string, overwrite_string;
    int s;
    scanf("%s", &my_string);
    scanf("%s", &overwrite_string);
    scanf("%d", &s);

    printf("%d");

    return 0;
}