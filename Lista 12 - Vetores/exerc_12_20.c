#include <stdio.h>

int main (void) {
	
	int i, vc[5], ve[5], op, f, cod, qt, qr;
	float vp[5], val;
	
	//Carrega os tr�s vetores com os dados de cada um
	for (i = 0; i < 5; i++) {
		printf ("Informe o Codigo, Preco e Estoque do produto: ");
		scanf ("%d %f %d", &vc[i], &vp[i], &ve[i]);
	}
	
	//Repete enquanto a opera��o digitada for v�lida
	do {
		//Usu�rio seleciona opera��o
		printf ("Informe a operacao (1.Venda / 2. Reposicao / 3. Inventario / 4.Fim): ");
		scanf ("%d", &op);
		switch (op) {
			//Opera��o Venda
			case 1: printf ("Informe o Codigo: ");
					scanf ("%d", &cod);
					f = 0;
					//Verifica se o codigo de produto existe no vetor "vc"
					for (i = 0; i < 5; i++) {
						if (cod == vc[i]) {
							f = 1;
							printf ("Informe a Quantidade Vendida: ");
							scanf ("%d", &qt);
							//Retira do estoque a quantidade vendida
							ve[i] = ve[i] - qt;
							printf ("Valor da Venda: %.2f\n", vp[i] * qt);
						}
					}
					//Mensagem para um c�digo n�o encontrado no vetor "vc"
					if (f == 0)
						printf ("Codigo Invalido\n");
						
					break;	
			//Opera��o Reposi��o		
			case 2: printf ("Informe o Codigo: ");
					scanf ("%d", &cod);
					f = 0;
					//Verifica se o codigo de produto existe no vetor "vc"
					for (i = 0; i < 5; i++) {
						if (cod == vc[i]) {
							f = 1;
							printf ("Informe a Quantidade Reposta: ");
							scanf ("%d", &qr);
							//Rep�e ao estoque uma quantidade informada pelo usu�rio do produto
							ve[i] = ve[i] + qr;
						}
					}
					//Mensagem para um c�digo n�o encontrado no vetor "vc"
					if (f == 0)
						printf ("Codigo Invalido\n");
						
					break;	
			//Opera��o Invent�rio
			case 3: 	//Mostra os dados presentes nos tr�s vetores "vc", "vp" e "ve"
						for (i = 0; i < 5; i++) {
						printf ("%d %.2f %d ", vc[i], vp[i], ve[i]);
						//Se valor em estoque n�o for negativo, faz o balan�o do estoque
						if (ve[i] > 0) {
							val = ve[i] * vp[i];
							printf ("%.2f", val);
						}
						printf ("\n");
					}	
					break;
			//Finaliza Programa
			default: break;			
		}								
	}while (op >= 1 && op < 4);
	 
	return 0;	
}
