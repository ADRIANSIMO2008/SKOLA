#include <stdio.h>
int main()
{
    int vstup,A,B,C,D;
    printf("ZADAJTE: \n 1 pre STVOREC \n 2 pre OBDLZNIK \n 3 pre KRUH \n ");
    scanf ("%d", &vstup);
    switch (vstup)
    {
    case 1:
        printf("ZADAJ STRANU STVORCA: ");
        scanf ("%d", &vstup);
        printf("OBSAH STVORCA JE: %d a OBVOD JE %d",vstup*vstup,4*vstup);
        break;
    case 2:
        printf("ZADAJ STRANY OBDLZNIKA: ");
        scanf ("%d %d", &A,&B);
        printf("OBSAH OBDLZNIKA JE: %d a OBVOD JE %d",A*B,2*(A+B));
        break;
    case 3:
        printf("ZADAJ POLOMER KRUHU: ");
        scanf ("%d", &vstup);
        printf("OBSAH KRUHU JE: %f a OBVOD JE %f",3.14*vstup*vstup,2*3.14*vstup);
        break;
    default:
        printf("ZADALI STE ZLU HODNOTU");
        break;
    }
    return 0;
}
