#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
	//�⺻ ����
	int num1, num2;
	num1 = 3, num2 = 2;

	//Ǯ��
	int answer = ((float)num1 / num2) * 1000;
	// �� ������ ���� ���Ҷ� �Ҽ����� ���� ���� ������ �����ؼ� float���� ����ȯ �� ���

	//���� ������ Ǯ�̹�
	/*
	Ǯ�̹� 1.
	answer = 1000 * num1 / num2;
	����ȯ�� �� �ϰ� ���� 1000�� ���ؼ� �� ������ ������
	*/


	//��� Ȯ�ο�
	printf("%d", answer);
	return 0;
}