#include <stdio.h>
#include <stdlib.h>

main ()

{
	int N;
	
	printf ("Informe um numero POSITIVO e INTEIRO: ");
	scanf ("%d", &N);
	
	if (N % 2 == 0)
		printf ("PAR\n");
		
	else 
		printf ("IMPAR\n");
		
	system ("pause");		
}
