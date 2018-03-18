#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int p, j1, j2, r, a, soma;
	
	scanf ("%d %d %d %d %d", &p, &j1, &j2, &r, &a);
	
	soma = j1 + j2;
	
	if (r == 1 && a == 0)
		printf ("Jogador 1 ganha!\n");
	
	if (r == 1 && a == 1)
		printf ("Jogador 2 ganha!\n");
	
	if (r == 0 && a == 1)
		printf ("Jogador 1 ganha!\n");	
	
	if (r == 0 && a == 0)
		
		if (soma % 2 == 0)
			if (p == 1)	
				printf ("Jogador 1 ganha!\n");
			else
				printf ("Jogador 2 ganha!\n");
		else
			if (p == 1)
				printf ("Jogador 2 ganha!\n");
			else
				printf ("Jogador 1 ganha!\n");

	system ("pause");				
}
