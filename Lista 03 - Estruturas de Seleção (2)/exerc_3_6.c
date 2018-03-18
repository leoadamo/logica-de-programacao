#include <stdio.h>
#include <stdlib.h>

main ()

{
	int A, B, C;
	
	printf ("Informe tres valores: ");
	scanf ("%d %d %d", &A, &B, &C);
	
	if (A > B){
		if (A > C)
			printf ("O maior deles e': %d\n", A);
		else
			printf ("O maior deles e': %d\n", C);	
	}else{
		if (B > C)
			printf ("O maior deles e': %d\n", B);
		else 
			printf ("O maior deles e': %d\n", C);	
	}
	system ("pause");
}
