#include <stdio.h>

int main()
{
    int n;
    float suma = 0;
    int i = 0;

    printf("Program sumuje n dowolnych liczb\n\n");

    printf("Ile liczb chcesz wprowadzic? ");
    scanf("%d", &n);

    for ( i = 0; i < n; i++ )
    {
        float x;
        scanf("%f", &x );
        suma = suma + x;
    }

    printf("Suma cyfr podanych przez Ciebie to: %f", suma);

    getch();

    return 0;
}
