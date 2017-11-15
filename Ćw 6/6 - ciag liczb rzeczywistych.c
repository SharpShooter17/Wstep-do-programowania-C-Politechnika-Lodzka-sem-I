/**Dany jest ci¹g liczb rzeczywistych zakoñczony zerem, którego nie wliczamy do ci¹gu.
Obliczyæ œredni¹ arytmetyczn¹ z wyrazów dodatnich ci¹gu oraz ustaliæ, ile wyrazów ma wartoœæ bezwzglêdn¹ mniejsz¹ od 100.**/

#include <stdio.h>

int main()
{
    {
        float n = 0.0f;
        int licznik1 = 0;
        int licznik2 = 0;
        float suma = 0.0f;

        printf("Program oblicza srednia artmetyczna z wyrazow dodatnich wprowadzonego ciagu zakonczonego 0\n\n");

        do
        {
            printf("Podaj liczbe: ");
            scanf("%f",&n);
            if( n > 0 )
            {
                suma = suma + n;
                licznik1++;
            }
            if( abs( n ) < 100.0f && n != 0 )
                licznik2++;
        }
        while (n != 0.0f);

        printf("Suma liczb wynosi %f\n",suma);
        printf("Srednia arytmetyczna wynosi: %f\n",suma/licznik1);
        printf("Wyrazow o wart. bezwzglednej mniejszej niz 100 bylo: %d", licznik2);

        getch();

        return 0;
    }
}
