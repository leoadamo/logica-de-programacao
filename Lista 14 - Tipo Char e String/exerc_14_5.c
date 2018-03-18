#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	char x;
	
	//Efetua a leitura dos caracteres
	do {
		printf ("Informe um caractere: ");
		//Limpa buffer de teclado
		fflush (stdin);
		//Armazena o caractere digitado na variável 'x'
		x = getchar();
		//Realiza as validações de acordo com o código ASCII
		if (x >= 97 && x <= 122) 
			printf ("%c\n", x - 32);
		else
			if (x == 64)
				printf ("Nao e' letra\n");	
			else
				if (x >= 65 && x <= 90)
					printf ("Letra maiuscula\n");
				else
					if (x >= 48 && x <= 57)
					printf ("Nao e' letra\n");				
	//Repete enquanto o caractere for diferente de '@'	
	}while (x != '@');
	
	return 0;
}
