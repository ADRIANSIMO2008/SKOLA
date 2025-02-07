#include <stdio.h>
int main()
{
    int vstup,vstp,a,b;
    printf("ZADAJTE MAX CISLO: \n");
    scanf ("%d", &b);
    printf("ZADAJTE CISLO O KTORE SA BUDE ZVYSOVAT: \n");
    scanf ("%d", &vstp);
    for (a = vstp; a <= b; a+=vstp)
    {
        printf("%d \n", a);
    }
    return 0;
}