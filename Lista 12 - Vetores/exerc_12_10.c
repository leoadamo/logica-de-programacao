#include <stdio.h>

int main (void) {
	
	int v[10], i, a, b, c;
	
	//Carrega o vetor v[10].
	for (i = 0; i < 10; i++) {
		printf ("Informe um Valor: ");
		scanf ("%d", &v[i]);
		//Verifica de o valor digitado � negativo ou zero. Se sim, interrompe o la�o
		if (v[i] <= 0)
			break;
	}
	//Efetua a leitura do PRIMEIRO �ndice que delimita o intervalo do vetor a ser varrido.
	printf ("Informe o primeiro indice: ");
	scanf ("%d", &a);
	//Se o indice for inv�lido, repete a leitura at� que seja v�lido.
	while (a < 0 || a >= i) {
		printf ("Informe o primeiro indice: ");
		scanf ("%d", &a);
	}
	//Efetua a leitura do SEGUNDO �ndice que delimita o intervalo do vetor a ser varrido.
	printf ("Informe o segundo indice: ");
	scanf ("%d", &b);
	//Se o indice for inv�lido, repete a leitura at� que seja v�lido.
	while (b < 0 || b >= i) {
		printf ("Informe o segundo indice: ");
		scanf ("%d", &b);
	}
	//Testa o menor e maior �dice para definir o ponto inicial do loop.
	if (a < b) {
		c = 0;
		for (i = a; i <= b; i++) {
			if (v[i] > 4)
				c++;	
		}
	}else {
		c = 0;
		for (i = b; i <= a; i++) {
			if (v[i] > 4)
				c++;
		}
	}
	printf ("%d\n", c);
	
	return 0;
}
