#include <stdio.h>
#include <stdlib.h>

int main ()

{
	int x, y;
	
	printf ("Informe um valor para X: ");
	scanf ("%d", &x);
	
	printf ("Informe um valor para Y: ");
	scanf ("%d", &y);
	
	if (x == 0 && y == 0)
		printf ("Origem\n");
	else{
		if (x == 0 && y !=0)
			printf ("Eixo Y\n");
		else{
			if (x !=0 && y == 0)
				printf ("Eixo X\n");
			else{
				if (x > 0){
					if (y > 0)
						printf ("I\n");
					else
						printf ("IV\n");	
				}else{
					if (y < 0)
						printf ("III\n");
					else 
						printf ("II\n");	
				}
			}	
		}	
	}			
	system ("pause");	
}
