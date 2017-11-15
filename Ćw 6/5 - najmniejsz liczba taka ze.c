/**ZnaleŸæ najmniejsz¹ liczbê naturaln¹ n tak¹, ¿e:

  a. (1.02)^n > 1000n^2 => (1.02)^n - 1000n^2 > 0
  b. 1 + 1/2 + 1/3 + ... +1/n > epsilon, gdzie epsilon jest dowoln¹ liczb¹ dodatni¹.**/

#include <stdio.h>
#include <math.h>

int main()
{
    float epsilon;
    float x = 0.0f;
    float suma = 0.0f;
    int n = 1;

    printf("Tresc zadania: \"Znajdz najmniejsz¹ liczbe naturaln¹ n taka, ze:\na. (1.02)^n > 1000n^2\nb. 1 + 1/2 + 1/3 + ... +1/n > epsilon, \ngdzie epsilon jest dowoln¹ liczba dodatnia.\"\n\n");
    ///Podpunkt a
    printf("a) ");

    while ( pow(1.02, n) - 1000*n*n <= 0 )
    {
        n++;
    }

    printf("Najwieksza liczba calkowita taka ze (1.02)^n > 1000n^2 to: %i", n);

    printf("b) Podaj epsilon wiekszy od 0: ");

    scanf("%f", &epsilon);

    do
    {
        printf("suma: %f\n", suma);
        x = x + 1.0f;
        suma = suma + 1.0f/x;
    }
    while ( suma <= epsilon );
    printf("Rozwiazanie podpunktu b to: %.4f a suma to: %.4f", x, suma);

    getch();

    return 0;
}
