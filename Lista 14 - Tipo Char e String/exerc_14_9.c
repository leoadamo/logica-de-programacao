#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	int t, i, cc;
	char a = 'x', b = '-';
	
	//Informa n�mero de vezes que os caracteres ser�o exibidos
	printf ("Informe um numero: ");
	scanf ("%d", &t);
	//Informa os dois caracteres
	printf ("Informe dois caracteres: ");
	//Limpa o buffer de teclado
	fflush (stdin);
	scanf ("%c %c", &a, &b);
	//Zera um contador que controlar� a impress�o do 2� caractere de acordo com a impress�o do primeiro
	cc = 0;
	//Loop para impress�o
	for (i = 0; i < t / 2; i++) {
		printf ("%c", a);
		/*Verifica��o para impress�o do segundo caractere, pois o mesmo depende o primeiro
		(cc < i + 1), ou seja, para 5 caracteres 'x' teremos 4 caracteres '-'*/
		if (cc < i+1) {
			printf ("%c", b);	
			cc++;
		}
	}
	/*Se o elemento 't' informado no in�cio for �mpar, imprime mais uma vez o elemento 'a', pois
	o valor da divis�o ser� quebrado*/
	if (t % 2 == 1)
		printf ("%c", a);
	
	printf ("\n");
	
	return 0;
}
