#include <stdio.h>

int main (void) {
	
	float t[12], tmed, s, ch;
	int h1, h2, i;
	
	//Carrega o vetor t com as temperaturas
	for (i = 0; i < 12; i++) {
		printf ("Informe a Temperatura %d: ", i+1);
		scanf ("%f", &t[i]);
	}
	//Laço para efetuar a leitura dos intervalos
	do {
		s = 0, ch = 0;
		printf ("Informe os valores do Intervalo (em Horas): ");
		scanf ("%d %d", &h1, &h2);
		//Verifica se o intervalo é válido (h1 < h2 || h1 == h2)
		if (h1 < h2) {
			for (i = h1 - 1; i <= h2 - 1; i++) {
				s += t[i];
				ch++;
			}
			//Calcula Media
			tmed = s / ch;
			printf ("%f\n", tmed);
		}else
			if (h1 == h2) {
				for (i = h1 - 1; i <= h2 - 1; i++) {
					s += t[i];
					ch++;
				}
				//Calcula Media
				tmed = s / ch;
				printf ("%.1f\n", tmed);
			}
	} while (h1 <= h2);
	
	return 0;
}
