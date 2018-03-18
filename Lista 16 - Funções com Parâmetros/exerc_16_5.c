#include <stdio.h>
#include <math.h>

//Declara o prot�tipo da fun��o
void exibeSeno (int n, float rad);
//Entra na fun��o principal
int main (void) {
	
	int n, ang;
	float rad;
	//Loop para a leitura da quantidade de termos que a s�rie ter�
	do {
		printf ("Informe a quantidade de Termos da Serie: ");
		scanf ("%d", &n);
		//Valida se a quantidade de termos � aceit�vel (n > 0)
		if (n > 0) {
			//L� o �ngulo em Graus
			printf ("Informe o valor do Angulo: ");
			scanf ("%d", &ang);
			//Converte o angulo para radianos
			rad = (M_PI * ang) / 180;
			//Chama a fun��o passando como par�metros a quantidade de termos e o �ngulo em radianos
			exibeSeno(n, rad);
		}
	//Repete enquando a quantidade de termos for valida	
	}while (n > 0);
	
	return 0;
}
//Chama a fun��o exibeSeno
void exibeSeno (int n, float rad) {
	//Declara as vari�veis locais da fun��o
	int i;
	//Atribui � vari�vel seno o valor encontrado em radianos
	float sen = rad;
	//Loop para o c�lculo do seno de acordo com a quantidade de termos definida no main
	for (i = 1; i < n; i++) {
		sen = sen * (1 - pow(rad, 2) / (pow(i, 2) * pow (M_PI, 2)));
	}
	//Imprime Seno
	printf ("Seno = %f\n", sen);
}
