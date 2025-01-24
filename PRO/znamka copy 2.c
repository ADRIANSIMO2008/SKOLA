#include <stdio.h>
int main()
{
    int vstup,A,B,C;
    char D;
    printf("ZADAJTE: \n + pre PLUS \n - pre MINUS \n * pre KRAT \n / pre DELENE \n ");
    scanf ("%c", &D);
    switch (D)
    {
    case '+':
        printf("(PLUS)ZADAJTE 2 CISLA: ");
        scanf ("%d %d", &A,&B);
        printf("VYSLEDOK:",A+B);
        break;
    case '-':
        printf("(MINUS) ZADAJTE 2 CISLA: ");
        scanf ("%d %d", &A,&B);
        printf("VYSLEDOK JE %d",A-B);
        break;
    case '*':
        printf("(KRAT)ZADAJTE 2 CISLA: ");
        scanf ("%d %d", &A,&B);
        printf("VYSLEDOK JE %d",A*B);
        break;
    case '/':
        printf("(DELENE) ZADAJ DVE CISLA");
        scanf ("%d %d", &A,&B);
        printf("VYSLEDOK JE %d",A/B);
        break;
    default:
        printf("ZADALI STE ZLU HODNOTU");
        break;
    }
    return 0;
}
