#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
	//�⺻ ����
	int num1, num2;
	int answer = 0;
	num1 = 2, num2 = 3;

	//Ǯ��
	if (num1 == num2)
		answer = 1;
	else
		answer = -1;

	//���� ������ Ǯ�̹�
	/*
	Ǯ�̹� 1
	return num1 == num2? 1 : -1;
	�� �ٷ� ���ǹ��� �ϼ��Ѱǵ� �̷��� �ϸ� ���߿� ������ �� ���� ���Ⱑ ����.
	*/


	//��� Ȯ�ο�
	printf("%d", answer);
	return 0;
}