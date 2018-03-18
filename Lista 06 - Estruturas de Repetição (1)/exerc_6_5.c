#include <stdio.h>
#include <stdlib.h>

int main ()

{
	int senha;
	
	do {
	
		printf ("Informe a senha: ");
		scanf ("%d", &senha);
		
		system ("cls");	
		
		if (senha == 2009)
			printf ("Acesso Permitido\n");
		else
			printf ("Senha Invalida\n");	
							
	} while (senha != 2009);
	
	system ("pause");
		
}
