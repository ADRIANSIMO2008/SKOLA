#include <stdio.h>
int main()
{
    int vstup,vstp,a,b,c;
    printf("ZADAJTE ZNAMKU: ");
    scanf ("%d", &vstup);

    switch (vstup)
    {
    case 1:
        printf("VYBORNY");
        break;
    case 2:
        printf("CHVALITEBNY");
        break;
    case 3:
        printf("DOBRY");
        break;
    case 4:
        printf("DOSTATOCNY");
        break;
    case 5:
        printf("NEDOSTATOCNY");
        break;
    default:
    printf("ZADALI STE ZLU ZNAMKU");
        break;
    }
    return 0;
}
