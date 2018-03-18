#include <stdio.h>

int main () {
	
	int qp, t1, t2, area, i;
	
	scanf ("%d", &qp);
	
	for (i = 1; i <= qp; i++) {
		
		scanf ("%d %d", &t1, &t2);
		
		if ((t1 >= 10 && t1 <= 100) && (t2 >= 10 && t2 <= 100)) {
			
			area = (t1 * t2) / 2;
			
			printf ("%d cm2\n", area);
		}
	}
	
	return 0;
}
