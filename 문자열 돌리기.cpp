#define _CRT_SECURE_NO_WARNINGS //scanf�� (unsafe)������ ���� �������
#include <stdio.h>
#include <string.h>     //strlen �Լ��� �����ص� ���
#define LEN_INPUT 11


int main(void) {
    //Ǯ��
    char str[LEN_INPUT];
    scanf("%s", &str);

    for (int i = 0; i < strlen(str); i++) {     //string_length ���Ӹ��� ���ڿ� ���̸� �����ϴ� �Լ�
        printf("%c\n", str[i]);
    }


    //���� ������ Ǯ�̹�
    /*
        1. for�� �ۼ��Ҷ� ���ǿ� �Լ���� str[i]�� �־��༭ ����� �ص� �ȴ�. for(int i=0; i < str[i]; i++)
        2. for���� ������ str[i]�� 0�� ���� �ɶ����� ���ѷ��� ���ѵΰ� �ϳ��� ����ϸ� �ȴ�.
    */
    return 0;
}