#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	int a, b, c, d , max1, max2;
	printf("enter 4 numbers:\n"); // The original program uses Russian language
	scanf_s("%d%d%d%d", &a, &b, &c, &d);
	if a > b
		max1 = a;
	else
		max1 = b;

	if c > d
		max2 = c;
	else
		max2 = d;

	if max1 > max2
		prinf("%d", max1);
	else
		printf("%d", max2);


}

