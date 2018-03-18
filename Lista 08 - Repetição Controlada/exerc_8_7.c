#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int n, i;
	
	printf ("Informe um Numero: ");
	scanf ("%d", &n);
	
	while (n < 0){
		printf ("Informe um Numero: ");
		scanf ("%d", &n);	
	}
	
	for (i = 1; i <= n; i++)
		printf ("PROGRAMACAO\n");
		
	system ("pause");	
}
