#include <stdio.h>
#include <stdlib.h>

int main ()

{
	int tg, vm;
	double l, d;
	
	scanf ("%d", &tg);
	scanf ("%d", &vm);
	
	d = tg * vm;
	l = d / 12;
	
	printf ("%.3lf\n", l);
	
	system ("pause");
}
