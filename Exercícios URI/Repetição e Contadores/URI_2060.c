#include <stdio.h>

int main (void) {
	
	int n, l, i, m2, m3, m4, m5;
	
	scanf ("%d", &n);
	
	m2 = 0, m3 = 0, m4 = 0, m5 = 0;
	if (n >= 1 && n <= 1000)
		for (i = 0; i < n; i++) {
			scanf ("%d", &l);
			
			if (l % 2 == 0)
				m2++;
			
			if (l % 3 == 0)
				m3++;
			
			if (l % 4 == 0)
				m4++;
			
			if (l % 5 == 0)
				m5++;			
		}
		
		printf ("%d Multiplo(s) de 2\n", m2);
		printf ("%d Multiplo(s) de 3\n", m3);
		printf ("%d Multiplo(s) de 4\n", m4);
		printf ("%d Multiplo(s) de 5\n", m5);
	
	return 0;	
}
