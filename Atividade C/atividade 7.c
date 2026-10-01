#include <stdio.h>

int main() {
    int numero;
    int soma = 0;

    printf("--- Somador de Numeros ---\n");
    printf("Digite os numeros que deseja somar (ou 0 para parar):\n");


    printf("Digite um numero: ");
    scanf("%d", &numero);


    while (numero != 0) {
        soma = soma + numero; 


        printf("Digite outro numero (ou 0 para sair): ");
        scanf("%d", &numero);
    }

    printf("\nA soma total dos valores lidos e: %d\n", soma);

    return 0;
}

