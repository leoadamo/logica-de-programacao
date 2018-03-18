#include <stdio.h>
#include <math.h>

//Declara o protótipo da função
void exibeSeno (int n, float rad);
//Entra na função principal
int main (void) {
	
	int n, ang;
	float rad;
	//Loop para a leitura da quantidade de termos que a série terá
	do {
		printf ("Informe a quantidade de Termos da Serie: ");
		scanf ("%d", &n);
		//Valida se a quantidade de termos é aceitável (n > 0)
		if (n > 0) {
			//Lê o ângulo em Graus
			printf ("Informe o valor do Angulo: ");
			scanf ("%d", &ang);
			//Converte o angulo para radianos
			rad = (M_PI * ang) / 180;
			//Chama a função passando como parâmetros a quantidade de termos e o ângulo em radianos
			exibeSeno(n, rad);
		}
	//Repete enquando a quantidade de termos for valida	
	}while (n > 0);
	
	return 0;
}
//Chama a função exibeSeno
void exibeSeno (int n, float rad) {
	//Declara as variáveis locais da função
	int i;
	//Atribui à variável seno o valor encontrado em radianos
	float sen = rad;
	//Loop para o cálculo do seno de acordo com a quantidade de termos definida no main
	for (i = 1; i < n; i++) {
		sen = sen * (1 - pow(rad, 2) / (pow(i, 2) * pow (M_PI, 2)));
	}
	//Imprime Seno
	printf ("Seno = %f\n", sen);
}
