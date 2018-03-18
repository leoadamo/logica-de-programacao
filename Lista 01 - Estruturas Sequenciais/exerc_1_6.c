#include <stdio.h>
#include <stdlib.h>

main ()

{
	float C, L, A, AT, QC;
	
	printf ("Informe o Comprimento: \n");
	scanf ("%f", &C);
	
	printf ("Informe a largura: \n");
	scanf ("%f", &L);
	
	printf ("Informe a altura: \n");
	scanf ("%f", &A);
	
	AT = (C*A*2) + (L*A*2);
	QC = AT/1.5;
	
	printf ("Quantidade de caixas necessarias: %.0f\n", QC);
	
	system ("pause");
	
}
