#include<stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int x, y;
	char n;

	printf("���ϴ� ù ��° ��, ������,  �� ��° �� ������ �Է��ϼ��� \n");
	scanf("%d %c %d", &x, &n, &y);

	if (n == '+') {
		printf("����� %d �Դϴ�\n", x + y);
	}
	else if (n == '-') {
		printf("����� %d �Դϴ�\n", x - y);
	}
	else if (n == '*') {
		printf("����� %d �Դϴ�\n", x * y);
	}
	else if (n == '/') {
		printf("����� %d �Դϴ�\n", x / y);
	}

	else
		printf("���� �ʴ� �������Դϴ�. \n");



	return 0;
}