#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int qta, i;
	float m, n, s;
	
	s = 0;
	
	printf ("Informe a quantidade de alunos: ");
	scanf ("%d", &qta);
	
	for (i = 1; i <= qta; i++) {
		
		printf ("Informe a nota do aluno %d: ", i);
		scanf ("%f", &n);
		
		s = s + n;
		
	}
	
	m = s / qta;
	
	printf ("Media das notas dos %d alunos: %.1f\n", qta, m);
	
	system ("pause");
}
