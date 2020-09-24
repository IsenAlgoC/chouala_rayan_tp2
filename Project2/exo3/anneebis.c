#include <stdlib.h>
#include <stdio.h>

int main() {
	int a;
	printf("entrer une annee inferieur a 10000\n");
	scanf_s("%u", &a);
	while (a > 10000) {
		printf("essayer un nombre entre 0 et 10000");
		scanf_s("%u", &a);
	}
	if (a % 4 ==0 && a % 100 != 0) {
		printf("c'est une annee bis");
	}
	else if (a % 4 == 0 && a % 400 == 0 && a % 100 == 0)
	{
		printf("c'est une annee bis");
	}
	else {
		printf("c'est pas une annee bis");
	}

}