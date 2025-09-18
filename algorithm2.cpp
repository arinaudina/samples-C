#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "RUS"); // In this task we were also asked to use Russian.
	int a, b, c, i, f;
	printf("Ââåäèòå øèðèíó, âûñîòó, ãëóáèíó øêàôà:\n");
	scanf_s("%d%d%d", &a, &b, &c);
	printf("Ââåäèòå øèðèíó è âûñîòó äâåðè:\n");
	scanf_s("%d%d", &i, &f);
	if ((a > 0) && (b > 0) && (c > 0) &&  (i > 0) && (f > 0))
	{
		if ((a < i) && (b < f))
			printf("Øêàô ïðîøåë íîðì ïîëîæåíèåì");
		else
		{
			if ((c < i) && (b < f))
				printf("Øêàô ïðîøåë áîêîì");
			else
			{
				if ((a < i) && (c < f))
					printf("Øêàô ïåðåâåðíóëè è âûíåñëè");
				else
					printf("ØêàÔ ÍÈÊÎÃÄÀ íå ïðîéäåò");
			}

		}
	}
	else
		printf("Íå ïðàâèëüíîå óñëîâèå");

	return 0;


}
