#include <stdio.h>

int main() {
    float valor_inicial, valor_final, desconto;


    printf("Digite o valor total da compra (R$): ");
    scanf("%f", &valor_inicial);


    if (valor_inicial <= 100.0) {
        desconto = 0.0; // Sem desconto
    } 
    else if (valor_inicial > 100.0 && valor_inicial <= 300.0) {

        desconto = valor_inicial * 0.10; // 10% de desconto
    } 
    else {
        desconto = valor_inicial * 0.20; // 20% de desconto
    }


    valor_final = valor_inicial - desconto;


    printf("\n--- RESUMO DA COMPRA ---\n");
    printf("Valor original: R$ %.2f\n", valor_inicial);
    printf("Desconto aplicado: R$ %.2f\n", desconto);
    printf("Valor final a pagar: R$ %.2f\n", valor_final);

    return 0;
}

