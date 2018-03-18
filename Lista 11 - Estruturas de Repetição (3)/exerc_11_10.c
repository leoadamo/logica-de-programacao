#include <stdio.h>

int main () {
	
	int n, resp, c, i;
	
	c = 0;
	
	do {
	
	
		printf ("Informe um numero: ");
		scanf ("%d", &n);
	
		while (n < 0) {
		
			printf ("Informe um numero: ");
	    	scanf ("%d", &n);
		}
	
		for (i = 1; i <= n; i++){
		
			if (n % i == 0) 
			
				c++;
			
		}	
	
		if (c == 2)
	
			printf ("E' primo\n");
	
		else
	
			printf ("Nao e' primo\n");	
				
	printf ("Novo numero (1.Sim 2.Nao)?\n");
	scanf ("%d", &resp);
	
	system ("cls");
	
	c = 0;
	
	} while (resp == 1);			
			
	return 0;				
}
