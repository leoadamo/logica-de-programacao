#include <stdio.h>
#include <stdlib.h>

//Declarando os protótipos das funções existentes no programa
void exibeAlfabeto (void);
void exibeDigitos (void);
void exibeCardapios (void);

//Criando a função para exibir o alfabeto em letras Maiúsculas
void exibeAlfabeto (void) {
	
	int i;
	
	for (i = 65; i <= 90; i++) {
		printf ("%c ", i);
	}
}
//Criando a função para exibir os dígitos de 0 à 9
void exibeDigitos (void) {
	
	int i;
	
	for (i = 48; i <= 57; i++) {
		printf ("%c ", i);
	}
}
//Criando a função para exibir os cardápios ao usuário
void exibeCardapios (void) {
	
	printf ("1.Alfabeto\n2.Digitos\n3.Fim\n");
}
//Criando a função principal
int main (void) {
	
	int cod;
	//Chama função para exibir cardápio de opções
	exibeCardapios();
	//Loop para repetir as operações mediante validação com o código referido
	do {
		printf ("Informe o codigo da operacao: ");
		scanf ("%d", &cod);
		if (cod == 1 || cod == 2) {
			if (cod == 1)
				//Chama função para exibir alfabeto
				exibeAlfabeto();
			else
				//Chama função para exibir digitos
				exibeDigitos();	
		}
		printf ("\n");
	//Repete enquando o código digitado for diferente de 3 (Fim)
	} while (cod != 3);	
	
	return 0;
}
