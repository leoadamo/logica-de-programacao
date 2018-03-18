#include <stdio.h>

int main () {
	
	int x, v[10], i;
	
	
	printf ("Informe um Valor: ");
	scanf ("%d", &x);
	
	for (i = 0; i <= 9; i++)
		
		v[i] = x;
	
	for (i = 0; i <= 9; i++) 
	
		printf ("%d ", v[i]);
		
	printf ("\n");	
		
	return 0;	
}
