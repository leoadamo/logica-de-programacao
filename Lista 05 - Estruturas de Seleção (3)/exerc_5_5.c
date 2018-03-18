#include <stdio.h>
#include <stdlib.h>

int main ()

{
	int l1, l2, l3;
	
	printf ("Informe o L1: ");
	scanf ("%d", &l1);
	
	printf ("Informe o L2: ");
	scanf ("%d", &l2);
	
	printf ("Informe o L3: ");
	scanf ("%d", &l3);
	
	if (l1 == l2){
		if (l2 == l3)
			printf ("Equilatero\n");
		else
			printf ("Isoceles\n");	
	}else{
		if (l1 == l3)
			printf ("Isoceles\n");
		else{
			if (l3 == l2)
				printf ("Isoceles\n");
			else
				printf ("Escaleno\n");
		}	
	}
	system ("pause");
}
