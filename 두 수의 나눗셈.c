#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
	//기본 세팅
	int num1, num2;
	num1 = 3, num2 = 2;

	//풀이
	int answer = ((float)num1 / num2) * 1000;
	// 두 변수의 몫을 구할때 소수점이 나올 수도 있음을 생각해서 float으로 형변환 후 계산

	//내가 몰랐던 풀이법
	/*
	풀이법 1.
	answer = 1000 * num1 / num2;
	형변환을 안 하고 먼저 1000을 곱해서 두 변수를 나누기
	*/


	//결과 확인용
	printf("%d", answer);
	return 0;
}