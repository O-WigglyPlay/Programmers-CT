#define _CRT_SECURE_NO_WARNINGS //scanf�� (unsafe)������ ���� �������
#include <stdio.h>
#define LEN_INPUT 11

int main(void) {
    //Ǯ��
    char str[LEN_INPUT];
    int n;

    scanf("%s %d", &str, &n);

    for (int i = 0; i < n; i++) {
        printf("%s", str);
    }
    //���� ������ Ǯ�̹�

    return 0;
}