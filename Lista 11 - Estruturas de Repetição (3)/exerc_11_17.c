#include <stdio.h>

int main () {
	
	int qe, qt, d, t, tt, c, dt, dm, i, j;
	
	c = 0, dm = 99999;
	
	printf ("Informe a Quantidade de Etapas: ");
	scanf ("%d", &qe);
	
	printf ("\n");
	
	for (i = 1; i <= qe; i++) {
		
		tt = 0, dt = 0;
		
		printf ("Informe a quantidade de trechos da Etapa %d: ", i);
		scanf ("%d", &qt);
		
		for (j = 1; j <= qt; j++) {
			
			printf ("Informe a Distancia e o Tempo do trecho %d: \n", j);
			scanf ("%d %d", &d, &t);
			
			if (d < 50)
			
				c++;
				
			tt += t;
			
			dt += d;	
			
			system ("cls");	
		}
		
		if (dt < dm) 
			
			dm = dt;
			
		printf ("Etapa %d: %d\n", i, tt);		
	}
	
	printf ("Quantidade de trechos com menos de 50 Km: %d\n", c);
	
	printf ("Distancia do Percurso da Etapa mais curta: %d\n", dm);
	
	return 0;
}
