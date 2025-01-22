#include <stdio.h>
int main() {
    int vel;
    printf ("ZADAJTE VELKOST: ");
    scanf ("%d", &vel);
    int size = vel; // adjust the size as needed
    // print the top semi-circular part of the heart
    for (int a = size / 2; a <= size; a += 2) {
        for (int b = 1; b < size - a; b += 2) {
            printf(" "); // space before the peak
        }
        for (int b = 1; b <= a; b++) {
            printf("*"); // print the peak
        }
        for (int b = 1; b <= size - a; b++) {
            printf(" "); // space between peaks
        }
        for (int b = 1; b <= a - 1; b++) {
            printf("*"); // print the second peak
        }
        printf("\n");
    }
    // print the base of the heart (inverted triangle)
    for (int a = size; a >= 0; a--) {
        for (int b = a; b < size; b++) {
            printf(" "); // space before the triangle
        }
        for (int b = 1; b <= (a * 2) - 1; b++) {
            printf("*"); // print the triangle
        }
        printf("\n");
    }

    return 0;
}
