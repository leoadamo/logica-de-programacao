#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int v, i, di, fi;
	
	di = 0, fi = 0;
	
	for (i = 1; i <= 10; i++) {
		printf ("Informe um valor: ");
		scanf ("%d", &v);
		
		if (v >= 100 && v <= 200)
			di++;
		else
			fi++;	
	}
	
	printf ("Dentro do Intervalo: %d\n", di);
	printf ("Fora do Intervalo: %d\n", fi);
}
