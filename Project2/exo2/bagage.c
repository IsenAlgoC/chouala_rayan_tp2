#include <stdlib.h>
#include <stdio.h>

void F_changer(int* a, int* b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	int z = 1;
	int a;
	int *d;
	int b;
	int c;
	while (z == 1) {
		printf("entrer la longueur en cm \n");
		scanf_s("%u", &a);
		printf("entrer la largeur en cm\n");
		scanf_s("%u", &b);
		printf("entrer la profondeur en cm\n");
		scanf_s("%u", &c);
		if (b > a)
			F_changer(&a, &b);
		if (c > a)
			F_changer(&a, &c);
		if (c > b)
			F_changer(&b, &c);
		//printf("%d ", a);
		//printf("%d ", b);
		//printf("%d\n", c);
		if (a < 55 && b < 35 && c < 25) {
			printf("valide\n");
		}
		else {
			printf("invalide\n");
		}
		printf("voulez faire un autre test? repondre 1 pour oui ou et 0 pour non\n");
		scanf_s("%u", &z);
		if (z==0)
			return(EXIT_SUCCESS);
		system("pause");
	}
	return(EXIT_SUCCESS);
	}