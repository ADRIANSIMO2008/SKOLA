#include <stdio.h>
#include <limits.h> // Pre definície INT_MAX a INT_MIN

int main()
{
    int cislo,cislo2=0;

    printf("ZADAJTE CISLA (ZADAJTE 0 NA UKONCENIE):\n");

    while (1)
    {
        printf("ZADAJTE CISLO: ");
        scanf("%d", &cislo);
        cislo2 = cislo2 + cislo;
        if (cislo >= 1500)
        {
            break; // Ukonči cyklus, ak je zadané číslo 0
        }
    }

    // Výstup
        printf("Sucet cisel: %d\n", cislo2);

    return 0;
}