#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    float x, wynik;

    printf("Program oblicza wartosc funkcji\n\n");

    printf("Podaj x: ");
    scanf("%f", &x);

    if (x <= 5 && x >= -5)
        wynik = 2 * (x * x) + 3 * x - 1;
    else
        wynik = (x +5) * (x + 5) - 10;

    printf("\nWynikiem tej funkcji jest: %.2f\n", wynik);
    system("pause");
    return 0;
}
