#include <stdio.h>
#include <stdlib.h>

main ()

{
	int N1, N2, m;
	
	printf ("Informe a nota na primeira avaliacao: ");
	scanf ("%d", &N1);
	
	printf ("Informe a nota na segunda avalicao: ");
	scanf ("%d", &N2);
	
	m = (N1 + N2) / 2;
	
	printf ("Media: %d\n", m);
	
	if (m >= 6){
		printf ("PARABENS! voce foi aprovado\n");
	}
	
	system ("pause");
}
