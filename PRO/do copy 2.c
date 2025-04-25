#include <stdio.h>

int main()
{
    int cislo, cifernySucet = 0;

    // Vstup: Zadajte prirodzené číslo
    printf("ZADAJTE PRIRODZENE CISLO: ");
    scanf("%d", &cislo);

    // Overenie, že číslo je prirodzené
    if (cislo <= 0)
    {
        printf("ZADANE CISLO NIE JE PRIRODZENE.\n");
        return 1;
    }

    // Výpočet ciferného súčtu
    do
    {
        cifernySucet += cislo % 10; // Pridá poslednú cifru k súčtu
        cislo /= 10;                // Odstráni poslednú cifru
    } while (cislo > 0);            // Pokračuje, kým číslo nie je 0

    // Výstup
    printf("CIFERNY SUCET JE: %d\n", cifernySucet);

    return 0;
}