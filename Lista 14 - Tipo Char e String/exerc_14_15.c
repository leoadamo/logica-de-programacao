#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	char frase[31];
	int i, cc, f;
	
	//Loop de frases
	do {
		//Flag sinalizadora de espa�os
		f = 0;
		printf ("Informe uma frase: ");
		//Limpa o buffer de teclado
		fflush (stdin);
		gets(frase);
		if (f != 1) {
			//Contador de espa�os
			cc = 0;
			//Varre a string at� o elemento terminador ('\0') e procura por espa�os
			for (i = 0; frase[i] != '\0'; i++) {
				if (frase[i] == ' ') {
					//Conta o espa�o encontrado e altera o estado da flag
					cc++;
					f = 1;
				}
			}
			//Se for encontrado algum espa�o e a flag ter sido alterada, imprime o contador com o valor final
			if (f == 1)
				printf ("%d\n", cc);
		}
	//Repete enquanto encontrar espa�os	(ou cc != 0)
	}while (cc != 0);
	
	return 0;
}
