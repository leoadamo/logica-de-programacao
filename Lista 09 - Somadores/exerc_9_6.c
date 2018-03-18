#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int qa, i, a;
	float n1, n2, pa, ma, s, m;
	
	a = 0, s = 0;
	
	printf ("Informe a quantidade de Alunos: ");
	scanf ("%d", &qa);
	
	for (i = 1; i <= qa; i++) {
		
		printf ("Informe as notas das DUAS avaliacoes do aluno %d: ", i);
		scanf ("%f %f", &n1, &n2);
		
		m = (n1 + n2) / 2;
		
		if (m >= 6) {
			
			s = s + m;
			a++;
		}
	}
	
	ma = s / a;
	
	pa = (float) (a * 100) / qa;
	
	printf ("Media dos %d aprovados: %.1f\n", a, ma);
	printf ("Percentual dos %d aprovados: %.2f\n", a, pa);
	
	system ("pause");
	
}
