#include <stdio.h>
#include <stdlib.h>

int main ()

{
	float qmor, qmac, p1, p2, tfrutas, vt, d, vp;
	
	printf ("Informe Kg Morango: ");
	scanf ("%f", &qmor);
	
	printf ("Informe Kg Maca: ");
	scanf ("%f", &qmac);
	
	if (qmor <= 5)
		p1 = qmor * 5;
	else
		p1 = qmor * 4;
	if (qmac <= 5)
		p2 = qmac * 3;
	else
		p2 = qmac * 2;
	
	tfrutas = qmor + qmac;
	vt = p1 + p2;
	
	if (tfrutas > 8 || vt > 35){
		d = vt * 0.2;
		vp = vt - d;
		printf ("Valor Pago: R$%.2f\n", vp);
	}else
		printf ("Valor pago: R$%.2f\n", vt);
	
	system ("pause");
						
}
