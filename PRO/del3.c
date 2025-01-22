#include <stdio.h>
int main()
{
    int vstup,vstp,a,b,c;

    printf("ZADAJTE 1 PRE DEL 3MI A 4MI A 2 PRE DEL ZADANYM CISLOM A 3 PRE DELENIE DVOMA ZADANYMII CISLAMI: ");
    scanf ("%d", &vstup);

    if (vstup == 1) {
        printf("ZADAJTE CISLO: ");
        scanf ("%d", &vstp);
        a = vstp % 3;
        if (a == 0) {
            b = vstp % 4;
            if (b == 0) {
                printf ("CISLO JE DELITELNE 3MI A 4MI");
            }
            if (b != 0) {
                printf ("CISLO JE DELITELNE LEN 3MI");
            }
        }
        if (a != 0) {
            b = vstp % 4;
            if (b == 0) {
                printf ("CISLO JE DELITELNE LEN 4MI");
            }
            if (b != 0) {
            printf ("CISLO NIE JE DELITELNE ANI 3MI ANI 4MI");
            }
        }
    }

    if (vstup == 2)
    {
    printf("ZADAJTE 2 CISLO: ");
    scanf ("%d %d", &vstup, &vstp);
    
    a = vstup % vstp;
    
    if (a == 0) {
        printf ("CISLO JE DELITELNE %d MI", vstp );
    }

    if (a != 0) {
        printf ("CISLO NIE JE DELITELNE %d MI" , vstp);
    }
    }

    if (vstup == 3)
    {
        printf("ZADAJTE 3 CISLA: ");
        scanf ("%d %d %d", &vstup, &vstp, &c);
        
        a = vstup % vstp;
        
        if (a == 0) {
            printf ("CISLO JE DELITELNE");
        }
        if (a != 0) {
            printf ("CISLO NIE JE DELITELNE");
        }
    }


    return 0;
}
