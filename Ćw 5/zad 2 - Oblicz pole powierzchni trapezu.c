#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float a, b, h, S;

	printf("PROGRAM OBLICZAJACY POLE TRAPEZU\n\n");
	printf("Podaj kolejno d³ugoœæ podstawy trapezu a i b oraz wysokoœæ h: \n");
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &h);
	S = 0.5*(a + b)*h;
	printf("Pole trapezu o podstawach %.2f i %.2f oraz wysokoœci %.2f to: %.2f\n", a, b, h, S);
    system("pause");
	return 0;
}
