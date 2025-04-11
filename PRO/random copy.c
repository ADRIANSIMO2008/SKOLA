#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int min, max, randomNumber, guess, attempts = 0;

    // Vstup: Zadajte interval
    printf("ZADAJTE MINIMALNU HODNOTU: ");
    scanf("%d", &min);
    printf("ZADAJTE MAXIMALNU HODNOTU: ");
    scanf("%d", &max);

    // Inicializácia generátora náhodných čísel
    srand(time(NULL));
    randomNumber = rand() % (max - min + 1) + min;

    printf("UHADNITE NAHODNE CISLO Z INTERVALU <%d, %d>:\n", min, max);

    // Hádanie čísla
    do
    {
        printf("VAS TIP: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < randomNumber)
        {
            printf("NAHODNE CISLO JE VACsie.\n");
        }
        else if (guess > randomNumber)
        {
            printf("NAHODNE CISLO JE MENSIE.\n");
        }
        else
        {
            printf("GRATULUJEM! UHADLI STE CISLO %d PO %d POKUSOCH.\n", randomNumber, attempts);
        }
    } while (guess != randomNumber);
    printf("========================================================================== \n");

    printf("Press Enter to continue...");
    getchar();
    getchar();    

    return 0;
}