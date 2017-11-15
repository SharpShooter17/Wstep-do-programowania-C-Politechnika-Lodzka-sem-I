/**
Napisz program, który generuje 100 losowo wybranych liczb ca³kowitych z zakresu <0,1000> i zapisuje je w tablicy o wymiarze 1x100,
a nastêpnie sortuje liczby niemalej¹co metod¹ sortowania b¹belkowego (przez prost¹ zamianê) oraz wyœwietla wynik na ekranie.
W programie powinna byæ wyodrêbniona funkcja sortowania b¹belkowego.
.**/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum boolean { falsz = 0, prawda = 1 };

void sort_buble(int tab[], unsigned size);
void sort_card(int tab[], unsigned size);
void sort_simple(int tab[], unsigned size);
void sort_quick(int tab[], unsigned il, unsigned ir);

void show(int tab[], unsigned size);
void Swap(int *a, int *b);

int main(void)
{
	int tab[100], i;

	srand((unsigned int)time(NULL));

	for ( i = 0; i < 100; i++)
	{
		tab[i] = 100 - i;
	}

	sort_card(tab, 100);

	show(tab, 100);

	system("pause");

	return 0;
}

void sort_quick(int tab[], unsigned il, unsigned ir)
{
	unsigned i = il;
	unsigned j = ir;

	if (ir - il < 2) return;

	do
	{

		if (tab[i] < tab[j]) j--;
		else
		{
			Swap(&tab[i], &tab[j]);
			i++;
		}


		if (tab[j] < tab[i]) i++;
		else
		{
			Swap(&tab[i], &tab[j]);
			j--;
		}

		printf("%i %i\n", i, j);

	} while (i <= j);

	if ( il + i < ir - j ) sort_quick(tab, il, j - 1);
	sort_quick(tab, i + 1, ir);

}

void sort_simple(int tab[], unsigned size)
{
	unsigned i, j;
	int min;

	for ( i = 0; i < size; i++)
	{
		min = tab[i];
		for ( j = i + 1; j < size; j++)
		{
			if (tab[j] < min)
				Swap(&tab[j], &min);
		}
		Swap(&min, &tab[i]);
	}
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

void sort_card(int tab[], unsigned size)
{
	unsigned i, j;
	int temp;
	for ( i = 1; i < size; i++)
	{
		temp = tab[i];
		j = i - 1;

		while (j >= 0 && tab[j]>temp)
		{
			tab[j + 1] = tab[j];
			--j;
		}
		tab[j + 1] = temp;
	}
}

void Swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
