#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int n, sa, ca, se, ce, ma, me;
	
	sa = 0, ca = 0, se = 0, ce = 0;
	
	printf ("Informe as notas dos alunos: ");
	scanf ("%d", &n);
	
	while (n != 99) {
		
		if (n >= 6) {
			
			ca++;
			sa = sa + n;
			
		}else
			if (n >= 3) {
				
				ce++;
				se = se + n;
			}
		
		printf ("Informe as notas dos alunos: ");
		scanf ("%d", &n);	
				
	}
	
	ma = sa / ca;
	
	me = se / ce;
	
	printf ("Media dos %d APROVADOS: %d\n", ca, ma);
	
	printf ("Media dos %d em EXAME: %d\n", ce, me);
	
	system ("pause");
}
