#include <stdio.h>
#include <stdlib.h>

int main ()

{
	float a, p;
	int resp;
	
	do {
		
	system ("cls");	
	
	printf ("Informe a altura: ");
	scanf ("%f", &a);
	
	printf ("Informe o peso: ");
	scanf ("%f", &p);
	
	if (a >= 1.75 && a <= 1.90){
		if (p >= 70 && p <= 80)
			printf ("Aceito\n");
		else
			printf ("Recusado por peso\n");	
	}else{
		if (p >= 70 && p <=80)
			printf ("Recusado por altura\n");
		else
			printf ("Totalmente recusado\n");	
	}
	printf ("Deseja continuar?\n");
	scanf ("%d", &resp);
	
	} while (resp == 1);
	
	system ("pause");
}
