#include <stdio.h>

int main () {
	
	int tc, ca, cg, cd;
	
	ca = 0, cg = 0, cd = 0;
		
	do {
		
		scanf ("%d", &tc);
		
		while (tc < 1 || tc > 4)
		
			scanf ("%d", &tc);
		
		if (tc == 1)
		
			ca++;
			
		if (tc == 2)
		
			cg++;
			
		if (tc == 3)
		
			cd++;	
						
	} while (tc >= 1 && tc < 4);
	
	printf ("MUITO OBRIGADO\n");
	printf ("Alcool: %d\n", ca);
	printf ("Gasolina: %d\n", cg);
	printf ("Diesel: %d\n", cd);
	
	return 0;
}
