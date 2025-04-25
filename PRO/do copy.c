#include <stdio.h>

int main()
{
    int cislo, pocet = 0, sucet = 0;

    do
    {
        // Vstup: Zadajte číslo
        printf("ZADAJTE CISLO (ZADAJTE 0 NA UKONCENIE): ");
        scanf("%d", &cislo);

        if (cislo != 0)
        {
            pocet++; // Zvýši počet zadaných čísel

            if (cislo % 4 == 0)
            {
                sucet += cislo; // Pridá číslo k súčtu, ak je deliteľné 4
            }
        }

    } while (cislo != 0); // Pokračuje, kým používateľ nezadá 0

    // Výstup
    printf("POCET ZADANYCH CISEL: %d\n", pocet);
    printf("SUCET CISEL DELITELNYCH 4: %d\n", sucet);
    printf("PROGRAM SKONCIL.\n");

    return 0;
}