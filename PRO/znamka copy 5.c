#include <stdio.h>
int main()
{
    int vstup;
    printf("ZADAJTE VEK: ");
    scanf ("%d", &vstup);
    if (vstup == 0)
    {
        printf("NOVORODENEC");
        return 0;
    }
    if (vstup <= 2 && vstup >= 1)
    {
        printf("BATOLA");
        return 0;
    }
    if (vstup >= 3 && vstup <= 6)
    {
        printf("PREDSKOLAK");
        return 0;
    }
    if (vstup >= 7 && vstup <= 12)
    {
        printf("MLADSI SKOLSKY VEK");
        return 0;
    }
    if (vstup >= 13 && vstup <= 15)
    {
        printf("STARSI SKOLSKY VEK");
        return 0;
    }
    if (vstup >= 16 && vstup <= 18)
    {
        printf("MLADISTVY");
        return 0;
    }
    if (vstup >= 19 && vstup <= 25)
    {
        printf("MLADY DOSPELY");
        return 0;
    }
    if (vstup >= 26 && vstup <= 70)
    {
        printf("DOSPELY");
        return 0;
    }
    if (vstup >= 71 && vstup <= 120)
    {
        printf("STAREC");
        return 0;
    }
    else
    {
        printf("ZADALI STE ZLU HODNOTU");
        return 0;
    }

}
