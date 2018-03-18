#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	char frase[31];
	int i, cc, f;
	
	//Loop de frases
	do {
		//Flag sinalizadora de espaços
		f = 0;
		printf ("Informe uma frase: ");
		//Limpa o buffer de teclado
		fflush (stdin);
		gets(frase);
		if (f != 1) {
			//Contador de espaços
			cc = 0;
			//Varre a string até o elemento terminador ('\0') e procura por espaços
			for (i = 0; frase[i] != '\0'; i++) {
				if (frase[i] == ' ') {
					//Conta o espaço encontrado e altera o estado da flag
					cc++;
					f = 1;
				}
			}
			//Se for encontrado algum espaço e a flag ter sido alterada, imprime o contador com o valor final
			if (f == 1)
				printf ("%d\n", cc);
		}
	//Repete enquanto encontrar espaços	(ou cc != 0)
	}while (cc != 0);
	
	return 0;
}
