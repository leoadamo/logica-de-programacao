#include <stdio.h>

int main () {
	
	int t, b, i, ad, dd, ld, ag, dg, lg, vgd, vgg;
	
	scanf ("%d", &t);
	
	for (i = 1; i <= t; i++) {
		
		vgd = 0, vgg = 0;
		
		scanf ("%d", &b);
		
		if (b >= 0 && b <= 100) {
			
			scanf ("%d %d %d", &ad, &dd, &ld);
			
			scanf ("%d %d %d", &ag, &dg, &lg);
			
			if ((ad >= 1 && dd <= 100 && ld <= 50) && (ag >= 1 && dg <= 100 && lg <= 50)) {
			
				vgd = (ad + dd) / 2;
			
				vgg = (ag + dg) / 2;
			
				if (ld % 2 == 0)
			
					vgd = vgd + b;
			
				if (lg % 2 == 0)
			
					vgg = vgg + b;	
				
				if (vgd == vgg)
			
					printf ("Empate\n");
				
				else
					if (vgd > vgg)
					
						printf ("Dabriel\n");
					
					else 
						
						printf ("Guarte\n");			
			}	
		}
	}
	
	return 0;
}
