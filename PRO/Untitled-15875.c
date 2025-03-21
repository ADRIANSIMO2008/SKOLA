#include <stdio.h>

int main()
{
    // VYSTUP
    printf("MALA NASOBILKA:\n");
    printf("========================================================================== \n");

    // VYPOCET
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++) 
        {
            printf("%4d", i * j); 
        }
        printf("\n"); 
    }

    printf("========================================================================== \n");

    // End
    printf("Press Enter to continue...");
    getchar();

    return 0;
}