#include <stdio.h>
#include <stdlib.h>

main ()

{
	int A, B, C, R;
	
	printf ("Informe tres valores: ");
	scanf ("%d %d %d", &A, &B, &C);
	
	if (A > C){
		if (B > C)
			R = A + B;
		else 
			R = A + C;	
	}else{
		if (B > A)
			R = B + C;
		else
			R = C + A;	
	}
	printf ("SOMA: %d\n", R);
	
	system ("pause");
}
