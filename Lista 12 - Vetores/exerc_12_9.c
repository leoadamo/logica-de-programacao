#include <stdio.h>

int main (void) {
	
	int v[10], i, a, b, maior, menor;
	
	//Carrega o vetor v[10].
	for (i = 0; i < 10; i++) {
		printf ("Informe um valor: ");
		scanf ("%d", &v[i]);
		//Verifica de o valor digitado é negativo ou zero. Se sim, interrompe o laço.
		if (v[i] <= 0)
			break;
	}
	//Efetua a leitura dos índices que delimitam o intervalo do vetor a ser verificado.
	printf ("Informe dois Valores: ");
	scanf ("%d %d", &a, &b);
	if (a < b) {
		maior = 0, menor = 99999;
		//Varre o vetor e atribui o maior e o menor às variáveis aux (maior e menor).
		for (i = a; i <= b; i++) {
			if (v[i] > maior)
				maior = v[i];
			if (v[i] < menor)
				menor = v[i];
		}
		printf ("Maior: %d\n", maior);
		printf ("Menor: %d\n", menor);
	}
	return 0;
}
