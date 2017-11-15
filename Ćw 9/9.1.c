#include <stdio.h>
#include <stdlib.h>
#include <math.h>

enum logika { falsz = 0, prawda = 1 };

struct blizniaki { int a, b; };

enum logika bCzyLiczbaPierwszza(int n);

int main(void)
{
	int i, j, a;
	struct blizniaki tab[20];

	printf("Program wyznacza liczby bllizniacze\n\n");

    do
    {
        printf("Podaj a mniejsze od 1000: ");
        while ( scanf("%i", &a) == 0) while (getchar() != '\n'); /// w przypadku nie powodzenia pobrania danych czysci bufor wejscia
        while (getchar() != '\n');                              ///Czysci bufor danych.. gdyby jednak cos zostalo
        i = a >= 1000 ? 0 : 1;

    } while ( i == 0 );

	for (i = a, j = 0; j < 20 ; ++i)
	{
		if (bCzyLiczbaPierwszza(i) && bCzyLiczbaPierwszza(i+2))
		{
			tab[j].a = i;
			tab[j].b = i + 2;
			++j;
		}
	}

	for (i = 0; i < 20; ++i)
		printf("(%i,%i) \n", tab[i].a, tab[i].b);

	system("pause");

	return 0;
}

enum logika bCzyLiczbaPierwszza(int n)
{
    int i;

    if ( n <= 1 )
        return falsz;

	for (i = sqrt(n); i > 1; i--)
		if ((n % i) == 0)
			return falsz;

	return prawda;
}

