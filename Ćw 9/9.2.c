/**Hipoteza Goldbacha mówi, ¿e ka¿da liczba parzysta mo¿e byæ przedstawiona jako suma dwóch liczb pierwszych.
Napisz program, który sprawdza tê hipotezê dla 20 pierwszych liczb parzystych.**/

#define Liczb 40
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int bCzyLiczbaPierwszza(int n);

int main(void)
{
	int i, j, k;

	printf("Program sprawdza hipoteze Goldbacha\n\n");
	
	for (i = 0; i <= Liczb; i += 2)
	{
		for (j = 0; j < i/2; ++j)
		{
			for ( k = i - 1; k > 0; --k )
			{
				if ( bCzyLiczbaPierwszza(j) == 1 && bCzyLiczbaPierwszza(k) == 1 && (j + k) == i )
					printf("%i + %i = %i\n", j, k, i);
			}
		}
	}

	getchar();
	
	return 0;
}

int bCzyLiczbaPierwszza(int n)
{
    int i;

    if ( n <= 1 )
        return 0;

	for (i = sqrt(n); i > 1; i--)
		if ((n % i) == 0)
			return 0;

	return 1;
}
