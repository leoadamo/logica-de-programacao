#include <stdio.h>
#include <stdlib.h>

int main ()

{
	double n1, n2, n3, n4, m;
	
	printf ("Informe a nota da primeira avaliacao: ");
	scanf ("%lf", &n1);

	printf ("Informe a nota da segunda avaliacao: ");
	scanf ("%lf", &n2);
	
	printf ("Informe a nota da terceira avaliacao: ");
	scanf ("%lf", &n3);
	
	printf ("Informe a nota da quarta avaliacao: ");
	scanf ("%lf", &n4);	
	
	m = (n1 + n2 * 2 + n3 * 3 + n4) / 7;
	
	printf ("Media = %.2lf\n", m);
	
	if (m >= 9)
		printf ("Conceito A\n");
	else{
		if (m >= 7.5)
			printf ("Conceito B\n");
		else{
			if (m >= 6)
				printf ("Conceito C\n");
			else
				printf ("Conceito D\n");	
		}	
	}
	system ("pause");	
}
