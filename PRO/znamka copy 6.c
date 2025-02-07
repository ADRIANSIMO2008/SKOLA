#include <stdio.h>
int main()
{
    int vstup;
    char P;
    printf("ZADAJTE POHLAVIE (D = DIEVCA, C = CHLAPEC): ");
    scanf ("%c", &P);
    switch (P)
    {
    case 'C':
        printf("ZADAJTE VYSKU: ");
        scanf ("%d", &vstup);
        if (vstup <= 160 && vstup > 0)
        {
            printf("JUDO");
            return 0;
        }
        if (vstup > 160 && vstup < 180)
        {
            printf("FUTBAL");
            return 0;
        }
        if (vstup >= 180)
        {
            printf("BASKETBAL");
            return 0;
        }
        break;
    case 'D':
    
        printf("ZADAJTE VYSKU: ");
        scanf ("%d", &vstup);
        if (vstup <= 160 && vstup > 0)
        {
            printf("GYMNASTIKA");
            return 0;
        }
        if (vstup > 160 && vstup < 180)
        {
            printf("VOLEJBAL");
            return 0;
        }
        if (vstup >= 180)
        {
            printf("BASKETBAL");
            return 0;
        }
        break;
    default:
        break;
    }
    return 0;
}
