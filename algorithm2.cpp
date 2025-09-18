#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	int a, b, c, i, f;
	printf("¬ведите ширину, высоту, глубину шкафа:\n");
	scanf_s("%d%d%d", &a, &b, &c);
	printf("¬ведите ширину и высоту двери:\n");
	scanf_s("%d%d", &i, &f);
	if ((a > 0) && (b > 0) && (c > 0) &&  (i > 0) && (f > 0))
	{
		if ((a < i) && (b < f))
			printf("Ўкаф прошел норм положением");
		else
		{
			if ((c < i) && (b < f))
				printf("Ўкаф прошел боком");
			else
			{
				if ((a < i) && (c < f))
					printf("Ўкаф перевернули и вынесли");
				else
					printf("Ўка‘ Ќ» ќ√ƒј не пройдет");
			}

		}
	}
	else
		printf("Ќе правильное условие");

	return 0;

}