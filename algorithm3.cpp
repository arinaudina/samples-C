#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	// In this task we were also asked to use Russian.
	setlocale(LC_ALL, "RUS");
	double a, b, c, D, x0, x1, x2, xl;
	printf("Ââåäèòå êîýôèöåíòû óðàâíåíèé\n");
	scanf_s("%lf%lf%lf", &a, &b, &c);
	D = pow(b, 2) - (4 * a * c);
	if ((D < 0) || ((a==0) && (b==0) && (c!=0)))
	{
		printf("Óðàâíåíèå íå èìååò êîðíåé èëè íå ñóùåñòâóåò");
	}
	else
	{
		if ((a == 0) && (b == 0) && (c == 0))
		{
			printf("x - ëþáîå ÷èñëî\n");
		}
		else
		{
			if (a == 0)
			{
				xl = ((-c) / b);
				printf("Ëèíåéíîå óðàâíåíèå ñ êîðíåì = %lf", xl);
			}
			else
			{
				if (D == 0)
				{

					x0 = ((-b) / (2 * a));
					printf("Îäèí êîðåíü = %lf", x0);
				}
				else
				{
					if (D > 0)
					{
						x1 = (((-b) + (sqrt(D))) / (2 * a));
						x2 = (((-b) - (sqrt(D))) / (2 * a));
						printf("Äâà êîðíÿ: ïåðâûé = %lf , âòîðîé = %lf", x1, x2);
					}

				}
			}
		}
	}
	return 0;
}





