#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int hi, hf, duracao, dif;
	
	scanf ("%d %d", &hi, &hf);
	
	if (hi == hf) 
		duracao = 24 + hi - hf;
	
	else
		if (hi > hf){
			dif = hi - hf;
			duracao = 24 - dif;
			
		}else {
			duracao = hf - hi;
		}
	
	printf ("O JOGO DUROU %d HORA(S)\n", duracao);		
		
}
