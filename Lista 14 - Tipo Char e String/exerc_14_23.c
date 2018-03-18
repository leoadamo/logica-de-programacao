#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {
	
	char x, palavra[21], copia[21], aux;
	int i, j, cc;
	
	//Lê um caractere e uma string
	printf ("Informe uma letra e uma palavra: ");
	//Limpa o buffer de teclado
	fflush(stdin);
	scanf ("%c %s", &x, palavra);
	//Zera um contador que controlará a cópia dos emelentos para a string 'copia'
	cc = 0;
	//Loop para verificar se cada elemento da string é igual ao 'x' digitado pelo usuário
	for (i = 0; palavra[i] != '\0'; i++) {
		if (palavra[i] != x) {
			//Caso seja, insere um espaço em branco no lugar do caractere
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
