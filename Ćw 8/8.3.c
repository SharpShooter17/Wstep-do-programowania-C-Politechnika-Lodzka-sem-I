#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int bCzyLiczbaPierwszza(int n);

int main(void)
{
	int i, j, a, b, elementow = 0, p_elementow = 0;
	int *tab, *podzielne;
	void *tmp;

	printf("Program sprawdza czy liczba jest liczba pierwsza w danym przedziale i wypisuje liczby podzielne przez 23\n\n");

	printf("Podaj przedzial <a;b>: ");
	scanf("%i %i", &a, &b);

	tab = (int *)malloc(1*sizeof(int));
	podzielne = (int *)malloc(sizeof(int));

    i = a;

	for (; a <= b; ++a)
	{
		if (bCzyLiczbaPierwszza(a))
		{
			tmp = realloc(tab, ++elementow * sizeof(int));
			tab = tmp;

			tab[elementow - 1] = a;
		}

		if ( a % 23 == 0 )
        {
            tmp = realloc(podzielne, ++p_elementow * sizeof(int));
            podzielne = tmp;
            podzielne[p_elementow-1] = a;
        }
	}

	printf("Liczby pierwsze z przedzialu <%i;%i> to: ", a-b, b);

	for (j = 0; j < elementow; ++j)
		printf("%i ", tab[j]);

    printf("\nLiczby podzielne przez 23: ");

    for (i = 0; i < p_elementow; ++i )
        printf("%i ", podzielne[i]);

	free(tab);
	free(podzielne);

	system("pause");

	return 0;
}

int bCzyLiczbaPierwszza(int n)
{
    int i;

    if ( n <= 1 )
        return 0;

	for (i = sqrt(n); i > 1; i--)
		if ((n % i) == 0)
			return 0;

	return 1;
}
