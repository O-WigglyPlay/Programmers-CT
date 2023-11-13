#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
	//기본 세팅
	int num1, num2;
	int answer = 0;
	num1 = 2, num2 = 3;

	//풀이
	if (num1 == num2)
		answer = 1;
	else
		answer = -1;

	//내가 몰랐던 풀이법
	/*
	풀이법 1
	return num1 == num2? 1 : -1;
	한 줄로 조건문을 완성한건데 이렇게 하면 나중에 관리나 한 눈에 보기가 힘듬.
	*/


	//결과 확인용
	printf("%d", answer);
	return 0;
}