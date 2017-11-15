#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

double srednia( double tab[], int n )
{
    int i, poz = 0, mianownik = 0;
    double suma = 0, sred;
    double max = abs(tab[0]);

    for (i = 0; i < n; ++i)
    {
        if ( abs(tab[i] ) < 50.0 ) {
            suma += tab[i];
            mianownik++;
        }

        if ( max < abs(tab[i]) ){
            max = abs(tab[i]);
            poz = i;
        }
    }

    printf( "Maksymalna liczba w tablicy to: %f i ma pozycje: %i", max, poz );
    sred = suma / (double)n;
    return sred;
}

int main()
{
    int n;
    int i = 0;
    double tab[100];
    double sredn;

    printf("Wprowadz n:");
    scanf("%i", &n);

    srand( time( NULL ) );

    for ( i = 0; i < n; ++i)
    {
        tab[i] = (rand() % 200) - 100;

    }

    sredn = srednia(tab, n);

    printf("Srednia to: %f", sredn);

    getchar();

	return 0;
}
