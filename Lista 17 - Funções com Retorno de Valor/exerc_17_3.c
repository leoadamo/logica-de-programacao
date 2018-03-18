#include <stdio.h>

//Declara o protótipo da função
float obtemPI (int n);
//Entra na função principal
int main (void) {
	
	int n;
	float res;
	//Loop para ler a quantidade de termos da série
	do {
		printf ("Informe a Quantidade de termos da Serie: ");
		scanf ("%d", &n);
		//Valida se o termo é aceito (n > 0)
		if (n > 0) {
			//Chama a função para 'n' termos e joga o resultado retornado à variável 'res'
			res = obtemPI(n);
			//Imprime o valor da variável
			printf ("O Valor de pi para n termos eh: %f\n", res);
		}
	//Repete enquanto o 'n' for válido	
	}while (n > 0);
	
	return 0;
}
//Cria a função obtemPI
float obtemPI (int n) {
	//Declara variáveis locais da função
	int i, a = 2, b = 1;
	float pi = 1;
	
	//Se o n for maior ou igual a 3, faz um for de 1 a 2 sem mexer no valor dos contadores
	if (n >= 3) {
		for (i = 1; i <= 2; i++)
			pi = pi * ((float) a / b);
		//Depois faz outro for de 3 até n validando se o 'i' e par ou impar
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
	//Se n for menor ou igual a 2, só faz um for de 1 a 2 e atualiza o valor de pi		
	}else {
		for (i = 1; i <= n; i++) 
			pi = pi * ((float) a / b);
		//Retorna o valor pi
		return pi;		
	}
}
