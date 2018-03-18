#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int l, r, soma;
	
	do {
		
		scanf ("%d %d", &l, &r);
		
		if (l != 0 && r != 0){
		
			soma = l + r;
			printf ("%d\n", soma);
		}
		
	} while (l != 0 && r != 0);
	
	system ("pause");
}
