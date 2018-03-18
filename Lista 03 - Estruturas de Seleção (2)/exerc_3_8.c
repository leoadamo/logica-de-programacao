#include <stdio.h>
#include <stdlib.h>

main ()

{
	int A,B,C;
	
	printf ("Informe tres valores: ");
	scanf ("%d %d %d", &A, &B, &C);
	
	if (A > C){
		if (B > C){
			if (A > B)
				printf ("Ordem Crescente: %d %d %d\n", C, B, A);
			else
				printf ("Ordem Crescente: %d %d %d\n", C, A, B);	
		}else
			printf ("Ordem Crescente: %d %d %d\n", B, C, A);
	}else{
		if (B > A){
			if (C > B)
				printf ("Ordem Crescente: %d %d %d\n", A, B, C);
			else
				printf ("Ordem Crescente: %d %d %d\n", A, C, B);	
		}else
			printf ("Ordem Crescente: %d %d %d\n", B, A, C);
	}
	system ("pause");
}
