#include <stdio.h>
int main()
{
    int a,b,c=0,d;
    printf("ZADAJTE CISLO: ");
    scanf("%d", &a);
    a == b;
    while (b!=0)
    {
        printf("%d\n",a);
        printf("ZADAJTE CISLO: ");
        scanf("%d", &b);
        a = a + b;
        c++;
    }

    printf("CELKOVA SUMA NAKUPOV: %d\n",a);
    printf("Pocet nakupov: %d\n",c);
    d= a/c;
    printf("Primer: %d",d);
    

    return 0;
}