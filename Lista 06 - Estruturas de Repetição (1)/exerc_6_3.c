#include <stdio.h>
#include <stdlib.h>

int main ()

{
	float n1, n2, m;
	
	do {
		printf ("Informe a nota da primeira avaliacao: ");
		scanf ("%f", &n1);
		
		if (n1 >= 0){
			printf ("Informe a nota da segunda avaliacao: ");
			scanf ("%f", &n2);
		
			m = (n1 + n2) / 2;
			
			printf ("Media = %.1f\n", m);
		}
	} while (n1 >= 0);	
	
	system ("pause");
}
