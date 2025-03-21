#include <stdio.h>

int main()
{
    int n;
    // VYSTUP
    printf("ZADJTE POCET:\n");
    scanf("%d", &n);
    printf("========================================================================== \n");

    // VYPOCET
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++) 
        {
            printf("O "); 
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