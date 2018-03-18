#include <stdio.h>
#include <stdlib.h>

//Declarando os prot�tipos das fun��es existentes no programa
void exibeAlfabeto (void);
void exibeDigitos (void);
void exibeCardapios (void);

//Criando a fun��o para exibir o alfabeto em letras Mai�sculas
void exibeAlfabeto (void) {
	
	int i;
	
	for (i = 65; i <= 90; i++) {
		printf ("%c ", i);
	}
}
//Criando a fun��o para exibir os d�gitos de 0 � 9
void exibeDigitos (void) {
	
	int i;
	
	for (i = 48; i <= 57; i++) {
		printf ("%c ", i);
	}
}
//Criando a fun��o para exibir os card�pios ao usu�rio
void exibeCardapios (void) {
	
	printf ("1.Alfabeto\n2.Digitos\n3.Fim\n");
}
//Criando a fun��o principal
int main (void) {
	
	int cod;
	//Chama fun��o para exibir card�pio de op��es
	exibeCardapios();
	//Loop para repetir as opera��es mediante valida��o com o c�digo referido
	do {
		printf ("Informe o codigo da operacao: ");
		scanf ("%d", &cod);
		if (cod == 1 || cod == 2) {
			if (cod == 1)
				//Chama fun��o para exibir alfabeto
				exibeAlfabeto();
			else
				//Chama fun��o para exibir digitos
				exibeDigitos();	
		}
		printf ("\n");
	//Repete enquando o c�digo digitado for diferente de 3 (Fim)
	} while (cod != 3);	
	
	return 0;
}
