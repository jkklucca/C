#include <stdio.h>

	int main() {
	float cotacao_dolar, valor_reais, valor_convertido;
	
	printf("Digite a cotacao atual do dolar (ex: 5.50): ");
	scanf("%f", &cotacao_dolar);
	
	printf("Digite o valor em reais (R$) que deseja converter: ");
	scanf("%f", &valor_reais);
	
	valor_convertido = valor_reais / cotacao_dolar;
	
	printf("O valor equivalente em dolares e: U$ %.2f\n", valor_convertido);
	
	return 0;
	
}
