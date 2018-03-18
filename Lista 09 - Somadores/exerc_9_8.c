#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int soma, c, res;
	
	soma = 0, c = 0, res = 0;
	
	while (res <= 100) {
		
		soma = soma + 1;
		
		res = res + soma;
		
		c++;
	}
	
	printf ("%d\n", c);
	
	system ("pause");
}

