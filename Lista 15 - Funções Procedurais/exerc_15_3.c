#include <stdio.h>

void paralelogramoTracos (void);
void exibeOnzeTracos (void);

//Cria a fun��o que exibir� os tra�os
void exibeOnzeTracos (void) {
	
	int i;
	//Loop para exibir 11 tra�os
	for (i = 0; i < 11; i++) 
		printf ("-");
}
//Cria a fun��o paralelogramoTracos
void paralelogramoTracos (void) {
	
	int i, j, c;
	
	c = 0;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < c; j++) {
			printf (" ");
		}
		exibeOnzeTracos();
		printf("\n");	
		c++;
	}
}
//Cria a fun��o principal
int main (void) {
	
	int i;
	
	for (i = 0; i < 2; i++) {
		paralelogramoTracos();
		printf ("\n");
	}
	
	return 0;
}
