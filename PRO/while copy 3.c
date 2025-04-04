#include <stdio.h>
int main()
{
    int a, i = 1;
    printf("ZADAJTE CISLO: ");
    scanf("%d", &a);
    while (a!=0)
    {
        a % 5 == 0 ? printf("ZADANE CISLO JE DELITELOM 5\n") : printf("ZADANE CISLO NIE JE DELITELOM 5\n");
        printf("ZADAJTE CISLO: ");
        scanf("%d", &a);
        
    }

    return 0;
}