#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main() {
	float a;
	printf("entrer votre revenu net global\n");
	scanf_s("%f", &a);
	if (a < 9701) {
		printf("votre impot brut est : %f\n", a);
	}
	if (a > 9700 && a < 26792) {
		printf("votre impot brut est : %f\n", a*0.14);
		}
	if (a > 26791 && a < 71827) {
		printf("votre impot brut est : %f\n", a*0.3);
	}
	if (a > 71826 && a < 152109) {
		printf("votre impot brut est : %f\n", a*0.41);
	}
	if (a > 152108) {
		printf("votre impot brut est : %f\n", a*0.45);
	}
	system("pause");
	return(EXIT_SUCCESS);

 }