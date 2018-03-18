#include <stdio.h>
#include <stdlib.h>

main ()

{
	int NE, SM, PC, VEND, C, SF, LT;
	
	printf ("Informe o numero de empregados da loja: \n");
	scanf ("%d", &NE);
	
	printf ("Informe o valor do salario minimo: \n");
	scanf ("%d", &SM);
	
	printf ("Informe o preco de custo de cada bicicleta: \n");
	scanf ("%d", &PC);
	
	printf ("Informe a quantidade de bicicletas vendidas: \n");
	scanf ("%d", &VEND);
	
	C = (PC * 0.15 * VEND) / NE;
	SF = (SM * 2) + C;
	LT = (PC * 0.5 * VEND) - (SF * NE);
	
	printf ("Salario final de cada empregado: R$%d\n", SF);
	printf ("Lucro total da loja: R$%d\n", LT);
	
	system ("pause");
	
}
