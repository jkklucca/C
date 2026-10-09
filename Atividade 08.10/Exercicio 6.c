#include <stdio.h>

int main() {
    float temps[7];
    float soma = 0;
    float media;
    float maior_temp;
    float menor_temp;
    int acima_da_media = 0;
    int i;

    printf("Digite a temperatura da [seg]: ");
    scanf("%f", &temps[0]);
    soma += temps[0];
    maior_temp = temps[0];
    menor_temp = temps[0];

    for (i = 1; i < 7; i++) {
        printf("Digite a temperatura do %dº dia: ", i + 1);
        scanf("%f", &temps[i]);
        soma += temps[i];

        if (temps[i] > maior_temp) {
            maior_temp = temps[i];
        }
        if (temps[i] < menor_temp) {
            menor_temp = temps[i];
        }
    }

    media = soma / 7;

    for (i = 0; i < 7; i++) {
        if (temps[i] > media) {
            acima_da_media++;
        }
    }

    printf("\nSaída:\n");
    printf("Média: %.2f °C\n", media);
    printf("Maior temperatura: %.2f °C\n", maior_temp);
    printf("Menor temperatura: %.2f °C\n", menor_temp);
    printf("Dias acima da média: %d\n", acima_da_media);

    return 0;
}

