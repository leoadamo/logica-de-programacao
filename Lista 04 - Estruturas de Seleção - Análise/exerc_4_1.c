#include <stdio.h>
#include <stdlib.h>

int main ()

{
	int A, B, resp;
	
	do {
	
	printf ("Informe A: ");
	scanf ("%d", &A);
	
	printf ("Informe B: ");
	scanf ("%d", &B);
	
	printf ("Amarelo\n");
	
	if (A == 1){
		printf ("Azul\n");
		printf ("Verde\n");
		printf ("Roxo\n");	
	}else{
		printf ("Pera\n");
		if (B == 1)
			printf ("Maca\n");
		else
			printf ("Morango\n");			
	}
	printf ("Uva\n");
	
	printf ("Voce deseja retornar?\n");
	scanf ("%d", &resp);
	
	}while (resp == 1);
	
	system ("pause");
}
