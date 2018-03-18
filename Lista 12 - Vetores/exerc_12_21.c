#include <stdio.h>

int main (void) {
	
	int q, r, a[10], b[10], u[20], i, c, j, f;
	
	//Determina a quantidade de elementos dos vetores "a" e "b"
	printf ("Informe dois valores: ");
	scanf ("%d %d", &q, &r);
	
	//Carrega o vetor "a"
	for (i = 0; i < q; i++) {
		printf ("Informe o elemento %d do vetor 'a': ", i+1);
		scanf ("%d", &a[i]);
	}
	
	//Carrega o vetor "b"
	for (i = 0; i < r; i++) {
		printf ("Informe o elemento %d do vetor 'b': ", i+1);
		scanf ("%d", &b[i]);
	}
	
	//Contador que determinará a quantidade de índices do vetor "u"
	c = 0;
	/*Carrega o primeiro elemento para o vetor "u", e depois compara cada elemento de "u" com o próximo a ser carregado
	se já tiver algum igual no vetor "u" o mesmo não será copiado*/
	for (i = 0; i < q; i++) {
		//Flag para sinalizar algum elemento igual
		f = 0;
		if (i > 0) {
			//For varre o vetor "u"
			for (j = 0; j < i; j++) {
				if (a[i] == u[j]) {
					//Se flag = 1 elemento comparado é igual à algum elemento de "u"
					f = 1;
				}	
			}
			//Se flag não muda de estado, elemento comparado não é igual e é copiado para posição "c" de "u"
			if (f == 0) {
				u[c] = a[i];
				c++;
			}
		//Esta saída copia o primeiro elemento de "a[i]" para "u[c]", visto que no primeiro ciclo vetor "u" não possui elementos (i = 0)	
		}else {
			u[c] = a[i];
			c++;
		}
	}
	//Varre o vetor "b"
	for (i = 0; i < r; i++) {
		f = 0;
		/*Verifica se o elemento i de "b" já está em alguma das posições anteriores de "u",
		caso não esteja, joga o elemento no próximo índice "c" de "u"*/
		for (j = 0; j < c; j++) {
			if (b[i] == u[j]) {
				f = 1;
			}
		}
		//Se flag não muda de estado, elemento comparado não é igual e é copiado para posição "c" de "u"
		if (f == 0) {
			u[c] = b[i];
			c++;
		}
	}
	//Imprime o vetor "u" com o número de índices determinado pelo contador
	for (i = 0; i < c; i++)
		printf ("%d ", u[i]);
	
	printf ("\n");	
		
	return 0;			
}
