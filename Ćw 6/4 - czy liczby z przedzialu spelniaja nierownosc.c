/**Sprawd�, czy wszystkie liczby naturalne z wybranego przedzia�u <a, b> spe�niaj� nier�wno��:

n^3 + 20n < 3n^2 + 370 => n^3 - 3n^2 + 20n - 370 < 0

Wypisz liczby, dla kt�rych nier�wno�� nie jest prawdziwa.**/

#include <stdio.h>

int main()
{
    int a, b, i;
    int temp;

    printf("Podaj przedzial <a, b>: ");
    scanf("%i", &a);
    scanf("%i", &b);
    printf("a: %i, b: %i", a,b);

    printf("Program sprawdza czy wszystkie liczby naturalne z podanego przedzialu spelniaja nierownosc\n\n");

    for ( i = a; i < b; i++ )
    {
        temp = i*i*i + 3*i*i + 20*i - 370;

        if ( temp < 0 )
        {
            /*printf("Liczba %f spe�nia nier�wno�ci: %f\n", i, temp);*/
        }
        else
        {
            printf("Liczba %i nie spelnia nierownosci\n", i);
        }
    }

    getch();

    return 0;
}
