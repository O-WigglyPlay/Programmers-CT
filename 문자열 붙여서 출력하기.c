#define _CRT_SECURE_NO_WARNINGS //scanf�� (unsafe)������ ���� �������
#include <stdio.h>
#include <string.h> //strcat �Լ��� ����� ��� ����
//#include <cstring.h> C++�� ���
#define LEN_INPUT 11
#define LEN_INPUT 11


int main(void) {
    //Ǯ��
    char str1[LEN_INPUT], str2[LEN_INPUT];
    scanf("%s %s", &str1, &str2);
    strcat(str1, str2);     //str1 �ڿ� str2�� �ٿ��ִ� ����
    printf("%s", str1);

    //���� �𸣴� Ǯ�̹�
    /*
        strcat�� ��� �� �ʿ���� printf("%s%s", str1,str2);�� Ȱ���ص� �ȴ�.
    */

    return 0;
}