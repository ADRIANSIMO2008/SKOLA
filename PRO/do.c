#include <stdio.h>

int main()
{
    int cislo;

    do
    {
        // Vstup: Zadajte číslo
        printf("ZADAJTE CISLO (ZADAJTE 0 NA UKONCENIE): ");
        scanf("%d", &cislo);

        if (cislo != 0)
        {
            // Výstup: Vypíše dvojnásobok čísla
            printf("DVOJNASOBOK CISLA %d JE %d\n", cislo, cislo * 2);
        }

    } while (cislo != 0); // Pokračuje, kým používateľ nezadá 0

    printf("PROGRAM SKONCIL.\n");
    return 0;
}