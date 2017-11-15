#include <stdlib.h>
#include <stdio.h>

int main()
{
    float a, b, w1, w2;

    printf("Program sprawdzajacy tozsamosc: (a+b)(a-b) = a2-b2\n\n");

    printf("Podaj 2 liczby: ");
	scanf("%f", &a);
	scanf("%f", &b);
    /*(a+b)(a-b) = a2-b2*/
    w1 = (a+b)*(a-b);
    w2 = a*a - b*b;

    if (w1 == w2)
    printf("\nTozsamosc jest prawdziwa!");
    else
        printf("\nTozsamosc NIE jest prawdziwa.\n");
    system("pause");
    return 0;
}
