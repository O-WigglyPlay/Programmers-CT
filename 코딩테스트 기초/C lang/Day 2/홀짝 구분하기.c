#define _CRT_SECURE_NO_WARNINGS //scanf�� (unsafe)������ ���� �������
#include <stdio.h>

int main(void) {
    //Ǯ��
    int n;
    scanf("%d", &n);

    if (n % 2 == 0) {   //������ 2�� �������� 0�� �Ǵ��� �Ǻ��ؼ� ¦���� �ν�
        printf("%d is even", n);
    }
    else {
        printf("%d is odd", n);
    }

    //���� ������ Ǯ�̹�

    return 0;
}