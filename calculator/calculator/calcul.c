#include<stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int x, y;
	char n;

	printf("원하는 첫 번째 수, 연산자,  두 번째 수 순으로 입력하세요 \n");
	scanf("%d %c %d", &x, &n, &y);

	if (n == '+') {
		printf("결과는 %d 입니다\n", x + y);
	}
	else if (n == '-') {
		printf("결과는 %d 입니다\n", x - y);
	}
	else if (n == '*') {
		printf("결과는 %d 입니다\n", x * y);
	}
	else if (n == '/') {
		printf("결과는 %d 입니다\n", x / y);
	}

	else
		printf("맞지 않는 연산자입니다. \n");



	return 0;
}