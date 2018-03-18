#include <stdio.h>

int main () {
	
	float nota, maiornota;
	int qn, i;
	
	maiornota = 0;
	
	printf ("Informe a quantidade de notas: ");
	scanf ("%d", &qn);
	
	for (i = 1; i <= qn; i++) {
		
		printf ("Informe a nota %d: ", i);
		scanf ("%f", &nota);
		
		if (maiornota < nota)
		
			maiornota = nota;
			
	}
	
	printf ("Maior Nota: %.1f\n", maiornota);
	
	return 0;
}
