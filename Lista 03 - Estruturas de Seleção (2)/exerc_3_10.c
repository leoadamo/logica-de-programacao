#include <stdio.h>
#include <stdlib.h>

main ()

{
	int x, y;
	
	printf ("Informe o valor de X: ");
	scanf ("%d", &x);
	
	printf ("Informe o valor de Y: ");
	scanf ("%d", &y);
	
	if (x == 0){
		if (y == 0)
			printf ("NENHUM QUADRANTE\n");
		else 
			printf ("NENHUM QUADRANTE\n");	
	}else{
		if (y == 0){
			printf ("NENHUM QUADRANTE\n");
		}else{
			if (x > 0){
				if (y > 0)
					printf ("I\n");
				else
					printf ("IV\n");	
			}else{
				if (y > 0)
					printf ("II\n");
				else 
					printf ("III\n");	
			}
		}
	}
	system ("pause");
}
