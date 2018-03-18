#include <stdio.h>

//Declara prot�tipo da fun��o
void exibePI (int n);
//Cria a fun��o
void exibePI (int n) {
	//Vari�veis locais
	int i, a = 2, b = 1;
	float pi = 1;
	//Se o n for maior ou igual a 3, faz um for de 1 a 2 sem mexer no valor dos contadores
	if (n >= 3) {
		for (i = 1; i <= 2; i++)
			pi = pi * ((float) a / b);
		//Depois faz outro for de 3 at� n validando se o 'i' e par ou impar
		for (i = 3; i <= n; i++) {
			//Se for impar, incrementa o contador b e atualiza o valor de pi
			if (i % 2 == 1) {
				b += 2;
				pi = pi * ((float) a / b);
			//Se for par incrementa o contador a e atualiza o valor de pi	
			}else {
				a += 2;
				pi = pi * ((float) a / b);
			}	
		}
		//Imprime o valor de pi
		printf ("%f\n", pi);
	//Se n for menor ou igual a 2, s� faz um for de 1 a 2 e atualiza o valor de pi		
	}else {
		for (i = 1; i <= n; i++) 
			pi = pi * ((float) a / b);
		//Imprime o pi
		printf ("%f\n", pi);		
	}
}
//Fun��o principal
int main (void) {
	
	int n;
	//Loop para leitura de inteiros
	do {
		printf ("Informe um Inteiro: ");
		scanf ("%d", &n);
		//Valida se o inteiro � aceito
		if (n >= 0) 
			//Chama fun��o
			exibePI(n);
	//Repete enquanto o n � positivo	
	}while (n >= 0);
	
	return 0;
}
