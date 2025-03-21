#include <stdio.h>

int main()
{
    int n;
    // VYSTUP
    printf("ZADAJTE POCET:\n");
    scanf("%d", &n);
    printf("========================================================================== \n");

    // VYPOCET
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++) 
        {
            if (i == 1 || i == n || j == 1 || j == n)
            {
                printf("O ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n"); 
    }

    printf("========================================================================== \n");

    // End
    printf("Press Enter to continue...");
    getchar();
    getchar();

    return 0;
}