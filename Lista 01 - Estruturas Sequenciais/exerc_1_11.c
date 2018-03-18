#include <stdio.h>
#include <stdlib.h>

main ()

{
	float CTm, NV, NR, C, CTk, QL;
	
	printf ("Informe o Comprimento total da pista (m): \n");
	scanf ("%f", &CTm);
	
	printf ("Informe o numero de voltas: \n");
	scanf ("%f", &NV);
	
	printf ("Informe o numero de reabastecimentos: \n");
	scanf ("%f", &NR);
	
	printf ("Informe o consumo medio (km/l): \n");
	scanf ("%f", &C);
	
	CTk = CTm / 1000;
	QL = ((C / CTk) * NV) / NR;
	
	printf ("Quantidade minima de litros: %.0f\n", QL);
	
	system ("pause");	
}
