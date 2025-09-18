#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	double a, b, c, D, x0, x1, x2, xl;
	printf("Введите коэфиценты уравнений\n");
	scanf_s("%lf%lf%lf", &a, &b, &c);
	D = pow(b, 2) - (4 * a * c);
	if ((D < 0) || ((a==0) && (b==0) && (c!=0)))
	{
		printf("Уравнение не имеет корней или не существует");
	}
	else
	{
		if ((a == 0) && (b == 0) && (c == 0))
		{
			printf("x - любое число\n");
		}
		else
		{
			if (a == 0)
			{
				xl = ((-c) / b);
				printf("Линейное уравнение с корнем = %lf", xl);
			}
			else
			{
				if (D == 0)
				{

					x0 = ((-b) / (2 * a));
					printf("Один корень = %lf", x0);
				}
				else
				{
					if (D > 0)
					{
						x1 = (((-b) + (sqrt(D))) / (2 * a));
						x2 = (((-b) - (sqrt(D))) / (2 * a));
						printf("Два корня: первый = %lf , второй = %lf", x1, x2);
					}

				}
			}
		}
	}
	return 0;
}




