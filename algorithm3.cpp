#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	double a, b, c, D, x0, x1, x2, xl;
	printf("������� ���������� ���������\n");
	scanf_s("%lf%lf%lf", &a, &b, &c);
	D = pow(b, 2) - (4 * a * c);
	if ((D < 0) || ((a==0) && (b==0) && (c!=0)))
	{
		printf("��������� �� ����� ������ ��� �� ����������");
	}
	else
	{
		if ((a == 0) && (b == 0) && (c == 0))
		{
			printf("x - ����� �����\n");
		}
		else
		{
			if (a == 0)
			{
				xl = ((-c) / b);
				printf("�������� ��������� � ������ = %lf", xl);
			}
			else
			{
				if (D == 0)
				{

					x0 = ((-b) / (2 * a));
					printf("���� ������ = %lf", x0);
				}
				else
				{
					if (D > 0)
					{
						x1 = (((-b) + (sqrt(D))) / (2 * a));
						x2 = (((-b) - (sqrt(D))) / (2 * a));
						printf("��� �����: ������ = %lf , ������ = %lf", x1, x2);
					}

				}
			}
		}
	}
	return 0;
}




