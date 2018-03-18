#include <stdio.h>
#include <stdlib.h>

main ()

{
	int qe, qvb, qvn, qvv, pvb, pvn, pvv;
	
	printf ("Informe a quantidade de eleitores: \n");
	scanf ("%d", &qe);
	
	printf ("Informe a quantidade de votos brancos: \n");
	scanf ("%d", &qvb);
	
	printf ("Informe a quantidade de votos nulos: \n");
	scanf ("%d", &qvn);
	
	printf ("Informe a quantidade de votos validos: \n");
	scanf ("%d", &qvv);
	
	pvb = (qvb*100)/qe;
	pvn = (qvn*100)/qe;
	pvv = (qvv*100)/qe;
	
	
	printf ("Percentual de votos brancos: %d\n", pvb);
	printf ("Percentual de votos nulos: %d\n", pvn);
	printf ("Percentual de votos validos: %d\n", pvv);
	
	system ("pause");
	                                                                                                                                                                                                       
}
