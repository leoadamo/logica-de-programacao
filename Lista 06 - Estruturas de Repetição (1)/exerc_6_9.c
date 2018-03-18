#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float v1, v2, d;
	int resp;
	
	do {
	
	system ("cls");
	
	printf ("Informe o primeiro valor: ");
	scanf ("%f", &v1);
	
	printf ("Informe o segundo valor: ");
	scanf ("%f", &v2);
	
	while (v2 == 0) {
		printf ("Valor invalido\n");
		printf ("Informe o segundo valor: ");
		scanf ("%f", &v2);
	}
	
	d = v1 / v2;
	
	printf ("%.1f\n", d);
	printf ("Novo Calculo (1.Sim 2.Nao)?\n");
	scanf ("%d", &resp);
	
	} while (resp == 1);
	
	system ("pause");
}
