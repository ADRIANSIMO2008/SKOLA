#include <stdio.h>
int main()
{
    int max, i, suma = 0;
    float priemer;
    printf("ZADAJTE POCET CISEL: ");
    scanf("%d", &max);

    int pole[max];
    // Používateľ zadáva čísla do poľa
    for (i = 0; i < max; i++)
    {
        printf("ZADAJTE CISLO %d: ", i + 1);
        scanf("%d", &pole[i]);
    }
    // Výpočet súčtu
    for (i = 0; i < max; i++)
    {
        suma += pole[i];
    }
    priemer = (float)suma / max;

    printf("SUCET ZADANYCH CISEL JE: %d\n", suma);
    printf("PRIEMER ZADANYCH CISEL JE: %.2f\n", priemer);
    // Vypíše každé druhé číslo
    printf("KAZDE DRUHE CISLO: ");
    for (i = 1; i < max; i += 2)
    {
        printf("%d ", pole[i]);
    }
    printf("\n");
    printf("KAZDE PRVE CISLO: ");
    // Vypíše každé prvé číslo
    for (i = 0; i < max; i += 2)
    {
        printf("%d ", pole[i]);
    }

    return 0;
}