#define _CRT_SECURE_NO_WARNINGS //scanf�� (unsafe)������ ���� �������
#include <stdio.h>
#include <ctype.h>
#define LEN_INPUT 21


int main(void) {
    //Ǯ��
    char str[LEN_INPUT];
    int count = 0;

    scanf("%s", str);

    while (str[count])
    {
		if (isupper(str[count])) {
			str[count] = tolower(str[count]);
		}
		else if (islower(str[count])) {
			str[count] = toupper(str[count]);
		}
        count++;
    }

    printf(str);
    return 0;
}