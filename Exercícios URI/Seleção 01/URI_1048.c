#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float s, nv, r, pr;
	
	scanf ("%f", &s);
	
	if (s > 2000){
		
		pr = 4;
		r = s * 0.04;
		nv = s + r;
		
		printf ("Novo salario: %.2f\n", nv);
		printf ("Reajuste ganho: %.2f\n", r);
		printf ("Em percentual: %.0f %%\n", pr);
		
	}else {
		if (s >= 1200.01 ){
			
			pr = 7;
			r = s * 0.07;
			nv = s + r;
			
			printf ("Novo salario: %.2f\n", nv);
			printf ("Reajuste ganho: %.2f\n", r);
			printf ("Em percentual: %.0f %%\n", pr);
			
		}else {
			if (s >= 800.01){
				
				pr = 10;
				r = s * 0.1;
				nv = s + r;
				
				printf ("Novo salario: %.2f\n", nv);
				printf ("Reajuste ganho: %.2f\n", r);
				printf ("Em percentual: %.0f %%\n", pr);
				
			}else{
				if (s >= 400.1){
					
					pr = 12;
					r = s * 0.12;
					nv = s + r;
					
					printf ("Novo salario: %.2f\n", nv);
					printf ("Reajuste ganho: %.2f\n", r);
					printf ("Em percentual: %.0f %%\n", pr);
					
				}else {
					if (s > 0){
						
						pr = 15;
						r = s * 0.15;
						nv = s + r;
						
						printf ("Novo salario: %.2f\n", nv);
						printf ("Reajuste ganho: %.2f\n", r);
						printf ("Em percentual: %.0f %%\n", pr);
					} 
				}
			}
		}
	}
	
	system ("pause");
}
