/**Napisz program, który wczytuje do tablicy imiona i nazwiska n studentów
oraz ich miejsce zamieszkania, a nastêpnie drukuje zawartoœæ tablicy na ekranie w trzech kolumnach. (n<10).
**/

#include <stdio.h>

struct student
{
    char imie[16];
    char nazwisko[16];
    char mieszka[32];
};

int main()
{
    struct student Studenci[10];
    int n, i;

    printf("Program zapisuje dane studenta a nastepnie wyswietla je w tabelce\n\n");

    printf("Podaj liczbe studentow (max 10): ");
    scanf("%i", &n);

    if (n >= 10)
        n = 10;

    for (i = 0; i < n; ++i)
    {
        printf("Wprowadz imie %i studenta: ", i + 1);
        scanf("%s", Studenci[i].imie);
        printf("Wprowadz nazwisko %i studenta: ", i + 1);
        scanf("%s", Studenci[i].nazwisko);
        printf("Wprowadz miejsce zamieszkania %i studenta: ", i + 1);
        scanf(" %32[^\n]%*c", Studenci[i].mieszka);
    }

    /*tabelka*/

    for (i = 0; i < n; i++)
    {
        printf("%-16s|%-16s|%-32s\n", Studenci[i].imie, Studenci[i].nazwisko, Studenci[i].mieszka);
    }

    getch();

    return 0;
}
