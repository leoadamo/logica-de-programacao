#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float n1, n2, m;
	int a = 0, r = 0, e = 0, resp = 1;
	
	do {
		
		printf ("Informe a nota da PRIMEIRA avaliacao: ");
		scanf ("%f", &n1);
		
		printf ("Informe a nota da SEGUNDA avaliacao: ");
		scanf ("%f", &n2);
		
		m = (n1 + n2) / 2;
		printf ("Media = %.1f\n", m);
		
		if (m >= 6)
			a++;
		else
			if (m >= 3)
				e++;
			else
				r++;
		
		printf ("Calcular a media de outro aluno (1.Sim 2.Nao)?\n");
		scanf ("%d", &resp);
						
	} while (resp == 1);
	
	printf ("Quantidade de Aprovados: %d\n", a);
	printf ("Quantidade de Reprovados: %d\n", r);
	printf ("Quantidade de Alunos em Exame: %d\n", e);
	
	system ("pause");
}
