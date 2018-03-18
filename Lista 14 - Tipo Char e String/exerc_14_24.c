#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {
	
	int cod, i, j, c1, c2, tam;
	char email[31], copia[31];
	
	//Loop de c�digos
	do {
		printf ("Informe um codigo (1.Antes / 2.Depois / 3.Fim): ");
		scanf ("%d", &cod);
		//Verifica se o c�digo � v�lido
		if (cod >= 1 && cod < 3) {
			//L� um email
			printf ("Informe um endereco de e-mail: ");
			//Limpa o buffer de teclado
			fflush (stdin);
			gets(email);
			//Switch com os cases 1 (antes do '@') e 2 (depois do '@')
			switch (cod) {
				case 1: //Zera o contador que determinara os elementos da string 'copia'
						c1 = 0;
						//Varre a string enquanto os elementos email[i] forem diferentes de '@'
						for (i = 0; email[i] != '@'; i++) {
							//Enquanto for diferente, copia o elemento para a string 'copia' e incrementa o contador 'c1'
							copia[c1] = email[i];
							c1++;
						}
						//Adiciona o terminador de string � �ltima posi��o (valor m�x de c1)
						copia[c1] = '\0';
						//Imprime string 'copia'
						puts(copia);
						printf ("\n");
						break;
				
				case 2:	//Zera um contator de caracteres antes do '@"
						c1 = 0;
						//Zera o contador que determinara os elementos da string 'copia'
						c2 = 0;
						//Conta quantos elementos a string possui antes do '@"
						for (i = 0; email[i] != '@'; i++)
							c1++;
						//Varre a string at� o terminador e come�ando em c1 + 1, para que o '@' n�o seja inclu�do na c�pia
						for (j = c1 + 1; email[j] != '\0'; j++) {
							//Equanto n�o chegar no fim, copia os elementos ap�s o '@' (c1 + 1)
							copia[c2] = email[j];
							c2++;
						}
						//Adiciona o terminador de string � �ltima posi��o (valor m�x de c2)	
						copia[c2] = '\0';
						//Imprime string 'copia'
						puts(copia);
						printf ("\n");
						break;
				//Sa�da default		
				default: break;
			}
		}
	//Repete enquanto o c�digo for v�lido	
	}while (cod >= 1 && cod < 3);
	
	return 0;
}
