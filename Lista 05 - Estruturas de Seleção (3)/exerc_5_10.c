#include <stdio.h>
#include <stdlib.h>

int main ()

{
	int scc, scp, l1, l2, resp;
	
	do {
	
	system ("cls");
	
	printf ("Informe o saldo em conta corrente: ");
	scanf ("%d", &scc);
	
	printf ("Informe o saldo em conta poupanca: ");
	scanf ("%d", &scp);
	
	if (scc > 1000 || scp > 1000){
		if (scc > scp){
			l1 = 2 * scc;
			l2 = 3 * scp;	
		}else{
			l1 = 2 * scp;
			l2 = 3 * scc;
		}if (l1 > l2)
			printf ("Limite da conta especial: R$%d\n", l1);
		else
			printf ("Limite da conta especial: R$%d\n", l2);	
	}else
		printf ("Sem conta especial\n");
	
	printf ("Deseja continuar?\n");
	scanf ("%d", &resp);
	
	} while (resp == 1);
	
	system ("pause");
}
