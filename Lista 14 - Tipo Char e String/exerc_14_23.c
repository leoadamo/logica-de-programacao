#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {
	
	char x, palavra[21], copia[21], aux;
	int i, j, cc;
	
	//L� um caractere e uma string
	printf ("Informe uma letra e uma palavra: ");
	//Limpa o buffer de teclado
	fflush(stdin);
	scanf ("%c %s", &x, palavra);
	//Zera um contador que controlar� a c�pia dos emelentos para a string 'copia'
	cc = 0;
	//Loop para verificar se cada elemento da string � igual ao 'x' digitado pelo usu�rio
	for (i = 0; palavra[i] != '\0'; i++) {
		if (palavra[i] != x) {
			//Caso seja, insere um espa�o em branco no lugar do caractere
			copia[cc] = palavra[i];
			cc++;
		}
	}
	//Insere o terminador de string na string 'copia'
	copia[cc] = '\0';
	//Imprime string 'Copia'
	puts(copia);
		
	return 0;	
}
