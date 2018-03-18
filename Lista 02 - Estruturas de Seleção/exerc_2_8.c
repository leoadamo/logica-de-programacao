#include <stdio.h>
#include <stdlib.h>

main ()

{
	int senha;
	
	printf ("Informe sua Senha: ");
	scanf ("%d", &senha);
	
	if (senha == 1234)
		printf("ACESSO PERMITIDO\n");
	
	else 
		printf ("ACESSO NEGADO\n");
	
	system ("pause");		
}
