#include <stdio.h>
#include <math.h>

int main()
{
    float tab[199];
    int m, i;
    float srednia = 0.0f;
    float wariacja = 0.0f;
    float odchylenie;

    printf("Program oblicza wariancje i odchylenie standardowe dla m pomiarow\n\n");

    printf("Podaj liczbê pomiarów: ");
    scanf("%d", &m);

    for ( i = 0; i < m; i++ )
    {
        printf("WprowadŸ %d pomiar: ", i+1);
        scanf("%f", &tab[i]);
    }

    for ( i = 0; i < m; ++i )
    {
        srednia += tab[i];
    }

    srednia = srednia / m;

    printf("Srednia to: %f", srednia);

    for ( i = 0; i < m; i++ )
    {
        wariacja = wariacja + 1.0/(m-1)*(tab[i]-srednia)*(tab[i]-srednia);
    }

    odchylenie = sqrt(wariacja);

    printf("\n\nWariacja: %f Odchylenie: %f", wariacja, odchylenie);

    getch();

    return 0;
}
