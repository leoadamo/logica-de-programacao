#include <stdio.h>
#include <stdlib.h>

main ()

{
	float N1, N2, M;
	
	printf ("Informe a nota na primeira avaliacao: ");
	scanf ("%f", &N1);
	
	printf ("Informe a nota na segunda avaliacao: ");
	scanf ("%f", &N2);
	
	M = (N1 + N2) / 2;
	
	printf ("Media Final: %.1f\n", M);
	
	if (M >= 6)
		printf ("Aprovado\n");
	
	else
		if (M >= 3)
			printf ("em exame\n");
		else
			printf ("Reprovado\n");

	system ("pause");			
}
