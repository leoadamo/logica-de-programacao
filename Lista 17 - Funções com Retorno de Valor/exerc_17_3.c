#include <stdio.h>

//Declara o prot�tipo da fun��o
float obtemPI (int n);
//Entra na fun��o principal
int main (void) {
	
	int n;
	float res;
	//Loop para ler a quantidade de termos da s�rie
	do {
		printf ("Informe a Quantidade de termos da Serie: ");
		scanf ("%d", &n);
		//Valida se o termo � aceito (n > 0)
		if (n > 0) {
			//Chama a fun��o para 'n' termos e joga o resultado retornado � vari�vel 'res'
			res = obtemPI(n);
			//Imprime o valor da vari�vel
			printf ("O Valor de pi para n termos eh: %f\n", res);
		}
	//Repete enquanto o 'n' for v�lido	
	}while (n > 0);
	
	return 0;
}
//Cria a fun��o obtemPI
float obtemPI (int n) {
	//Declara vari�veis locais da fun��o
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
		//Retorna o valor de pi
		return pi;
	//Se n for menor ou igual a 2, s� faz um for de 1 a 2 e atualiza o valor de pi		
	}else {
		for (i = 1; i <= n; i++) 
			pi = pi * ((float) a / b);
		//Retorna o valor pi
		return pi;		
	}
}
