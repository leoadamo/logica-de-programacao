#include <stdio.h>

//Declara o protótipo da função
int ehPrimo (int n);
//Entra na função main
int main (void) {
	
	int n, teste;
	//Informa um inteiro que passará como argumento para a função 'ehPrimo'
	printf ("Informe um valor: ");
	scanf ("%d", &n);
	//Faz a chamada da função e atribui a uma variável 'teste'
	teste = ehPrimo(n);
	//Testa o valor retornado da função
	if (teste == 1)
		printf ("Eh Primo\n");
	else
		printf ("Nao eh Primo\n");
		
	return 0;		
}
//Cria a função 
int ehPrimo (int n) {
	//Declara as variáveis locais da função e zera um contador de divisores
	int i, c = 0;
	//Loop para verificar se o número só possui 2 divisores
	for (i = 1; i <= n; i++) {
		if (n % i == 0)
			c++;
	}
	//Se o número só possui 2 divisores (1 e ele mesmo), é primo, se não, não é primo
	if (c == 2)
		return 1;
	else
		return 0;	
}
