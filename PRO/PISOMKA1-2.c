#include <stdio.h>
int main()
    {
        int HOD,pre,doz;

        //VSTUP

        printf ("ZADAJTE PORADOVE CISLO PISMENA: ");
        scanf ("%d", &HOD);
        printf ("ZADAJTE HODNOTU O KTORU SA MA CISLO POSUNUT DOPREDU: ");
        scanf ("%d", &pre);
        printf ("ZADAJTE HODNOTU O KTORU SA MA CISLO POSUNUT DOZADU: ");
        scanf ("%d", &doz);

        //VYSTUP

        printf ("ZADANE PORADOVE CISLO: %d \n", HOD);
        printf ("ZNAK S TYMTO CISLOM JE: %c \n", HOD);
        printf ("ZNAK POSUNUTY O %d DOPREDU JE: %c \n",pre ,HOD+pre);
        printf ("ZNAK POSUNUTY O %d DOZADU JE: %c \n",doz ,HOD-doz);
        return 0;
    }
