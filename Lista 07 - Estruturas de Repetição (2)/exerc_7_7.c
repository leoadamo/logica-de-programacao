#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int qt, ta1, ta2, tn;
	float c, d, va;
	
	qt = 0, ta1 = 0, ta2 = 0, tn = 0;
	
	printf ("Informe o valor maximo aceito: ");
	scanf ("%f", &va);
	
	do {
		
		printf ("Informe o custo: ");
		scanf ("%f", &c);
		
		if (c > 0){
			
			printf ("Informe a distancia: ");
			scanf ("%f", &d);
			
			if (c < va){
				if (d > 150)
					ta1++;
				else
					ta2++;	
			}else
				tn++;
				
			qt++;		
		}
		
	} while (c > 0);
	
	printf ("Trechos Negados: %d\n", tn);
	printf ("Quantidade de Trechos: %d\n", qt);
	printf ("Trechos Aceitos: %d\n", ta1);
	
	system ("pause");
}
