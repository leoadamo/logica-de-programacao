#include <stdio.h>

void retTracos (void);
void exibeOnzeTracos (void);

//Cria a função que exibirá os traços
void exibeOnzeTracos (void) {
	
	int i;
	//Loop para exibir 11 traços
	for (i = 0; i < 11; i++) 
		printf ("-");
}
//Cria a função que repetirá 3 vezes a linha de onze traços
void retTracos (void) {
	
	int i;
	
	for (i = 0; i < 3; i++) {
		//Chama a função exibeOnzeTracos
		exibeOnzeTracos();
		printf ("\n");
	}
}
//Função principal
int main (void) {
	
	int i;
	
	for (i = 0; i < 2; i++) {
		retTracos();
		printf ("\n");
	}
	
	return 0;
}
