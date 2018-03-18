#include <stdio.h>
#include <stdlib.h>

main ()

{
	int salario, p_reajuste, salario_f;
	
	printf ("Informe o valor do Salario: \n");
	scanf ("%d", &salario);
	
	printf ("Informe o percentual de reajuste \n");
	scanf ("%d", &p_reajuste);
	
	salario_f = salario + (salario*p_reajuste) /100;
	
	printf ("Salario total: %d\n", salario_f);
	
	system("pause");
}
