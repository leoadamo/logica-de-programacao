#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	int t, i, cc;
	char a = 'x', b = '-';
	
	//Informa número de vezes que os caracteres serão exibidos
	printf ("Informe um numero: ");
	scanf ("%d", &t);
	//Informa os dois caracteres
	printf ("Informe dois caracteres: ");
	//Limpa o buffer de teclado
	fflush (stdin);
	scanf ("%c %c", &a, &b);
	//Zera um contador que controlará a impressão do 2º caractere de acordo com a impressão do primeiro
	cc = 0;
	//Loop para impressão
	for (i = 0; i < t / 2; i++) {
		printf ("%c", a);
		/*Verificação para impressão do segundo caractere, pois o mesmo depende o primeiro
		(cc < i + 1), ou seja, para 5 caracteres 'x' teremos 4 caracteres '-'*/
		if (cc < i+1) {
			printf ("%c", b);	
			cc++;
		}
	}
	/*Se o elemento 't' informado no início for ímpar, imprime mais uma vez o elemento 'a', pois
	o valor da divisão será quebrado*/
	if (t % 2 == 1)
		printf ("%c", a);
	
	printf ("\n");
	
	return 0;
}
