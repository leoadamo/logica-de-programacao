#include <stdio.h>
#include <stdlib.h>


main ()

{
	int ql, ml, A, P;
	
	printf ("Informe a quantidade de lados: ");
	scanf ("%d", &ql);
	
	if (ql == 4){
		printf ("Informe a medida do lado: ");
		scanf ("%d", &ml);
		printf ("Quadrado\n");
		A = ml * ml;
		printf ("Area: %d\n", A);
	}else{
		if (ql == 3){
		printf ("Informe a medida do lado: ");
		scanf ("%d", &ml);
		printf ("Triangulo\n");
		P = ml * ql;
		printf ("Perimetro: %d\n", P);
		}
		else 
			printf ("Pentagono\n");
	}
	system ("pause"); 	
}
