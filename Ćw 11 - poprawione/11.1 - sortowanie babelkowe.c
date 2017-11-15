#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum boolean { FALSE = 0, TRUE = 1 };

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

	getchar();

	return 0;
}

void sort_buble(int tab[], unsigned size)
{
	enum boolean bChange;
	unsigned i;

	do
	{
		bChange = FALSE;

		for (i = 0; i < size - 1; i++)
		{
			if (tab[i] > tab[i + 1])
			{
				Swap(&tab[i], &tab[i + 1]);
				bChange = TRUE;
			}
		}
	} while (bChange == TRUE);

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
