#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int h1, m1, h2, m2, qtm;
	
	do {
		
		scanf ("%d %d %d %d", &h1, &m1, &h2, &m2);
		
		if ((h1 != 0 && m1 != 0) || (h2 != 0 && m2 != 0)) {
			
			if (h1 <= h2)
			
				qtm = (h2 - h1) * 60;
				
			else	
			
				qtm = (24 - (h1 - h2)) * 60;
			
			if (m1 <= m2)
				
				qtm = qtm + (m2 - m1);	
			
			else
				
				qtm = qtm + 60 - 60 - m1 + m2;
			
			if (h1 == h2 && m1 > m2)
				
				qtm = 23 * 60  + (60 - m1 + m2);
			
		printf  ("%d\n", qtm);	
			
		}
		
	} while ((h1 != 0 && m1 != 0) || (h2 != 0 && m2 != 0));
	
	system ("pause");
}

