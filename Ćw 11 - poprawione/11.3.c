#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sort.h"

void show(int tab[], unsigned size);
void Random(int tab[], int size);

int main()
{
    int n, option = 0;
    int *tab;

    srand((unsigned int)time(NULL));

    printf("Ile liczb chcesz posortowac?: ");
    do
    {
        while ((scanf("%i", &n) == 0)) while (getchar() != '\n');
        while (getchar() != '\n');
    } while (n  <= 0);

    tab = (int*)malloc(n*sizeof(int));

    while ( !(option >= 1 && option <= 2) )
    {

        printf("[1] - wpisz liczby\n[2] - wygeneruj losowe liczby\nTwoj wybor: ");
        while (scanf("%i", &option) == 0) while (getchar() != '\n');
        while (getchar() != '\n');

    }

    if ( option == 1 )
    {
        for (option = 0; option < n; ++option)
        {
            printf("Wprowadz kolejna liczbe: ");
            while (scanf("%i", &tab[option]) == 0) while (getchar() != '\n');
            while (getchar() != '\n');
        }
    }
    else if ( option == 2 )
    {
        Random(tab, n);
    }

    printf("Ktorego sortowania chcesz uzyc?\n");
    option = 0;
    while ( !(option >= 1 && option <= 3) )
    {

        printf("[1] - sortowanie babelkowe\n[2] - sortowanie karciane\n[3] sortowanie proste\nTwoj wybor: ");
        while (scanf("%i", &option) == 0) while (getchar() != '\n');
        while (getchar() != '\n');

    }

    printf( "\n\nPrzed sortowaniem:\n" );
    show(tab, n);

    switch(option)
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

	getchar();

    return 0;
}

void show(int tab[], unsigned size)
{
    unsigned i;
    for ( i = 0; i < size; i++)
    {
        printf("%i\t", tab[i]);
    }

    return;
}

void Random(int tab[], int size)
{
    if ( size > 0 )
    {
        tab[size - 1] = rand();
        Random( tab, size - 1 );
    }
}
