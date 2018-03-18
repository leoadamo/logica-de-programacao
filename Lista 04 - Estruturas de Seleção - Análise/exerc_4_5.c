#include <stdio.h>
#include <stdlib.h>

int main ()

{
	int A, B, C, D, E, resp;
	
	do {
		
		printf ("Informe A: ");
		scanf ("%d", &A);
		
		printf ("Informe B: ");
		scanf ("%d", &B);
		
		printf ("Informe C: ");
		scanf ("%d", &C);
		
		printf ("Informe D: ");
		scanf ("%d", &D);
		
		printf ("Informe E: ");
		scanf ("%d", &E);
		
		if (A == 1){
			printf ("Amarelo\n");
			if (B == 1){
				printf ("Azul\n");
			}
			printf ("Preto\n");
			if (D == 1)
				printf ("Verde\n");
			else
				printf ("Violeta\n");		
		}else{
			if (C == 1)
				printf ("Vermelho\n");
			if (E == 1){
				printf ("Laranja\n");
				printf ("Cinza\n");
			}	
		}
		printf ("Deseja continuar?\n");
		scanf ("%d", &resp);
	}while (resp == 1);
	
	system ("pause");
}
