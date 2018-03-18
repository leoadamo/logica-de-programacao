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
			if (B == 1){
				printf ("A\n");
				printf ("B\n");
			}	
		}printf ("C\n");
		if (C == 1){
			printf ("D\n");
			printf ("E\n");
		}else
			printf ("F\n");
		
		printf ("Deseja continuar?\n");
		scanf ("%d", &resp);	
	}while (resp == 1);
	
	system ("pause");
}
