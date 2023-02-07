// 체중 관리 프로그램

#include <stdio.h>

int main(void)
{
	double cm, kg, bmi;

	printf("몸무게(kg)와 키(cm)를 적으세요 : ");
	scanf("%lf %lf", &kg, &cm);

	cm = cm / 100.0;
	bmi = kg / (cm * cm);

	printf("bmi = %lf\n", bmi);

	(bmi < 18.5) // ? 참 : 거짓
		? printf("저체중 입니다.\n")
		: printf("저체중이 아닙니다.\n");
	(bmi >= 22.9)
		? printf("정상 체중 입니다.\n")
		: printf("정상 체중이 아닙니다.\n");
	(bmi >= 24.9)
		? printf("위험 체중 입니다.\n")
		: printf("위험 체중이 아닙니다.\n");
	(bmi >= 29.9)
		? printf("1단계 비만 입니다.\n")
		: printf("1단계 비만이 아닙니다\n");
	(bmi >= 30)
		? printf("2단계 비만 입니다.\n")
		: printf("2단계 비만이 아닙니다.\n");
	return 0;
}