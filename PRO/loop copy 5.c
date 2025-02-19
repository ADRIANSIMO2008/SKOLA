#include <stdio.h>
int main()
{
    int vstup,vstp,a,b,c;
    printf("ZADAJTE MAX CISLO: \n");
    scanf ("%d", &b);
    printf("ZADAJTE MIN CISLO: \n");
    scanf ("%d", &a);
    printf("========================================================================== \n");

    for (a = vstp; b > a; a+=1)
    {
        printf("%d \n", a);
    }
    return 0;
}