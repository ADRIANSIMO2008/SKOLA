#include <stdio.h>
int main()
{
    int pole[5], i;
    int delitelnych5 = 0, delitelnych3 = 0;

    for (i = 0; i < 5; i++)
    {
        printf("ZADAJTE CISLO %d: ", i + 1);
        scanf("%d", &pole[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", pole[i]);
        if (pole[i] % 5 == 0)
            delitelnych5++;
        if (pole[i] % 3 == 0)
            delitelnych3++;
    }
    printf("\nPOCET CISEL DELITELNYCH 5: %d\n", delitelnych5);
    printf("POCET CISEL DELITELNYCH 3: %d\n", delitelnych3);

    return 0;
}