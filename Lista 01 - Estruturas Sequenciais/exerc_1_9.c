#include <stdio.h>
#include <stdlib.h>

main ()

{
	int MI, MF, QL, VR, MC, LT;
	float PC = 2.50;
	
	printf ("Informe a marcacao inicial: \n");
	scanf ("%d", &MI);
	
	printf ("Informe a marcacao final: \n");
	scanf ("%d", &MF);
	
	printf ("Informe a quantidade de litros consumidos: \n");
	scanf ("%d", &QL);
	
	printf ("Informe o valor recebido: \n");
	scanf ("%d", &VR);
	
	MC = (MF - MI) / QL;
	LT = VR - (QL * PC);
	
	printf ("Media de consumo: %dKm/L\n", MC);
	printf ("Lucro liquido: R$%d\n", LT);
	
	system ("pause");
		
}
