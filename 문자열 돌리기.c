#define _CRT_SECURE_NO_WARNINGS //scanf등 (unsafe)문법에 대한 대응방식
#include <stdio.h>
#include <string.h>     //strlen 함수를 정의해둔 헤더
#define LEN_INPUT 11


int main(void) {
    //풀이
    char str[LEN_INPUT];
    scanf("%s", &str);

    for (int i = 0; i < strlen(str); i++) {     //string_length 줄임말로 문자열 길이를 측정하는 함수
        printf("%c\n", str[i]);
    }


    //내가 몰랐던 풀이법
    /*
        1. for문 작성할때 조건에 함수대신 str[i]를 넣어줘서 계산을 해도 된다. for(int i=0; i < str[i]; i++)
        2. for문의 조건을 str[i]가 0의 값이 될때까지 무한루프 시켜두고 하나씩 출력하면 된다.
    */
    return 0;
}