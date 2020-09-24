
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {

    srand(time(NULL));

    int i;
    int A;
    int B = rand();
    printf("Entrez un nombre entiers :");
    scanf_s("%i", &A);
    while (A != B)
    {
        if (A > B)
            printf("Trop grand \n");
        else if (A < B)
            printf("Trop petit \n");
        else
            printf("Bravooo \n");
        scanf_s("%i", &A);
    }

    return EXIT_SUCCESS;
}