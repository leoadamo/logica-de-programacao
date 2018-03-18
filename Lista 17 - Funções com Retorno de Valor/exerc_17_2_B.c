#include <stdio.h>

//Declara o prot�tipo da fun��o
int ehPrimo (int n);
//Entra na fun��o principal
int main (void) {
	
	int n1, n2, res, i;
	//Efetua a leitura de dois valores
	printf ("Informe dois numeros: ");
	scanf ("%d %d", &n1, &n2);
	//Valida at� que sejam valores aceitos (n1 < n2)
	while (n2 < n1) {
		printf ("Informe dois numeros: ");
		scanf ("%d %d", &n1, &n2);
	}
	//Loop para chamar a fun��o e retornar algum valor para todos os n�meros do intervalo
	for (i = n1; i <= n2; i++) {
		//Joga o valor retornado pela fun��o na vari�vel 'res'
		res = ehPrimo(i);
		//Se 'res' = 1, significa que o n�mero 'i' � primo
		if (res == 1)
			printf ("%d ", i);
	}
	//Quebra de linha
	printf ("\n");
	
	return 0;
}
//Cria fun��o
int ehPrimo (int n) {
	//Declara as vari�veis locais da fun��o e zera um contador de divisores
	int i, c = 0;
	//Loop para verificar se o n�mero s� possui 2 divisores
	for (i = 1; i <= n; i++) {
		if (n % i == 0)
			c++;
	}
	//Se o contador de divisores for = 2, significa que o n�mero � primo, se n�o, n�o �
	if (c == 2)
		return 1;
	else
		return 0;	
}
