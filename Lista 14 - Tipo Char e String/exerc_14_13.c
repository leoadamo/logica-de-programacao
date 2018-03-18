#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	int n, i, j, cl;
	char a[21];
	
	//Informa a quantidade de palavras que serão lidas
	printf ("Informe um inteiro: ");
	scanf ("%d", &n);
	//Loop de palavras
	for (i = 0; i < n; i++) {
		//Zera um contador de letras
		cl = 0;
		//Lê a palavra[i]
		printf ("Informe uma palavra: ");
		scanf ("%s", a);
		//Loop para contar as letras enquanto o elemento a[j] for diferente do terminador de string '\0'
		for (j = 0; a[j] != '\0'; j++)
			cl++;
		//Imprime quantidade de letras encontradas na string
		printf ("%d\n", cl);	
	}
	
	return 0;
}
