#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    const float pi = 3.14;
    float a, b, c, c_kw, kat1, kat2;

    printf("Program oblicza bok c trojkatu prostokatnego oraz jego katy\n\n");

    printf("Podaj a i b: ");
    scanf("%f", &a);
    scanf("%f", &b);
    c_kw = (a * a) + (b * b);
    c = sqrt(c_kw);
    kat1 = asin (a / c) * 180 / pi;
    kat2 = asin (b / c) * 180 / pi;

    printf("\nBok c ma dlugosc: %.2f \nKat1 w stopniach: %.2f\nKat2 w stopniach: %.2f\n", c, kat1, kat2);
    system("pause");
    return 0;
}
