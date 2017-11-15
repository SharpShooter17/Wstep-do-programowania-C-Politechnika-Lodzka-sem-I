#include <stdio.h>
#include <stdlib.h>

enum boolean { falsz = 0, prawda = 1 };
void sort_card(int tab[], unsigned size);
void show(int tab[], unsigned size);

int main(void)
{
	int * tab;
	int size, i;

    srand((unsigned int)time(NULL));

    printf("Ile liczb chcesz wprowadzic?: ");
	while (scanf("%i", &size) == 0) while (getchar() != '\n'); /** w przypadku nie powodzenia pobrania danych czysci bufor wejscia**/
    while (getchar() != '\n');

    tab = (int*)malloc( size*sizeof(int) );

	for ( i = 0; i < size; i++)
	{
		printf("Wprowadz kolejna liczbe: ");
        while (scanf("%i", &tab[i]) == 0) while (getchar() != '\n');
        while (getchar() != '\n');
	}

	sort_card(tab, size);

	show(tab, size);
	
	getchar();

	return 0;
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

void show(int tab[], unsigned size)
{
	unsigned i;
	for ( i = 0; i < size; i++)
	{
		printf("%i, ", tab[i]);
	}

	return;
}
