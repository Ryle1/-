// ü�� ���� ���α׷�

#include <stdio.h>

int main(void)
{
	double cm, kg, bmi;

	printf("������(kg)�� Ű(cm)�� �������� : ");
	scanf("%lf %lf", &kg, &cm);

	cm = cm / 100.0;
	bmi = kg / (cm * cm);

	printf("bmi = %lf\n", bmi);

	(bmi < 18.5) // ? �� : ����
		? printf("��ü�� �Դϴ�.\n")
		: printf("��ü���� �ƴմϴ�.\n");
	(bmi >= 22.9)
		? printf("���� ü�� �Դϴ�.\n")
		: printf("���� ü���� �ƴմϴ�.\n");
	(bmi >= 24.9)
		? printf("���� ü�� �Դϴ�.\n")
		: printf("���� ü���� �ƴմϴ�.\n");
	(bmi >= 29.9)
		? printf("1�ܰ� �� �Դϴ�.\n")
		: printf("1�ܰ� ���� �ƴմϴ�\n");
	(bmi >= 30)
		? printf("2�ܰ� �� �Դϴ�.\n")
		: printf("2�ܰ� ���� �ƴմϴ�.\n");
	return 0;
}