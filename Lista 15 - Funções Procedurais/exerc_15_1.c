#include <stdio.h>

//Declara prot�tipo da Fun��o
void exibeOnzeTracos (void);

int main (void) {
	
	int cod;
	//Usu�rio informa o c�digo do torcedor
	printf ("Informe o codigo do torcedor (1.XAVANTE / 2.PELOTAS): ");
	scanf ("%d", &cod);
	//Valida para aceitar apenas c�digos v�lidos
	while (cod != 1 && cod != 2) {
		printf ("Informe o codigo do torcedor: ");
		scanf ("%d", &cod);
	}
	//Imprime linha de 12 espa�os e o s�mbolo "+"
	printf ("           +");
	//Chama fun��o "exibeOnzeTracos"
	exibeOnzeTracos ();
	//Imprime s�mbolo "+" e 12 espa�os
	printf ("+           \n");
	exibeOnzeTracos();
	//Imprime s�mbolo "|"
	printf ("|");
	//Faz a verifica��o do c�digo do torcedor
	if (cod == 1)
		printf ("  XAVANTE  ");
	else
		printf ("  PELOTAS  ");
	printf ("|");
	exibeOnzeTracos();
	//Quebra de Linha
	printf ("\n");
	printf ("           +");
	exibeOnzeTracos();
	printf ("+          \n");
}

//Cria a fun��o que exibir� os tra�os
void exibeOnzeTracos (void) {
	
	int i;
	//Loop para exibir 11 tra�os
	for (i = 0; i < 11; i++) 
		printf ("-");
}
