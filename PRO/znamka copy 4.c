#include <stdio.h>
int main()
{
    int vstup;
    printf("ZADAJTE VYSKU STROMCEKU: ");
    scanf ("%d", &vstup);
    if (vstup <= 120 && vstup > 0)
    {
        printf("BUDE STAT 15$");
        return 0;
    }
    if (vstup > 120 && vstup < 150)
    {
        printf("BUDE STAT 18$");
        return 0;
    }
    if (vstup >= 150 && vstup < 180)
    {
        printf("BUDE STAT 20$");
        return 0;
    }
    if (vstup >= 180)
    {
        printf("BUDE STAT 25$");
        return 0;
    }
    if (vstup < 0)
    {
        printf("ZADALI STE ZLU HODNOTU");
        return 0;
    }
    else
    {
        printf("ZADALI STE ZLU HODNOTU");
        return 0;
    }

}
