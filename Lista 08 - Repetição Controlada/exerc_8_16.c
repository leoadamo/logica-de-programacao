#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int v, i, cn;
	
	cn = 0;
	
	/* Loop para efetuar a leitura de 10 números */
	
	for (i = 1; i <= 10; i++){
		printf ("Informe um valor: ");
		scanf ("%d", &v);
		
		/* Verificação de números negativos no laço */
		
		if (v < 0)
			cn++;
	}
			
	printf ("Quantidade de negativos no intervalo: %d\n", cn);
	
	system ("pause");
}
