#include <stdio.h>
int main()
{
    int num, numdve, num2;
    printf ("ZADAJTE DVA CISLA: ");
    scanf ("%d %d", &num, &numdve);
    num2 = num - numdve;
    printf ("%d - %d = %d",num,numdve,num2);
    return 0;
    }
