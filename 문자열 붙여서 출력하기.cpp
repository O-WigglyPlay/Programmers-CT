#define _CRT_SECURE_NO_WARNINGS //scanf등 (unsafe)문법에 대한 대응방식
#include <stdio.h>
#include <string.h> //strcat 함수가 선언된 헤더 파일
//#include <cstring.h> C++일 경우
#define LEN_INPUT 11
#define LEN_INPUT 11


int main(void) {
    //풀이
    char str1[LEN_INPUT], str2[LEN_INPUT];
    scanf("%s %s", &str1, &str2);
    strcat(str1, str2);     //str1 뒤에 str2를 붙여주는 역할
    printf("%s", str1);

    //내가 모르던 풀이법
    /*
        strcat을 사용 할 필요없이 printf("%s%s", str1,str2);를 활용해도 된다.
    */

    return 0;
}