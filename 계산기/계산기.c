// 계산기

#include <stdio.h>

int main(void)
{
	int a = 0, b = 0, res;
	char op;

	printf("사칙연산 : ");
	scanf("%d %c %d", &a, &op, &b);

	switch (op) // 사칙연산 switch 조건식 사용
	{
	case '+': res = a + b; break;
	case '-': res = a - b; break;
	case '*': res = a * b; break;
	case '/': res = a / b; break;
	}
	printf("%d %c %d = %d", a, op, b, res);

	return 0;
}

/*
실행결과
1 + 1 = 2
*/