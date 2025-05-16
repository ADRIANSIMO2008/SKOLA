#include <stdio.h>

int main()
{
    float cislo = 10.1;

    do {
        cislo -= 0.1;
        printf("cislo = %.1f\n", cislo);
    } while (cislo >= 0);

    printf("PROGRAM SKONCIL.\n");

    printf("Press Enter to continue...");
    getchar();
    return 0;
}