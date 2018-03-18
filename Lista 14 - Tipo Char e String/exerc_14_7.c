#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	char x, y;
	
	//Loop para a digita��o dos caracteres
	do {
		printf ("Informe um caractere: ");
		//Limpa buffer de teclado
		fflush (stdin);
		x = getchar();
		//Loop para aceita��o de apenas valores v�lidos
		while ((x < 65 || x > 90 && x < 97 || x > 122)) {
			printf ("Informe um caractere: ");
			//Limpa o buffer de teclado
			fflush (stdin);
			x = getchar();
		}
		//Ap�s o primeiro caractere passar pela valida��o, pede um novo ao usu�rio
		printf ("Informe outro: ");
		fflush (stdin);
		y = getchar();
		//Faz novamente a valida��o para o segundo caractere
		while ((y < 65 || y > 90 && y < 97 || y > 122)) {
			printf ("Informe um caractere: ");
			fflush (stdin);
			y = getchar();
		}
		//Se os elementos forem diferentes faz a verifica��o do menor ou maior
		if (x != y + 32 && x != y - 32) {
			if (x > y)
				printf ("Crescente\n");
			else
				printf ("Decrescente\n");	
		}
	//Repete enquanto os valores digitados n�o forem iguais ao seu respectivo mai�sculo	
	}while (x != y + 32 && x != y - 32);
	
	return 0;
}
