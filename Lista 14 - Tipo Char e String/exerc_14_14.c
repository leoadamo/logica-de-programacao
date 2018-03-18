#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	int n, i, j, cc;
	char a[21];
	
	//Informa o número de palavras que serão lidas
	printf ("Informe um inteiro: ");
	scanf ("%d", &n);
	//Loop de palavras
	for (i = 0; i < n; i++) {
		//Zera o contador de posições
		cc = 0;
		//Lê a palavra
		printf ("Informe uma palavra: ");
		scanf ("%s", a);
		//Printa o caracter da posição 'cc' (cc = 0)
		printf ("%c ", a[cc]);
		//Loop para varrer quantos caracteres possui a string
		for (j = 0; a[j] != '\0'; j++) {
			cc++;
		}
		//Imprime o caractere da posição cc - 1
		printf ("%c\n", a[cc - 1]);
	}
	
	return 0;
}
