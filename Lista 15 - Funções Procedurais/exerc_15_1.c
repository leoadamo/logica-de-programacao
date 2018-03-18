#include <stdio.h>

//Declara protótipo da Função
void exibeOnzeTracos (void);

int main (void) {
	
	int cod;
	//Usuário informa o código do torcedor
	printf ("Informe o codigo do torcedor (1.XAVANTE / 2.PELOTAS): ");
	scanf ("%d", &cod);
	//Valida para aceitar apenas códigos válidos
	while (cod != 1 && cod != 2) {
		printf ("Informe o codigo do torcedor: ");
		scanf ("%d", &cod);
	}
	//Imprime linha de 12 espaços e o símbolo "+"
	printf ("           +");
	//Chama função "exibeOnzeTracos"
	exibeOnzeTracos ();
	//Imprime símbolo "+" e 12 espaços
	printf ("+           \n");
	exibeOnzeTracos();
	//Imprime símbolo "|"
	printf ("|");
	//Faz a verificação do código do torcedor
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

//Cria a função que exibirá os traços
void exibeOnzeTracos (void) {
	
	int i;
	//Loop para exibir 11 traços
	for (i = 0; i < 11; i++) 
		printf ("-");
}
