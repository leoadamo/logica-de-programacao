#include <stdio.h>

//Declara o protótipo da função
int maiorNumero (int n1, int n2);
//Cria a função
int maiorNumero (int n1, int n2) {
	//Valida o maior, nesse caso como são iguais, retornará -1
	if (n1 == n2)
		return -1;
	else
		if (n1 > n2) 
			return n1;
			
		else
			return n2;				
}
//Função principal
int main (void) {
	
	int n1, n2, n, i, maior;
	//Informa um inteiro para a quantidade de valores lidos
	printf ("Informe um Inteiro: ");
	scanf ("%d", &n);
	//Ciclo para a leitura dos valores
	for (i = 0; i < n; i++) {
		printf ("Informe dois numeros: ");
		scanf ("%d %d", &n1, &n2);
		//Joga o valor que a função retornará à variável 'maior'
		maior = maiorNumero(n1, n2);
		//Se o valor for maior que 0 imprime o maior
		if (maior != -1)
			printf ("%d\n", maior);
		//Se valor for igual a -1 imprime 'eles são iguais'
		else
			printf ("Eles sao iguais\n");
	}
	
	return 0;
}
