#include <stdio.h>

int main() {
    float valores[8];
    float soma = 0;
    float media;
    int acima_da_media = 0;
    int i;

    for (i = 0; i < 8; i++) {
        printf("Digite o %dº valor: ", i + 1);
        scanf("%f", &valores[i]);
        soma += valores[i];
    }

    media = soma / 8;

    for (i = 0; i < 8; i++) {
        if (valores[i] > media) {
            acima_da_media++;
        }
    }

    printf("\nSaída:\n");
    printf("Média: %.2f\n", media);
    printf("Valores acima da média: %d\n", acima_da_media);

    return 0;
}

