#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum boolean { falsz = 0, prawda = 1 };

void sort_buble(int tab[], unsigned size);

void show(int tab[], unsigned size);
void Swap(int *a, int *b);

int main(void)
{
	int tab[100], i;

	srand((unsigned int)time(NULL));

	for ( i = 0; i < 100; i++)
	{
		tab[i] = rand() % 1000;
	}

	sort_buble(tab, 100);

	show(tab, 100);

	system("pause");

	return 0;
}

void sort_buble(int tab[], unsigned size)
{
	enum boolean bZmiana;
	unsigned i;

	do
	{
		bZmiana = falsz;

		for (i = 0; i < size - 1; i++)
		{
			if (tab[i] > tab[i + 1])
			{
				Swap(&tab[i], &tab[i + 1]);
				bZmiana = prawda;
			}
		}
	} while (bZmiana == prawda);

}

void show(int tab[], unsigned size)
{
	unsigned i;
	for ( i = 0; i < size; i++)
	{
		printf("%i, ", tab[i]);
	}

	return;
}

void Swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
