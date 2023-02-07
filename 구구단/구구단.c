// 구구단

#include <stdio.h>

int main(void)
{
	int i, j, number, answer;

	printf("구구단 : ");
	scanf("%d", &number);

	for (i = 1; i <= number; i++) // 반복문 for 사용
	{
		printf("%d단\n", i);
		printf("----------\n");

		for (j = 1; j <= 9; j++)
		{
			answer = i * j;
			printf("%d * %d = %d\n", i, j, answer);
		}
		printf("----------\n");
	}

	return 0;
}

/*
실행결과
1단
----------
1 x 1 = 1
1 x 2 = 2
1 x 3 = 3
1 x 4 = 4
1 x 5 = 5
1 x 6 = 6
1 x 7 = 7
1 x 8 = 8
1 x 9 = 9
----------
*/