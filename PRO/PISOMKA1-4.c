#include <stdio.h>

int main()
{
    int vys,vys1,o,d,d1;

    //VSTUP
    printf ("ZADAJ SIRKU A DLZKU IHRISKA: ");
    scanf ("%d %d", &d,&d1);
    printf ("ZADAJ POCET OBEHNUTI: ");
    scanf ("%d", &o);

    //VYPOCET
    vys = 2 * d + 2 * d1;
    vys1 = vys * o;

    //VYSTUP
    printf ("JEDNO KOLO OKOLO IHRISKA JE %d METRE \n",vys);
    printf ("PO %d KOLACH UBEHNES %d METRE",o,vys1);
    return 0;
    }
