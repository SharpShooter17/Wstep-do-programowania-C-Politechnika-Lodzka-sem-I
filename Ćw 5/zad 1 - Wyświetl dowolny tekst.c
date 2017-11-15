#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char buf[256];

    printf("Program wyswietlajacy dowolny tekst \n\n");

	printf("Wprowadz tekst: ");
	scanf("%s", buf);
	printf("Wprowadzony tekst to: %s \n", buf);
    system("pause");
	return 0;
}
