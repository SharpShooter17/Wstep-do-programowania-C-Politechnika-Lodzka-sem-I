#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE	1
#define FALSE	0

#define MIN(a, b) ( (a) < (b) ? a : b )

struct student
{
	char * name;
	char * surname;
};

void sort_buble(struct student tab[], unsigned size);

int main()
{
	struct student * students = NULL;
	int size, i, len;
	char buffor[32];

	printf("Ile nazwisk chcesz wprowadzic: ");
	do
	{
		while ((scanf("%i", &size) == 0)) while (getchar() != '\n');
		while (getchar() != '\n');
	} while (size <= 0);

	students = (struct student*)malloc(size * sizeof(struct student));

	printf("Podaj imiona i nazwiska studentow:\n");

	for (i = 0; i < size; ++i)
	{
		printf("Podaj imie studenta nr %i: ", i + 1);

		while ((scanf("%s", buffor) == 0)) while (getchar() != '\n');
		while (getchar() != '\n');

		len = strlen(buffor);
		students[i].name = (char*)malloc(len * sizeof(char));
		strcpy(students[i].name, buffor);

		printf("Podaj nazwisko studenta nr %i: ", i + 1);

		while ((scanf("%s", buffor) == 0)) while (getchar() != '\n');
		while (getchar() != '\n');

		len = strlen(buffor);
		students[i].surname = (char*)malloc(len * sizeof(char));
		strcpy(students[i].surname, buffor);
	}

	printf("\nSortowanie...\n");

	sort_buble(students, size);

	printf("\nWyswietl\n");

	for (i = 0; i < size; ++i)
	{
		printf("%s %s\n", students[i].name, students[i].surname);
	}

    for (i = 0; i < size; ++i)
    {
        free(students[i].name);
        free(students[i].surname);
    }

	free(students);

	scanf("%i", &len);
	system("pause");

	return 0;
}

void sort_buble(struct student tab[], unsigned size)
{
	int bChange;
	unsigned i;
	struct student temp;

	do
	{
		bChange = FALSE;
		int result;

		for (i = 0; i < (size - 1); i++)
		{
			result = strcmp(tab[i].surname, tab[i + 1].surname);
			if ( result > 0)
			{
                temp = tab[i];
                tab[i] = tab[i + 1];
				tab[i + 1] = temp;

				bChange = TRUE;
			} else if ( (result == 0) && (strcmp(tab[i].name, tab[i + 1].name) > 0) )
			{
				temp = tab[i];
                tab[i] = tab[i + 1];
				tab[i + 1] = temp;

				bChange = TRUE;
			}
		}
	} while (bChange == TRUE);
}
