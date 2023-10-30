#define _CRT_SECURE_NO_WARNINGS //scanf등 (unsafe)문법에 대한 대응방식
#include <stdio.h>
#include <ctype.h>
#define LEN_INPUT 21


int main(void) {
    //풀이
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