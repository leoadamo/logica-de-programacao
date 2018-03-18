#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float n1, n2, m;
	int a = 0, resp;
	
	// Começo repetição
	do {
	
		printf ("Leia a nota da PRIMEIRA avaliacao: ");
		scanf ("%f", &n1);
		
		printf ("Leia a nota da SEGUNDA avaliacao: ");
		scanf ("%f", &n2);
		
		//calculo da média
		
		m = (n1 + n2) / 2;
		
		if (m >= 6)
			a++;
		
		printf ("Media = %.1f\n", m);		
		printf ("Calcular a media de outro aluno (1.Sim 2.Nao)?\n");
		scanf ("%d", &resp);
		
	} while (resp == 1);
	
	printf ("Quantidade de aprovados: %d\n", a);
	
	system ("pause");
}
