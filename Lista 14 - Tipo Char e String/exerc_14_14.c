#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	int n, i, j, cc;
	char a[21];
	
	//Informa o n�mero de palavras que ser�o lidas
	printf ("Informe um inteiro: ");
	scanf ("%d", &n);
	//Loop de palavras
	for (i = 0; i < n; i++) {
		//Zera o contador de posi��es
		cc = 0;
		//L� a palavra
		printf ("Informe uma palavra: ");
		scanf ("%s", a);
		//Printa o caracter da posi��o 'cc' (cc = 0)
		printf ("%c ", a[cc]);
		//Loop para varrer quantos caracteres possui a string
		for (j = 0; a[j] != '\0'; j++) {
			cc++;
		}
		//Imprime o caractere da posi��o cc - 1
		printf ("%c\n", a[cc - 1]);
	}
	
	return 0;
}
