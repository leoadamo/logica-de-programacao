#include <stdio.h>
#include <stdlib.h>

int main ()

{
	int A, B, C, resp;
	
	do {
		printf ("Informe A: ");
		scanf ("%d", &A);
		
		printf ("Informe B: ");
		scanf ("%d", &B);
		
		printf ("Informe C: ");
		scanf ("%d", &C);
		
		if (A == 1)
			printf ("Verde\n");
		else{
			if (B == 2){
				if (C == 3)
					printf ("Azul\n");
				else{
					printf ("Uva\n");
					printf ("Pera\n");
				}	
			}else
				printf ("Preto\n");
		}
		printf ("Violeta\n");
		
		printf ("Voce deseja retornar?\n");
		scanf ("%d", &resp);
				
	}while (resp == 1);
	
	system ("pause");
}
