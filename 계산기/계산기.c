// ����

#include <stdio.h>

int main(void)
{
	int a = 0, b = 0, res;
	char op;

	printf("��Ģ���� : ");
	scanf("%d %c %d", &a, &op, &b);

	switch (op) // ��Ģ���� switch ���ǽ� ���
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
������
1 + 1 = 2
*/