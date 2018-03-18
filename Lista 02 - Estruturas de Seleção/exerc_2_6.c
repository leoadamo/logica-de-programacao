#include <stdio.h>
#include <stdlib.h>

main ()

{
	float qm, vc;
	
	printf ("Informe a Quantidade de Macas: ");
	scanf ("%f", &qm);
	
	if (qm >= 12)
		vc = qm * 0.25;
		
	else
		vc = qm * 0.30;
		
	printf ("O Valor da compra e: %.2f\n", vc);
	
	system ("pause");
}
