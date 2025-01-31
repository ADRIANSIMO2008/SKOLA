#include <stdio.h>
int main() {
    int a;
    
    // VSTUP

    printf("ZADAJ 1 CISLA: ");
    scanf("%d", &a);

    // VYPOCET

    if (a == 90){
        printf("JE TO PRVOUHOLY  TROJUHOLNIK");
        return 0;
    }
    if (a < 90 && a > 0){
        printf("JE TO OSTRY TROJUHOLNIK");
        return 0;
    }
    if (a > 90 && a < 180){
        printf("JE TO TUPY TROJUHOLNIK");
        return 0;
    }
    else {
        printf("NEPLATNE CISLO");
    }
    return 0;
}