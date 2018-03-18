#include <stdio.h>

//Declara o prot�tipo da fun��o
int maiorNumero (int n1, int n2);
//Cria a fun��o
int maiorNumero (int n1, int n2) {
	//Valida o maior, nesse caso como s�o iguais, retornar� -1
	if (n1 == n2)
		return -1;
	else
		if (n1 > n2) 
			return n1;
			
		else
			return n2;				
}
//Fun��o principal
int main (void) {
	
	int n1, n2, n, i, maior;
	//Informa um inteiro para a quantidade de valores lidos
	printf ("Informe um Inteiro: ");
	scanf ("%d", &n);
	//Ciclo para a leitura dos valores
	for (i = 0; i < n; i++) {
		printf ("Informe dois numeros: ");
		scanf ("%d %d", &n1, &n2);
		//Joga o valor que a fun��o retornar� � vari�vel 'maior'
		maior = maiorNumero(n1, n2);
		//Se o valor for maior que 0 imprime o maior
		if (maior != -1)
			printf ("%d\n", maior);
		//Se valor for igual a -1 imprime 'eles s�o iguais'
		else
			printf ("Eles sao iguais\n");
	}
	
	return 0;
}
