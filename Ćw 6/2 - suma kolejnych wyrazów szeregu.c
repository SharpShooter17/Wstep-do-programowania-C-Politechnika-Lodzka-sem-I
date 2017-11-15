#include <stdio.h>

int main()
{
    float e = 0.0001f;
    float suma = 0.0f;
    float aktualny_wyraz = 0.0f;
    int n = 1;

    printf("Program sumuje kolejne wyrazy w szeregu wieksze od epsilon\n\n");

    aktualny_wyraz = 1.0f/(n*(n+1.0f));

    while ( aktualny_wyraz > e )
    {
        suma +=aktualny_wyraz;
        n++;
        aktualny_wyraz = 1.0f/(n*(n+1.0f));
        printf("Teraz: %f\n", aktualny_wyraz);
    };

    printf("Suma to: %f", suma);

    getch();

    return 0;
}
