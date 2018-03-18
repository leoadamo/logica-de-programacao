#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {
	
	int cod, i, j, c1, c2, tam;
	char email[31], copia[31];
	
	//Loop de códigos
	do {
		printf ("Informe um codigo (1.Antes / 2.Depois / 3.Fim): ");
		scanf ("%d", &cod);
		//Verifica se o código é válido
		if (cod >= 1 && cod < 3) {
			//Lê um email
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
						//Adiciona o terminador de string à última posição (valor máx de c1)
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
						//Varre a string até o terminador e começando em c1 + 1, para que o '@' não seja incluído na cópia
						for (j = c1 + 1; email[j] != '\0'; j++) {
							//Equanto não chegar no fim, copia os elementos após o '@' (c1 + 1)
							copia[c2] = email[j];
							c2++;
						}
						//Adiciona o terminador de string à última posição (valor máx de c2)	
						copia[c2] = '\0';
						//Imprime string 'copia'
						puts(copia);
						printf ("\n");
						break;
				//Saída default		
				default: break;
			}
		}
	//Repete enquanto o código for válido	
	}while (cod >= 1 && cod < 3);
	
	return 0;
}
