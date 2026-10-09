#include <stdio.h>

int main() {
    float salarios[6];
    float soma = 0;
    float media;
    float maior_salario;
    int abaixo_da_media = 0;
    int i;

    printf("Digite o salário do 1º funcionário: ");
    scanf("%f", &salarios[0]);
    soma += salarios[0];
    maior_salario = salarios[0];

    for (i = 1; i < 6; i++) {
        printf("Digite o salário do %dº funcionário: ", i + 1);
        scanf("%f", &salarios[i]);
        soma += salarios[i];
        
        if (salarios[i] > maior_salario) {
            maior_salario = salarios[i];
        }
    }

    media = soma / 6;

    for (i = 0; i < 6; i++) {
        if (salarios[i] < media) {
            abaixo_da_media++;
        }
    }

    printf("\nSaída:\n");
    printf("Média salarial: R$ %.2f\n", media);
    printf("Maior salário: R$ %.2f\n", maior_salario);
    printf("Salários abaixo da média: %d\n", abaixo_da_media);

    return 0;
}

