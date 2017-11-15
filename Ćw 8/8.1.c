/**Dana jest funkcja:
Przy dodatnich parametrach A,B,C jest ona malejąca. Należy opracować program do tablicowania tej funkcji z krokiem delta x. Tablicowanie należy zakończyć, gdy wartość funkcji f(x) zmaleje poniżej założonej wartości ε.
Wyniki należy drukować stronami w dwóch kolumnach. Wydruk kolejnej strony powinien nastąpić po naciśnięciu dowolnego klawisza. **/

#define e 2.72f
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float f( float x, float A, float B, float C, float beta );

int main()
{
    int i = 0;
    float A, B, C, beta, x0, delta, epsilon, x, y = 0;

    printf("Program oblicza funkcje z parametrami podanymi przez uzytkownika\n\n");

    printf("Podaj kolejno wartosc: A, B, C, beta, x0, delta, epsilon: ");
    scanf("%f %f %f %f %f %f %f", &A, &B, &C, &beta, &x0, &delta, &epsilon);
    x = x0;

    while ( ( y = f( x, A, B, C, beta ) ) > epsilon )
    {
        ++i;
        printf("X: %f, Y: %f |", x, y);
        if ( i%2==0 )
            printf("\n");

        if ( i%20 == 0 )
            system("pause");

        x+=delta;
    }

    system("pause");

    return 0;
}

float f( float x, float A, float B, float C, float beta )
{
    return (( A*pow( e, -beta*x ) )/(B*x*x + C));
}
