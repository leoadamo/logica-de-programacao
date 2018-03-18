#include <stdio.h>
#include <stdlib.h>

int main ()

{
	int ang1, ang2, ang3, resp;
	
	do {
	
	printf ("Informe o angulo 1: ");
	scanf ("%d", &ang1);
	
	printf ("Informe o angulo 2: ");
	scanf ("%d", &ang2);
	
	printf ("Informe o angulo 3: ");
	scanf ("%d", &ang3);
	
	if (ang1 == 90 || ang2 == 90 || ang3 == 90)
		printf ("Retangulo\n");
	else{
		if (ang1 < 90 && ang2 < 90 && ang3 < 90)
			printf ("Acutangulo\n");
		else
			printf ("Obtusangulo\n");	
	}
	printf ("Deseja continuar?\n");
	scanf ("%d", &resp);
	
	}while (resp == 1);
	
	system ("pause");		
}
