#include <stdlib.h>
#include <stdio.h>

int main() {
	int n = 1;
	int a = 0;
	while (n < 101) {
		a = a + n;
		if (65535 - a <= n) {
			printf("le nombre est trop grand");
			printf("%u", n);
			return(EXIT_SUCCESS);
		}
		n = n + 1;
	}
	printf("%u ", n);
	printf("%u\n", a);
	int m;
	int b = 0;
	int i = 0;
	printf("entrer une valeur de n : ");
	scanf_s("%u", &m);
	while (m > 360) {
		printf("essayer un nombre entre 0 et 360");
		scanf_s("%u", &m);
	}
	for (i=0 ; i < m+1; i++) {
		b = b + i;
		if (65535 - b <= i) {
			printf("le nombre est trop grand");
			return(EXIT_SUCCESS);
		}

	}
	printf("la valeur de n est %u ", m);
	printf("la somme est %u\n", b);
	int x = 1 ;
	int y = 0;
	do { 
		y = y + x; 
		x = x + 1; } while (x < 101);
	printf("%u ", x);
	printf("%u", y);
	system("pause");
	return(EXIT_SUCCESS);
}