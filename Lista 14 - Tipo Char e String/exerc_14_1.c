#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	int i;
	char x;
	//Repeti��o para solicitar ao usu�rio um n�mero i (m�x 5) de caracteres
	for (i = 0; i < 5; i++) {
		//Limpa buffer de teclado
		fflush(stdin);
		printf ("Informe uma letra: ");
		//Puxa o valor em decimal que representa a vari�vel digitada pelo usu�rio
		x = getchar();
		//Valida��o de mai�scula ou minusc�la
		if (x < 65 || x > 90) 
			printf ("Nao\n");
		else
			printf ("Sim\n");	
	}
	
	return 0;
}
