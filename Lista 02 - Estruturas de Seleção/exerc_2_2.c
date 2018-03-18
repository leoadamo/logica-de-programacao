#include <stdio.h>
#include <stdlib.h>

main ()

{
	float N1, N2, m;
	
	printf ("Informe a nota na primeira avaliacao: ");
	scanf ("%f", &N1);
	
	printf ("Informe a nota na segunda avalicao: ");
	scanf ("%f", &N2);
	
	m = (N1 + N2) / 2;
	
	printf ("Media: %.1f\n", m);
	
	if (m >= 6){
		printf ("PARABENS! voce foi aprovado\n");
	}else 
		printf ("Voce foi REPROVADO! Estude mais\n");
		
	system ("pause");	
}
	
