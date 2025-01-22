#include <stdio.h>
int main()
    {
        char pismeno;
        int HOD;
        printf ("ZADAJ JEDNO PISMENO: ");
        scanf ("%c", &pismeno);
        printf ("ZADAJTE HODNOTU O KTORU SA MA CISLO POSUNUT: ");
        scanf ("%d", &HOD);
        printf ("ZADALI STE PISMENO: %c PISMENO + %d JE %c A PISMENO - %d JE %c",pismeno,HOD,pismeno+HOD,HOD,pismeno-HOD);
        return 0;
    }
