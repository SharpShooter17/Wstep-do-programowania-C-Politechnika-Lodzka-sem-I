/**
Liczby Fibonacciego definiowane s¹ nastêpuj¹co:
x1 = 2, x2 = 5,
xn = 2 xn-2 + xn-1, n = 3,4,5,...

Napisz funkcjê, która wyznacza n pierwszych liczb Fibonacciego.
Wykorzystaj funkcjê do napisania programu, który oblicza liczby Fibonacciego w dowolnym przedziale <k,l> wpisanym z klawiatury.**/

#include <stdio.h>
#include <stdlib.h>

void Swap(int *a, int *b);
unsigned Fibonacci(int n);

int main(void)
{
	int n, i, x1, x2;

	printf("Program wyznacza liczby fibonacciego\n\n");

	printf("Pnkt a)\n");


	printf("Podaj n: ");
	while (scanf("%i", &n) == 0) while (getchar() != '\n'); /// w przypadku nie powodzenia pobrania danych czysci bufor wejscia
    while (getchar() != '\n');                              ///Czysci bufor danych.. gdyby jednak cos zostalo

	for (i = 1; i <= n; i++)
	{
		printf("x%i = %u\n", i, Fibonacci(i));
	}

	printf("\nPunkt b)\n\n");

	printf("Podaj przedzial liczb fibonacciego x1, x2: ");

    while (scanf("%i", &x1) == 0) while (getchar() != '\n'); /// w przypadku nie powodzenia pobrania danych czysci bufor wejscia
    while (getchar() != '\n');                              ///Czysci bufor danych.. gdyby jednak cos zostalo

	while (scanf("%i", &x2) == 0) while (getchar() != '\n'); /// w przypadku nie powodzenia pobrania danych czysci bufor wejscia
    while (getchar() != '\n');                              ///Czysci bufor danych.. gdyby jednak cos zostalo

	if (x1 > x2) Swap(&x1, &x2);

	for (i = x1; i <= x2; ++i)
	{
		printf("x%i = %u\n", i, Fibonacci(i));
	}

	system("pause");

	return 0;
}

unsigned Fibonacci(int n)
{
	if (n > 1) return Fibonacci(n - 1) + Fibonacci(n - 2);
	else if (n == 0) return 0;
	else if (n == 1) return 1;
}

void Swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
