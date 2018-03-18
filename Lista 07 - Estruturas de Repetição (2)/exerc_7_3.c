#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int qa = 0, a = 0, r = 0, e = 0, pa, pr, pe, resp;
	float n1, n2, m;
	
	do {
		
		system ("cls");
		
		printf ("Informe a nota da PRIMEIRA avaliacao: ");
		scanf ("%f", &n1);
		
		printf ("Informe a nota da SEGUNDA avaliacao: ");
		scanf ("%f", &n2);
		
		m = (n1 + n2) / 2;

		printf ("Media = %.1f\n", m);
		
		qa++;
		
		if (m >= 6)
			a++;
		else
			if (m >= 3)
				e++;
			else
				r++;
		
		printf ("Calcular a media de outro aluno (1.Sim 2. Nao)?\n");
		scanf ("%d", &resp);
		
	} while (resp == 1);
	
	pa = (a * 100) / qa;
	pr = (r * 100) / qa;
	pe = (e * 100) / qa;
	
	printf ("Quantidade de Aprovados: %d\n", a);
	printf ("Quantidade de Reprovados: %d\n", r);
	printf ("Quantidade em exame: %d\n", e);
	printf ("Percentual de Aprovados: %d\n", pa);
	printf ("Percentual de Reprovados: %d\n", pr);
	printf ("Percentual em exame: %d\n", pe);
	
	system ("pause");
	
}
