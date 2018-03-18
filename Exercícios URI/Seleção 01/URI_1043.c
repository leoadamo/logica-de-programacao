#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float a, b, c, area, perimetro;
	
	scanf ("%f %f %f", &a, &b, &c);
	
	if ((a + b > c)){
		if ((a + c) > b){
			if ((b + c) > a){
				
				perimetro = a + b + c;
				printf ("Perimetro = %.1f\n", perimetro);
			}else {
				
				area = ((a + b) * c) / 2;
				printf ("Area = %.1f\n", area);	
			}
		}else {
			
			area = ((a + b) * c) / 2;
			printf ("Area = %.1f\n", area);	
		}
	}else {
		
		area = ((a + b) * c) / 2;
		printf ("Area = %.1f\n", area);	
	}
	
	system ("pause");		
}


