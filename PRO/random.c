#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int min, max, randomNumber,randomNumber2, randomNumber3, randomNumber4, randomNumber5;

    // Vstup: Zadajte interval
    printf("ZADAJTE MINIMALNU HODNOTU: ");
    scanf("%d", &min);
    printf("ZADAJTE MAXIMALNU HODNOTU: ");
    scanf("%d", &max);

    // Inicializácia generátora náhodných čísel
    srand(time(NULL));

    // Generovanie náhodného čísla v intervale <min, max>
    randomNumber = rand() % (max - min + 1) + min;
    randomNumber2 = rand() % (max - min + 1) + min;
    randomNumber3 = rand() % (max - min + 1) + min;
    randomNumber4 = rand() % (max - min + 1) + min;
    randomNumber5 = rand() % (max - min + 1) + min;

    // Výstup
    printf("NAHODNE CISLO Z INTERVALU <%d, %d>: %d %d  %d  %d  %d\n", min, max, randomNumber,randomNumber2, randomNumber3, randomNumber4, randomNumber5);
    printf("========================================================================== \n");

    printf("Press Enter to continue...");
    getchar();
    getchar();

    return 0;
}