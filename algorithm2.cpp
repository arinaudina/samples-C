#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	int a, b, c, i, f;
	printf("������� ������, ������, ������� �����:\n");
	scanf_s("%d%d%d", &a, &b, &c);
	printf("������� ������ � ������ �����:\n");
	scanf_s("%d%d", &i, &f);
	if ((a > 0) && (b > 0) && (c > 0) &&  (i > 0) && (f > 0))
	{
		if ((a < i) && (b < f))
			printf("���� ������ ���� ����������");
		else
		{
			if ((c < i) && (b < f))
				printf("���� ������ �����");
			else
			{
				if ((a < i) && (c < f))
					printf("���� ����������� � �������");
				else
					printf("���� ������� �� �������");
			}

		}
	}
	else
		printf("�� ���������� �������");

	return 0;

}