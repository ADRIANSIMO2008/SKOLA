#include <stdio.h>
int main()
{
    int a;
    printf("ZADAJTE CISLO: ");
    scanf("%d", &a);
    while (a!=0)
    {
        printf("2 * %d = %d \n", a, a*2);
        printf("ZADAJTE CISLO: ");
        scanf("%d", &a);
    }
    return 0;
}