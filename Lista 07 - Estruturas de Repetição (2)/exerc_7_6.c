#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int tc, qa, qg, d;
	
	qa = 0, qg = 0, d = 0;
	
	do {
	
		printf ("Informe o tipo de combustivel: ");
		scanf ("%d", &tc);
	
		while (tc < 1 || tc > 4){
			printf ("Informe o tipo de combustivel: ");
			scanf ("%d", &tc);
		}
		
		if (tc == 1){
			printf ("Alcool\n");
			qa++;
		}
		if (tc == 2){
			printf ("Gasolina\n");
			qg++;
		}
		if (tc == 3){
			printf ("Diesel\n");
			d++;
		}	
	
	} while (tc != 4);	
	
	printf ("Muito Obrigado\n");
	printf ("Quantidade de Alcool: %d\n", qa);
	printf ("Quantidade de Gasolina: %d\n", qg);
	printf ("Diesel: %d\n", d);
	
	system ("pause");	
}
	
	

