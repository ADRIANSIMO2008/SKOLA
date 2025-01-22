#include <stdio.h>
int main()
{
    int vstup,vstupdva,pri1;
    float pri;
    printf("ZADAJTE 2 CISLA: ");
    scanf ("%d %d", &vstup, &vstupdva);
    if (vstup != 0)
    {
        pri1 = vstupdva * -1;
        pri = pri1 / vstup;
        if (pri == -1) {
            printf ("JE TO JEDNODUCHA LINEARNA ROVNICA");    
        }
        if (pri != -1) {
            printf ("NIE JE TO VYPOCITATELNA LINEARNA ROVNICA");
        } 
    }
    if (vstup == 0)
    {
        printf ("PRVE CISLO NEMOZE BYT NULA");
    }

}
