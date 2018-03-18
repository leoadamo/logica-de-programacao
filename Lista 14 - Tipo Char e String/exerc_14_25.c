#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {
	
	char palavra[8][20];
	int i, tam, max = 0, min = 99999, lmax, lmin;
	
	//Loop para ler as strings
	for (i = 0; i < 8; i++) {
		printf ("Informe uma palavra: ");
		scanf ("%s", palavra[i]);
	}
	//Loop para determinar a menor e maior string
	for (i = 0; i < 8; i++) {
		//Retorna um inteiro que representa o tamanho da string
		tam = strlen(palavra[i]);
		//Compara o tamanho com a variável 'min'
		if (tam < min) {
			min = tam;
			//Joga a linha do menor valor para a variável 'lmin'
			lmin = i;
		}
		//Compara o tamanho com a variável 'max'
		if (tam > max) {
			max = tam;
			//Joga a linha do maior valor para a variável 'lmax'
			lmax = i;
		}
	}
	//Loop para comparar cada elemento das strings, caractere por caractere
	for (i = 0; palavra[lmin][i] != '\0'; i++) {
		//Testa se os elementos são diferentes
		if (palavra[lmin][i] != palavra[lmax][i])
			//Testa o menor dos elementos, ordenando de acordo com o alfabeto
			if (palavra[lmin][i] > palavra[lmax][i]) {
				//Imprime as strings já ordenadas
				printf ("%s\n", palavra[lmax]);
				printf ("%s\n", palavra[lmin]);
				break;
			//Imprime o inverso, devido validação ser falsa	
			}else {
				printf ("%s\n", palavra[lmin]);
				printf ("%s\n", palavra[lmax]);
				break;
			}
	}
		
	return 0;	
}
