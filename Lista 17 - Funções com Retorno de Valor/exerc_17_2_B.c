#include <stdio.h>

//Declara o protótipo da função
int ehPrimo (int n);
//Entra na função principal
int main (void) {
	
	int n1, n2, res, i;
	//Efetua a leitura de dois valores
	printf ("Informe dois numeros: ");
	scanf ("%d %d", &n1, &n2);
	//Valida até que sejam valores aceitos (n1 < n2)
	while (n2 < n1) {
		printf ("Informe dois numeros: ");
		scanf ("%d %d", &n1, &n2);
	}
	//Loop para chamar a função e retornar algum valor para todos os números do intervalo
	for (i = n1; i <= n2; i++) {
		//Joga o valor retornado pela função na variável 'res'
		res = ehPrimo(i);
		//Se 'res' = 1, significa que o número 'i' é primo
		if (res == 1)
			printf ("%d ", i);
	}
	//Quebra de linha
	printf ("\n");
	
	return 0;
}
//Cria função
int ehPrimo (int n) {
	//Declara as variáveis locais da função e zera um contador de divisores
	int i, c = 0;
	//Loop para verificar se o número só possui 2 divisores
	for (i = 1; i <= n; i++) {
		if (n % i == 0)
			c++;
	}
	//Se o contador de divisores for = 2, significa que o número é primo, se não, não é
	if (c == 2)
		return 1;
	else
		return 0;	
}
