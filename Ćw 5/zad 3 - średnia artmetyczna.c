#include <stdlib.h>
#include <stdio.h>

int main()
{
	float a, b, s;

	printf("Program liczy srednia artmetyczna\n\n");

	printf("Podaj 2 liczby: ");
	scanf("%f", &a);
	scanf("%f", &b);
	s = (a+b)/2;
	printf("Srednia artmetyczna liczby %.2f i %.2f to: %.2f\n",a,b,s);
	system("pause");
	return;
}
