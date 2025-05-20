#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int pole[5], i, tip, found;
    srand(time(NULL)); // Inicializácia generátora náhodných čísel

        for (i = 0; i < 5; i++)
        {
            pole[i] = rand() % 100; // Generovanie náhodného čísla od 0 do 99
        }
        for (i = 0; i < 5; i++)
        {
            printf("%d ", pole[i]);
        }
        printf("\n");
        for (i = 0; i < 5; i++)
        {
            printf("%d ", pole[i]*3);
        }

    return 0;
}