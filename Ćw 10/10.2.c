#include <stdio.h>
#include <stdlib.h>

unsigned potega_2_iteracja(int n);
unsigned potega_2_rekurencja(int  n);

int main(void)
{
	int n, i;

	printf("Program obliczajacy potege 2 funkcja rekurencyjna oraz iteracyjna\n\n");

	printf("Podaj n: ");
	while (scanf("%i", &n) == 0) while (getchar() != '\n'); /// w przypadku nie powodzenia pobrania danych czysci bufor wejscia
    while (getchar() != '\n');                              ///Czysci bufor danych.. gdyby jednak cos zostalo

	printf("Funkcja iteracyjna 2^n: %i \n", potega_2_iteracja(n));
	printf("Funkcja rekurencyjna 2^n: %i \n", potega_2_rekurencja(n));

	system("pause");

	return 0;
}

unsigned potega_2_rekurencja(int  n)
{
	int suma = 0;

	if (n == 0)
		return 1;

	suma = 2 * potega_2_rekurencja(n - 1);

	return suma;
}

unsigned potega_2_iteracja(int n)
{
	int i;
	unsigned suma = 1;
	for (i = 1; i <= n; i++)
	{
		suma *= 2;
	}

	return suma;
}
