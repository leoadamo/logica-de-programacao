#include <stdio.h>

int main () {
	
	int qfam, qfil, idade, sexo, i, j, h, ifmv, smv, f, fmaior;
	float idademaior, media;
	
	h = 0, fmaior = 0;
	
	printf ("Informe a quantidade de Familias: ");
	scanf ("%d", &qfam);
	
	for (i = 1; i <= qfam; i++) {
		
		printf ("Informe a quantidade de Filhos da Familia %d: ", i);
		scanf ("%d", &qfil);
		
		ifmv = 0, f = 0;
		
		for (j = 1; j <= qfil; j++) {
			
			printf ("Informe a Idade e o Sexo do Filho %d: ", j);
			scanf ("%d %d", &idade, &sexo);
			
			if (idade > ifmv) {
				
				ifmv = idade;
				
				smv = sexo;
			}
			
			if (idade > 18) {
				
				f = 1;
				
				if (sexo == 1) {
					
					h++;
					
					idademaior = idademaior + idade;
				}
			}
		}
		
		system ("cls");
		
		if (smv == 1)
		
			printf ("Masculino\n");
		
		if (smv == 2)
		
			printf ("Feminino\n");	
			
		if (f == 1)
		
			fmaior++;				
	}
		
	media = idademaior / h;	
	
	printf ("%d\n", fmaior);
	
	printf ("%.2f\n", media);
	
	return 0;	
}
