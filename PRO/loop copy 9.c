#include <stdio.h>
int main()
{
    int vstup,vstp,a,b;
    printf("ZADAJTE MIN CISLO: \n");
    scanf ("%d", &b);
    printf("ZADAJTE CISLO O KTORE SA BUDE ZMENSOVAT: \n");
    scanf ("%d", &vstp);
    printf("ZADAJTE POCIATOCNE CISLO: \n");
    scanf ("%d", &a);
    for (a = a; a >= b; a++)
    {
        printf("%d. secko sme zabudli\n", a);
    }
    return 0;
}