#include <stdio.h>
#define CZKKURZ 25.0690
#define USDKURZ 1.0514
#define GBPKURZ 0.8259
#define CADKURZ 1.4892
#define JPYKURZ 160.0500

int main()
{
    int EUR;
    float CZK,USD,GBP,CAD,JPY;
    printf ("ZADAJTE SUMU V EUR: ");
    scanf ("%d", &EUR);
    CZK = EUR * CZKKURZ;
    USD = EUR * USDKURZ;
    GBP = EUR * GBPKURZ;
    CAD = EUR * CADKURZ;
    JPY = EUR * JPYKURZ;
    printf ("ZADANA SUMA JE %.1f CZK, %.1f USD, %.1f GBP, %.1f CAD, %.1f JPY ",CZK,USD,GBP,CAD,JPY);
    return 0;
    }
