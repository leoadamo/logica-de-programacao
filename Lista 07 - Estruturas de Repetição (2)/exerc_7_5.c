#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int qg, vi, vg, qe, gi, gg, resp;
	
	qg = 0, vi = 0, vg = 0, qe = 0;
	
	do {
		
		system ("cls");
		
		printf ("Informe os gols marcados pelo INTER: ");
		scanf ("%d", &gi);
		
		printf ("Informe os gols marcados pelo GREMIO: ");
		scanf ("%d", &gg);
		
		if (gi == gg){
			printf ("EMPATE\n");
			qe++;
		}else{
			if (gi > gg){
				printf ("INTER\n");
				vi++;
			}else{
				printf ("GREMIO\n");
				vg++;
			}
		} qg++;
		
		printf ("Escreva novo GRE-nal (1.Sim 2. Nao)?\n");
		scanf ("%d", &resp);
		
	} while (resp == 1);
	
	printf ("Quantidade de GRE-nais: %d\n", qg);
	printf ("Vitorias do INTER: %d\n", vi);
	printf ("Vitorias do GREMIO: %d\n", vg);
	printf ("Empates: %d\n", qe);
	
	if (vi > vg)
		printf ("INTER venceu mais GRE-nais\n");
	else
		printf ("GREMIO venceu mais GRE-nais\n");	
		
	system ("pause");	
}

