#include <stdio.h>
#include <stdlib.h>

int main ()

{
	int ih1, ih2, im1, im2, s, p, resp;
	
	do {
	
	printf ("Digite a idade do primeiro homem: ");
	scanf ("%d", &ih1);
	
	printf ("Digite a idade do segundo homem: ");
	scanf ("%d", &ih2);
	
	printf ("Digite a idade da primeira mulher: ");
	scanf ("%d", &im1);
	
	printf ("Digite a idade da segunda mulher: ");
	scanf ("%d", &im2);
	
	if (ih1 > ih2){
		if (im2 > im1){
			s = ih1 + im1;
			p = ih2 * im2;
		}else{
			s = ih1 + im2;
			p = ih2 * im1;
		}
	}else{
		if (im1 > im2){
			s = ih2 + im2;
			p = ih1 * im1;
		}else{
			s = ih2 + im1;
			p = ih1 * im2;
		}
	}
	printf ("Soma = %d\n", s);
	printf ("Produto = %d\n", p);
	printf ("Deseja continuar?\n");
	scanf ("%d", &resp);
	
	}while (resp == 1);
	
	system ("pause");
}
