#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int v1, n100, n50, n20, n10, n5, n2, m1, resto1, resto2, resto3, resto4, resto5, resto6;
	
	scanf ("%d", &v1);
	
	n100 = v1 / 100;
	resto1 = (v1 % 100);
	n50 = resto1 / 50;
	resto2 = resto1 % 50;
	n20 = resto2 / 20;
	resto3 = resto2 % 20;
	n10 = resto3 / 10;
	resto4 = resto3 % 10;
	n5 = resto4 / 5;
	resto5 = resto4 % 5;
	n2 = resto5 / 2;
	resto6 = resto5 % 2;
	m1 = resto6 / 1;
	
	printf ("%d\n", v1);
	printf ("%d nota(s) de R$ 100,00\n", n100);
	printf ("%d nota(s) de R$ 50,00\n", n50);
	printf ("%d nota(s) de R$ 20,00\n", n20);
	printf ("%d nota(s) de R$ 10,00\n", n10);
	printf ("%d nota(s) de R$ 5,00\n", n5);
	printf ("%d nota(s) de R$ 2,00\n", n2);
	printf ("%d nota(s) de R$ 1,00\n", m1);
	
	system ("pause");	
}
