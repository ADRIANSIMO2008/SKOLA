#include <stdio.h>
int main()
{
    int max, i;
    printf("ZADAJTE NAJVACSIE CISLO: ");
    scanf("%d", &max);

    int pole[max];
    for (i = 0; i < max; i++)
    {
        pole[i] = i + 1;
        printf("%d ", pole[i]);
    }
    return 0;
}
