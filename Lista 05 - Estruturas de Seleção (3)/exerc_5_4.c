#include <stdio.h>
#include <stdlib.h>

int main ()

{
	int ql, tc;
	float pc, t, d;
	
	printf ("Informe a quantidade de Litros: ");
	scanf ("%d", &ql);
	
	printf ("Informe o tipo de combustivel utilizado: ");
	scanf ("%d", &tc);
	
	printf ("Informe o Preco do combustivel: ");
	scanf ("%f", &pc);
	
	if (tc == 1){
		if (ql <= 20){
			d = ql * pc * 0.03;
			t = (ql * pc) - d;
		}else{
			d = ql * pc * 0.05;
			t = (ql * pc) - d;
		}	
	}else{
		if (ql <= 15){
			d = ql * pc * 0.035;
			t = (ql * pc) - d;
		}else{
			d = ql * pc * 0.06;
			t = (ql * pc) - d;
		}
	}
	printf ("Total pago: R$%.2f\n", t);
	system ("pause");
}
