#include <stdio.h>

int main () {
	
	int idade, maioridade, imaiorn;
	float nota, maiornota, nmv;
	
	maioridade = 0, maiornota = 0;
	
	do {
		
		printf ("Informe a idade do Aluno: ");
		scanf ("%d", &idade);
		
		if (idade > 0) {
			
			printf ("Informe a nota do Aluno: ");
			scanf ("%f", &nota);
			
			if (nota > maiornota) {
			
				maiornota = nota;
				
				imaiorn = idade;
			}
			
			if (idade > maioridade) {
				
				maioridade = idade;
				
				nmv = nota;
			}
		}
	
	} while (idade > 0);
	
	printf ("Idade do Aluno com maior Nota: %d\n", imaiorn);
	
	printf ("Nota do Aluno mais Velho: %.1f\n", nmv);
	
	return 0;
}
