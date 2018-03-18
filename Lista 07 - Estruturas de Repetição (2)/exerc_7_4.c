#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int t = 0, senha;
	
	do {
		
		printf ("Informe sua senha: ");
		scanf ("%d", &senha);
		
		t++;
		
		if (senha == 1234)
			printf ("Acesso Permitido\n");
		else
			printf ("Acesso Negado\n");
				
	} while (senha != 1234);
	
	printf ("Numero de Tentativas: %d\n", t);
	
	system ("pause");
}
