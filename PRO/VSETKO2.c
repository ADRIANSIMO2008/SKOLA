#include <stdio.h>
int main()
{
    int vstup;
    printf("ZADAJTE + pre PLUS - pre MINUS * pre KRAT A / pre DELENE: ");
    scanf ("%c", &vstup);
    if (vstup == '+') {
        int num, numdve, num2;
        printf ("(PLUS) ZADAJTE DVA CISLA: ");
        scanf ("%d %d", &num, &numdve);
        num2 = num + numdve;
        printf ("%d + %d = %d",num,numdve,num2);
        return 0;
    }
    if (vstup == '-') {
        int num, numdve, num2;
        printf ("(MINUS) ZADAJTE DVA CISLA: ");
        scanf ("%d %d", &num, &numdve);
        num2 = num - numdve;
        printf ("%d - %d = %d",num,numdve,num2);
        return 0;
    }
    if (vstup == '*') {
        int num, numdve, num2;
        printf ("(KRAT) ZADAJTE DVA CISLA: ");
        scanf ("%d %d", &num, &numdve);
        num2 = num * numdve;
        printf ("%d * %d = %d",num,numdve,num2);
        return 0;
    }
    if (vstup == '/') {
        float num2;
        int num, numdve;
        printf ("(DELENE) ZADAJTE DVA CISLA: ");
        scanf ("%d %d", &num, &numdve);
        num2 = num / numdve;
        printf ("%d : %d = %f",num,numdve,num2);
        return 0;
    }
    else {
        printf("CHYBA - ZADAL SI ZLY ZNAK");
    }
}
