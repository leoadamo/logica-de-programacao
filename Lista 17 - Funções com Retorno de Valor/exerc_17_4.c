#include <stdio.h>

int fatorial (int n);

int main (void) {
	
	int n, res;
	
	printf ("Informe um Inteiro: ");
	scanf ("%d", &n);
	
	res = fatorial(n);
	printf ("Fatorial de %d eh: %d", n, res);
	
	return 0;
}

int fatorial (int n) {
	
	int i, fat = 1;
	
	for (i = n; i >= 1; i--) {
		fat = fat * i;
	}
	
	return fat;
}
