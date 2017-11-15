/**
Maksymalne wartosci n dla typow:

int: n max =                        12
unsigned: n max =                   12
short int: n max =                  7
unsigned short int:                 8
long long int: n max =              19
unsigned long long int: n max =     20
signed char: n max =                5
unsigned char: n max =              5

long int: n max =                   12
double: n max =                     22
float: n max =                      13
**/

#include <stdio.h>
#include <stdlib.h>

typedef int typ;

typ silnia_iteracja(typ n);
typ silnia_rekurencja(typ  n);

int main(void)
{
	typ n, i;

	printf("Program obliczajacy silnie funkcja iteracyjna i rekurencyjna\n\n");

	printf("Podaj n: ");
	while (scanf("%i", &n) == 0) while (getchar() != '\n'); /// w przypadku nie powodzenia pobrania danych czysci bufor wejscia
    while (getchar() != '\n');                              ///Czysci bufor danych.. gdyby jednak cos zostalo

	printf("Funkcja iteracyjna n!: %i \n", silnia_iteracja((typ)n));
	printf("Funkcja rekurencyjna n!: %i\n", silnia_rekurencja((typ)n));

	system("pause");

	return 0;
}

typ silnia_rekurencja(typ  n)
{
	if (n == 0)
		return 1;

	return n * silnia_rekurencja(n - 1);
}

typ silnia_iteracja(typ n)
{
	int i;
	typ suma = 1;
	for (i = 1; i <= n; i++)
	{
		suma *= i;
	}

	return suma;
}
