#include <stdio.h>

int main (void) {
	
	int i;
	float m, num, cp, sp;
	
	cp = 0, sp = 0;
	for (i = 0; i < 6; i++) {
		scanf ("%f", &num);
		if (num > 0) {
			cp++;
			sp += num;
		}
	}
	
	m = sp / cp;
	printf ("%.0f valores positivos\n", cp);
	printf ("%.1f\n", m);
	
	return 0;
}
