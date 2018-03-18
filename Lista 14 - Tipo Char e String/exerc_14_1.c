#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	int i;
	char x;
	//Repetição para solicitar ao usuário um número i (máx 5) de caracteres
	for (i = 0; i < 5; i++) {
		//Limpa buffer de teclado
		fflush(stdin);
		printf ("Informe uma letra: ");
		//Puxa o valor em decimal que representa a variável digitada pelo usuário
		x = getchar();
		//Validação de maiúscula ou minuscúla
		if (x < 65 || x > 90) 
			printf ("Nao\n");
		else
			printf ("Sim\n");	
	}
	
	return 0;
}
