/*Liczby blizniacze to liczby pierwsze, których ró¿nica wynosi 2, np. 3 i 5,11 i 13.
Napisz program, który zapisuje w tablicy i wyœwietla na ekranie 20 par liczb bliŸniaczych wiêkszych od a,
gdzie a jest dowoln¹ liczb¹ ca³kowit¹ dodatni¹, wpisan¹ z klawiatury, mniejsz¹ od 1000.
Program powinien byæ odporny na b³êdne podanie zamiast liczby innych znaków lub nie dozwolonych wartoœci liczby a.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

enum logika { falsz = 0, prawda = 1 };

struct blizniaki { int a, b; };

enum logika bCzyLiczbaPierwszza(int n);
void WyznaczBlizniaki(int x1, int x2);
void HipotezaGoldBacha(int x1, int x2);
void LiczbyPierwsze(int x1, int x2);
void Swap(int *a, int *b);

int main(void)
{
	int x1, x2;
	int i;
	int blad = 1;

    do
    {
        system("cls");
        printf("Program wykonuje jedna z trzech wybranych operacji przez uzytkownika\n\n");
        printf("[1] Wyznacz liczby pierwsze\n[2] Wyznacz liczby blizniacze\n[3]Sprawdz hipoteze Goldbacha\nWybierz akcje: 1, 2 lub 3: ");

        while ( scanf("%i", &i) == 0) while (getchar() != '\n'); /*w przypadku nie powodzenia pobrania danych czysci bufor wejscia*/
        while (getchar() != '\n');

        if ( i != 1 && i != 2 && i != 3 )
            blad = 0;
    } while ( blad == 0 );

    printf("Podaj przedzial <x1, x2>: ");
    while ( scanf("%i", &x1) == 0) while (getchar() != '\n');
    while (getchar() != '\n');
    while ( scanf("%i", &x2) == 0) while (getchar() != '\n');
    while (getchar() != '\n');

    if ( x1 > x2 )
        Swap(&x1, &x2);

	switch (i)
	{
	case 1:
		LiczbyPierwsze(x1, x2);
		break;
	case 2:
		WyznaczBlizniaki(x1, x2);
		break;
	case 3:
		HipotezaGoldBacha(x1, x2);
		break;
	default:
		break;
	}

	system("pause");

	return 0;
}

void WyznaczBlizniaki(int x1, int x2)
{
	int i;

	for (i = x1; i < x2-1; ++i)
	{
		if (bCzyLiczbaPierwszza(i) && bCzyLiczbaPierwszza(i + 2) && i + 2 <= x2 )
		{
			printf("(%i,%i) \n", i, i + 2);
		}
	}
}

void HipotezaGoldBacha(int x1, int x2)
{
	int i, j, k;

	if ( x1 < 0 )
        x1 = 0;

	if (x1 % 2 != 0)
		x1 += 1;

	for (i = x1; i <= x2; i += 2)
	{
		for (j = 0; j < i/2; ++j)
		{
            for ( k = i - 1; k > 0; --k )
            {
                if ( bCzyLiczbaPierwszza(j) == prawda && bCzyLiczbaPierwszza(k) == prawda && (j + k) == i )
                    printf("%i + %i = %i\n", j, k, i);
            }
		}
	}
}

void LiczbyPierwsze(int x1, int x2)
{
	printf("Liczby pierwsze w podanym przedziale to: ");
	for (; x1 <= x2;x1++)
		if (bCzyLiczbaPierwszza(x1))
			printf("%i, ", x1);

	return;
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

void Swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
