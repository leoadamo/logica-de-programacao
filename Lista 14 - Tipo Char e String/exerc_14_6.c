#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	char x;
	
	//Loop para efetuar a digitação dos caracteres a serem validados
	do {
		printf ("Informe um caractere: ");
		//Limpa buffer de teclado
		fflush (stdin);
		x = getchar();
		//Começam as validações do caractere digitado de acordo com o código ASCII
		if (x >= 97 && x <= 122)
			printf ("Minuscula\n");
		else
			if (x >= 65 && x <= 90)
				printf ("Maiuscula\n");
			else
				if (x >= 48 && x <= 59)
					printf ("Digito\n");
				else
					printf ("Sem especificacao\n");	
	//Repete enquanto o caractere digitado não for o 'f'						
	}while (x != 'f');
	
	return 0;
}
