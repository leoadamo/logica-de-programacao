#include <stdio.h>

int main () {
	
	int i;
	float nota, maiornota, menornota;
	
	maiornota = 0, menornota = 99999;
	
	do {
		
		printf ("Informe a Nota: ");
		scanf ("%f", &nota);
		
		if (nota >= 0 && nota <= 10) {
			
			if (maiornota < nota)
			
				maiornota = nota;
				
			if (nota < menornota)
			
				menornota = nota;			
		}
		
	} while (nota >= 0 && nota <= 10);
	
	printf ("Menor Nota: %.1f\n", menornota);
	printf ("Maior Nota: %.1f\n", maiornota);
	
	return 0;
}
