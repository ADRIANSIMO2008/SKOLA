#include <stdio.h>
#include <limits.h> // Pre definície INT_MAX a INT_MIN

int main()
{
    int cislo, max = INT_MIN, min = INT_MAX;

    printf("ZADAJTE CISLA (ZADAJTE 0 NA UKONCENIE):\n");

    while (1)
    {
        printf("ZADAJTE CISLO: ");
        scanf("%d", &cislo);

        if (cislo == 0)
        {
            break; // Ukonči cyklus, ak je zadané číslo 0
        }

        // Aktualizácia maximálneho a minimálneho čísla
        if (cislo > max)
        {
            max = cislo;
        }
        if (cislo < min)
        {
            min = cislo;
        }
    }

    // Výstup
    if (max == INT_MIN && min == INT_MAX)
    {
        printf("NEBOLI ZADANE ZIADNE CISLA.\n");
    }
    else
    {
        printf("MAXIMALNE CISLO: %d\n", max);
        printf("MINIMALNE CISLO: %d\n", min);
    }

    return 0;
}