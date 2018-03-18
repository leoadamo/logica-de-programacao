#include <stdio.h>

//Declara o prot�tipo da fun��o
int ehPrimo (int n);
//Entra na fun��o main
int main (void) {
	
	int n, teste;
	//Informa um inteiro que passar� como argumento para a fun��o 'ehPrimo'
	printf ("Informe um valor: ");
	scanf ("%d", &n);
	//Faz a chamada da fun��o e atribui a uma vari�vel 'teste'
	teste = ehPrimo(n);
	//Testa o valor retornado da fun��o
	if (teste == 1)
		printf ("Eh Primo\n");
	else
		printf ("Nao eh Primo\n");
		
	return 0;		
}
//Cria a fun��o 
int ehPrimo (int n) {
	//Declara as vari�veis locais da fun��o e zera um contador de divisores
	int i, c = 0;
	//Loop para verificar se o n�mero s� possui 2 divisores
	for (i = 1; i <= n; i++) {
		if (n % i == 0)
			c++;
	}
	//Se o n�mero s� possui 2 divisores (1 e ele mesmo), � primo, se n�o, n�o � primo
	if (c == 2)
		return 1;
	else
		return 0;	
}
