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
		
		if (A == 1){
			printf ("Morango\n");
			if (B == 1){
				if (C == 1)
					printf ("Pera\n");
				else
					printf ("Abacate\n");	
			}
		}
		printf ("Limao\n");
		printf ("Voce deseja continuar?\n");
		scanf ("%d", &resp);
		
	}while (resp == 1);
	
	system ("pause");
}
