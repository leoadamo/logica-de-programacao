#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int qv1, qv2, qv3, pv1, pv2, pv3, qtv, i;
	
	printf ("Informe a quantidade de votos do PRIMEIRO candidato: ");
	scanf ("%d", &qv1);
	
	printf ("Informe a quantidade de votos do SEGUNDO candidato: ");
	scanf ("%d", &qv2);
	
	printf ("Informe a quantidade de votos do TERCEIRO candidato: ");
	scanf ("%d", &qv3);
	
	qtv = qv1 + qv2 + qv3;
	
	pv1 = (qv1 * 100) / qtv;
	
	pv2 = (qv2 * 100) / qtv;
	
	pv3 = (qv3 * 100) / qtv;
	
	for (i = 5; i <= pv1; i = i + 5)
		printf ("*");
	
	printf (" %d\n", pv1);
	
	for (i = 5; i <= pv2; i = i + 5)
		printf ("*");
		
	printf (" %d\n", pv2);
	
	for (i = 5; i <= pv3; i = i + 5)
		printf ("*");
	
	printf (" %d\n", pv3);		
	
	
	system ("pause");	
}
