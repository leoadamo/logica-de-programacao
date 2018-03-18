#include <stdio.h>
#include <stdlib.h>

main ()

{
	int qh, nf;
	float vh, salario, salario_f, aumento;
	
	printf ("Informe a quantidade de horas trabalhadas:\n");
	scanf ("%d", &qh);
	
	printf ("Informe o valor de cada hora trabalhada:\n");
	scanf ("%f", &vh);
	
	printf ("Informe a quantidade de filhos <14 anos:\n");
	scanf ("%d", &nf);
	
	salario = qh*vh;
	aumento = salario * (0.02*nf);
	salario_f = salario + aumento;
	
	printf ("Salario final do funcionario: %.2f\n", salario_f);
	
	system("pause");
	
}
