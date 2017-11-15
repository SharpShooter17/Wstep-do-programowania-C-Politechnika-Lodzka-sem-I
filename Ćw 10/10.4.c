#include <stdio.h>

/**
Liczby nie parzyste podrozuja ze slupka A na B na C na A
Liczby parzyste podrozuja ze slupka A na C na B na A
**/

void hanoi(int n, char a, char b, char c)
{
    if (n > 0)
    {
        hanoi( n - 1, a, c, b );
        printf("%c --> %c\n", a, c);
        hanoi( n - 1, b, a, c );
    }
}

int main()
{
    int n;
    printf("Stos A- pierwotny, stos B - docelowy, stos C - pomocniczy\nPodaj n\n");
    scanf("%i", &n);

    hanoi(n, 'A', 'B', 'C');

    return 0;
}
