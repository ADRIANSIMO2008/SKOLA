#include <stdio.h>

int main()
{
    int cislo, sucet = 0, pocet = 0;
    float priemer;

    // Použitie do-while
    do
    {
        printf("ZADAJTE CISLO (ZAPORNE CISLO UKONCI PROGRAM): ");
        scanf("%d", &cislo);

        if (cislo >= 0)
        {
            sucet += cislo; // Pridá číslo k súčtu
            pocet++;        // Zvýši počet zadaných čísel
        }

    } while (cislo >= 0); // Pokračuje, kým číslo nie je záporné

    // Výpočet aritmetického priemeru
    if (pocet > 0)
    {
        priemer = (float)sucet / pocet;
        printf("ARITMETICKY PRIEMER ZADANYCH CISEL JE: %.2f\n", priemer);
    }
    else
    {
        printf("NEBOLI ZADANE ZIADNE KLADNE CISLA.\n");
    }

    // Použitie while
    sucet = 0;
    pocet = 0;
    printf("\nTERAZ POUZIJEME WHILE:\n");
    printf("ZADAJTE CISLA (ZAPORNE CISLO UKONCI PROGRAM):\n");

    printf("ZADAJTE CISLO: ");
    scanf("%d", &cislo);

    while (cislo >= 0)
    {
        sucet += cislo; // Pridá číslo k súčtu
        pocet++;        // Zvýši počet zadaných čísel

        printf("ZADAJTE CISLO: ");
        scanf("%d", &cislo);
    }

    // Výpočet aritmetického priemeru
    if (pocet > 0)
    {
        priemer = (float)sucet / pocet;
        printf("ARITMETICKY PRIEMER ZADANYCH CISEL JE: %.2f\n", priemer);
    }
    else
    {
        printf("NEBOLI ZADANE ZIADNE KLADNE CISLA.\n");
    }

    return 0;
}