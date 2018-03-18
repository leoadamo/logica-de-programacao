#include <stdio.h>

int main (void) {
	
	int q, i, anoref, ano[10], idade[10];
	
	printf ("Informe a quantidade de Pessoas: ");
	scanf ("%d", &q);
	
	for (i = 0; i <= q - 1; i++) {
		
		printf ("Informe o ano %d: ", i);
		scanf ("%d", &ano[i]);
	}
	
	printf ("Informe um ano de Referencia: ");
	scanf ("%d", &anoref);
	
	for (i = 0; i <= q - 1; i++)
		
		idade[i] = anoref - ano[i];
		
	printf ("Idades Futuras: \n");	
		
	for (i = 0; i <= q - 1; i++)
	
		printf ("%d ", idade[i]);
		
	printf ("\n");
	
	return 0;		
	
}
