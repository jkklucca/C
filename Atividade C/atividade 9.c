#include <stdio.h>

int main() {
    int N, i;
    float S = 0.0;

    printf("Digite o valor de N para a serie harmonica: ");
    scanf("%d", &N);


    if (N <= 0) {
        printf("Por favor, insira um numero maior que 0.\n");
    } else {

        for (i = 1; i <= N; i++) {

            S = S + (1.0 / i);
        }


        printf("\nO valor da serie harmonica S para N = %d e: %.4f\n", N, S);
    }

    return 0;
}

