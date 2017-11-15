#include <stdio.h>
#include <stdlib.h>

struct xy
{
	int x;
	int y;
};

int funkcja(int n);

int main()
{
	int a, b, j, i;
	struct xy **tab;

	printf("Program oblicza wartosci funkcji w podanym przez uzytkownika przedziale\n\n");

	printf("Podaj przedzial <a;b>: ");
	scanf("%i %i", &a, &b);

	tab = (struct xy**)malloc((b - a + 1)*sizeof(struct xy*));

	for (i = 0; i < (b - a + 1); ++i)
	{
		tab[i] = (struct xy*)malloc(sizeof(struct xy));
	}

	for (i = 0; a < b + 1; ++a, ++i)
	{

		tab[i]->x = a;
		tab[i]->y = funkcja(a);
	}

	for (j = 0; j < i; j++)
	{
		if (j % 4 == 0) printf("\n");
		if (j % 20 == 0 && j != 0) system("pause");

		printf("X: %5i, Y:%5i |", tab[j]->x, tab[j]->y);
	}

	for (j = 0; j < i; j++)
		free(tab[j]);

	free(tab);

	system("pause");

	return 0;
}

int funkcja(int n)
{
	return (n % 2 == 0) ? n / 2 + n*n : (n - 5)*n;
}
