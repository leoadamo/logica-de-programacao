#include <stdio.h>
#include <stdlib.h>

main ()

{
	int nasc, ano, idade_perm;
	
	printf ("Informe o ano de nascimento: ");
	scanf ("%d", &nasc);
	
	ano = 2017;
	
	idade_perm = ano - nasc;
	
	if (idade_perm >= 18)
		printf ("Pode Votar\n");
	
	else
		printf ("Nao Pode Votar\n");
	
	system ("pause");		
}
