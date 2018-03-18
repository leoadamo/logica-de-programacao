#include <stdio.h>
#include <stdlib.h>

main ()

{
	int N;
	
	printf ("Informe um numero: ");
	scanf ("%d", &N);
	
	if (N >= 0){
		printf ("POSITIVO\n");
	}
	else
		printf ("NEGATIVO\n");
		
	system ("pause");	 
}
