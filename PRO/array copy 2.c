#include <stdio.h>
int main()
{
    int max, i;
    printf("ZADAJTE NAJVACSIE CISLO: ");
    scanf("%d", &max);

    int pole[max];
    // Najprv zapisovanie do pola
    for (i = 0; i < max; i++)
    {
        pole[i] = i + 1;
    }
    // Potom vypisovanie z pola
    for (i = 0; i < max; i++)
    {
        printf("%d ", pole[i]);
    }
    return 0;
}