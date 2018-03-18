#include <stdio.h>

int main (void) {
	
	int t, cc, i, resp;
	
	scanf ("%d", &t);
	
	if (t >= 1 && t <= 4) {
		cc = 0;
		for (i = 0; i < 5; i++) {
			scanf ("%d", &resp);
			if (resp == t)
				cc++;
		}
		printf ("%d\n", cc);
	
	}
		
	return 0;
}
