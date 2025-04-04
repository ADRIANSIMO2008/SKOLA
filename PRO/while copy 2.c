#include <stdio.h>
int main()
{
    int a, i = 1;
    printf("ZADAJTE CISLO: ");
    scanf("%d", &a);

    // Výpis čísel od 1 po zadané číslo
    while (i <= a)
    {
        printf("%d\n", i);
        i++;
    }

    return 0;
}