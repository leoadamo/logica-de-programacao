#include <stdio.h>

void retTracos (void);
void exibeOnzeTracos (void);

//Cria a fun��o que exibir� os tra�os
void exibeOnzeTracos (void) {
	
	int i;
	//Loop para exibir 11 tra�os
	for (i = 0; i < 11; i++) 
		printf ("-");
}
//Cria a fun��o que repetir� 3 vezes a linha de onze tra�os
void retTracos (void) {
	
	int i;
	
	for (i = 0; i < 3; i++) {
		//Chama a fun��o exibeOnzeTracos
		exibeOnzeTracos();
		printf ("\n");
	}
}
//Fun��o principal
int main (void) {
	
	int i;
	
	for (i = 0; i < 2; i++) {
		retTracos();
		printf ("\n");
	}
	
	return 0;
}
