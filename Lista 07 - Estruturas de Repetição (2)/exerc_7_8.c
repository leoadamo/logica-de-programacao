#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int cib, tt, tb, tp, tf, c, i, pb, pp, pf;
	
	cib = 0, tb = 0, tp = 0, tf = 0;
	
	do {
		
		system ("cls");
		
		printf ("Informe o codigo do time: ");
		scanf ("%d", &c);
		
		if (c > 0 && c <= 3){
			printf ("Informe a idade do torcedor: ");
			scanf ("%d", &i);
		}
		if (c == 1){
			if (i >= 15 && i <= 20){
				tb++;
				cib++;
			}else
				tb++;
		}
		if (c == 2)
			tp++;
			
		if (c == 3)
			tf++;
				
	} while (c >=1 && c <=3);
	
	tt = tb + tp + tf;
	pb = (tb * 100) / tt;
	pp = (tp * 100) / tt;
	pf = (tf * 100) / tt;
	
	printf ("Brasil: %d\n", pb);
	printf ("Pelotas: %d\n", pp);
	printf ("Farroupilha: %d\n", pf);
	printf ("%d\n", cib);
	
	system ("pause");
}
