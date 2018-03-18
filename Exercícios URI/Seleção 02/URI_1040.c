#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float n1, n2, n3, n4, m, ne, mf;
	
	scanf ("%f %f %f %f", &n1, &n2, &n3, &n4);
	
	m = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10;
	
	printf ("Media: %.1f\n", m);
	
	if (m >= 7)
		printf ("Aluno aprovado.\n");
	else
		if (m >= 5){
			printf ("Aluno em exame.\n");
			scanf ("%f", &ne);
			printf ("Nota do exame: %.1f\n", ne);	
			mf = (ne + m) / 2;
			
			if (mf >= 5){
				printf ("Aluno aprovado.\n");
				printf ("Media final: %.1f\n", mf);
			}else{
				printf ("Aluno reprovado.\n");
				printf ("Media final: %.1f\n", mf);	
			}
		}else{
			printf ("Aluno reprovado.\n");
		}
	
	system ("pause");		
}
