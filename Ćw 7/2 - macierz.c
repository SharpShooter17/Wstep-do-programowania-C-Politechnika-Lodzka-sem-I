/**
Napisz program, który wczytuje do tablicy elementy macierzy A o wymiarze n na k (n,k<20) oraz:
oblicza i wyœwietla macierz sum elementów w wierszu,
oblicza i wyœwietla macierz sum elementów w kolumnie.
**/

#include <stdio.h>

int main()
{
    int macierz[20][20];
    int macierz_suma_wierszy[20];
    int macierz_suma_kolumn[20];
    int wierszy, kolumn, i, j;

    printf("Program wyswietla macierz, sume wierszy macierzy oraz sume kolumn macierzy\n\n");

    printf("Podaj liczbe wierszy macierzy: ");
    scanf("%i", &wierszy);
    printf("Podaj liczbe kolumn macierzy: ");
    scanf("%i", &kolumn);

    for(i = 0; i < wierszy; ++i)
    {
        for ( j = 0; j < kolumn; ++j )
        {
            printf("Podaj element macierzy wiersz: %i kolumna: %i wartosc: ", i, j);
            scanf("%i", &macierz[i][j]);
        }
    }

    for (i=0;i<wierszy;++i)
    {
        macierz_suma_wierszy[i] = 0;
        for (j=0;j<kolumn;++j)
        {
            macierz_suma_wierszy[i] += macierz[i][j];
        }
    }

    for (i=0;i<kolumn;++i)
    {
        macierz_suma_kolumn[i] = 0;
        for (j=0;j<wierszy;++j)
        {
            macierz_suma_kolumn[i] += macierz[j][i];
        }
    }

    /*WYSWIETLA MACIERZ PODSTAWOWA:*/

    printf("Macierz ktora wprowadziles:\n");

     for(i = 0; i < wierszy; ++i)
    {
        for ( j = 0; j < kolumn; ++j )
        {
            printf("%i ", macierz[i][j]);
        }
        printf("\n");
    }

    printf("Suma wierszy macierzy:\n");

    for (i=0;i<wierszy;++i)
    {
        printf("%i\n", macierz_suma_wierszy[i]);
    }

    printf("Suma kolumn macierzy:\n");

    for (i=0;i<wierszy;++i)
    {
        printf("%i ", macierz_suma_kolumn[i]);
    }

    getch();

    return 0;
}
