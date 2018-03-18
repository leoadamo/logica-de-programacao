#include <stdio.h>

int main (void) {
	
	int g[13], m[13][3], i, j, p, s, cs, cd, ct;
	
	//Carrega o vetor gabarito com os elementos digitados pelo usuário
	for (i = 0; i < 13; i++) {
		printf ("Informe o Gabarito da Loteria Esportiva (1.Coluna 1/ 2.Coluna do Meio/ 3.Coluna 2): ");
		scanf ("%d", &g[i]);
	}
	//Carrega a matriz 13 x 3 com as apostas feitas pelo usuário
	for (i = 0; i < 13; i++) {
		for (j = 0; j < 3; j++) {
			printf ("Informe a aposta %d %d: ", i, j);
			scanf ("%d", &m[i][j]);
		}
		printf ("\n");
	}
	//Loop para verificar se o valor do gabarito coincide com o valor apostado, zerando o contador de pontos
	p = 0;
	cs = 0;
	cd = 0;
	ct = 0;
	for (i = 0; i < 13; i++) {
		s = 0;
		switch (g[i]) {
			case 1: if (m[i][0] == 1)
							p++;
						break;	
							
			case 2:	if (m[i][1] == 1)
							p++;
						break;	
			
			case 3:	if (m[i][2] == 1)
							p++;
						break;				
		}
		//Loop para efetuar a soma dos elementos de cada linha da matriz
		for (j = 0; j < 3; j++) 
			s += m[i][j];
		/* Switch para verificar o valor do somador e comparar se a aposta foi simples (cs)
		dupla (cd) ou tripla (ct) */	
		switch (s)	{
			case 1: cs++;
					break;
			
			case 2: cd++;
					break;
					
			case 3: ct++;
					break;			
		}
	}
	//Imprime as saídas
	printf ("%d\n", p);
	printf ("%d\n", cs);
	printf ("%d\n", cd);
	printf ("%d\n", ct);
	
	return 0;
}
