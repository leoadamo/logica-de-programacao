#include <stdio.h>
#include <stdlib.h>

main ()

{
	int GG, GI;
	
	printf ("Informe o numero de Gols do Gremio: ");
	scanf ("%d", &GG);
	
	printf ("Informe o numero de Gols do Inter: ");
	scanf ("%d", &GI);
	
	if (GG > GI)
		printf ("Gremio\n");
	
	else
		if (GI > GG)
			printf ("Inter\n");
		else 
			printf ("Empate\n");
	
	system ("pause");				
}
