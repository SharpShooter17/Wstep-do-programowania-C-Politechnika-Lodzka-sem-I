#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sort.h"
#include "sort.c"

void show(int tab[], unsigned size);
void losuj(int tab[], int size);

int main()
{
    int n, opcja = 0;
    int *tab;

    srand((unsigned int)time(NULL));

    printf("Ile liczb chcesz posortowac?: ");
    do
    {
        while ((scanf("%i", &n) == 0)) while (getchar() != '\n');
        while (getchar() != '\n');
    } while (n  <= 0);

    tab = (int*)malloc(n*sizeof(int));

    while ( !(opcja >= 1 && opcja <= 2) )
    {

        printf("[1] - wpisz liczby\n[2] - wygeneruj losowe liczby\nTwoj wybor: ");
        while (scanf("%i", &opcja) == 0) while (getchar() != '\n');
        while (getchar() != '\n');

    }

    if ( opcja == 1 )
    {
        for (opcja = 0; opcja < n; ++opcja)
        {
            printf("Wprowadz kolejna liczbe: ");
            while (scanf("%i", &tab[opcja]) == 0) while (getchar() != '\n');
            while (getchar() != '\n');
        }
    }
    else if ( opcja == 2 )
    {
        losuj(tab, n);
    }

    printf("Ktorego sortowania chcesz uzyc?\n");
    opcja = 0;
    while ( !(opcja >= 1 && opcja <= 3) )
    {

        printf("[1] - sortowanie babelkowe\n[2] - sortowanie karciane\n[3] sortowanie proste\nTwoj wybor: ");
        while (scanf("%i", &opcja) == 0) while (getchar() != '\n');
        while (getchar() != '\n');

    }

    printf( "\n\nPrzed sortowaniem:\n" );
    show(tab, n);

    switch(opcja)
    {
    case 1:
        sort_buble(tab, n);
        break;
    case 2:
        sort_card(tab, n);
        break;
    case 3:
        sort_simple(tab, n);
        break;
    default:
        break;
    }

    printf( "\n\nPo sortowaniu:\n" );
    show(tab, n);

    system("pause");

    return 0;
}

void show(int tab[], unsigned size)
{
    unsigned i;
    for ( i = 0; i < size; i++)
    {
        printf("%i, ", tab[i]);
    }

    return;
}

void losuj(int tab[], int size)
{
    if ( size > 0 )
    {
        tab[size - 1] = rand();
        losuj( tab, size - 1 );
    }
}
