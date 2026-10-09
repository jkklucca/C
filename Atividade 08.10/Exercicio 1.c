#include <stdio.h>

int main() {
    float salarios[4];
    int i;

    for (i = 0; i < 4; i++) {
        printf("Digite o salário do %dº funcionário: ", i + 1);
        scanf("%f", &salarios[i]);
    }

    printf("\nSaída:\n");
    for (i = 0; i < 4; i++) {
        printf("Funcionário %d: R$ %.2f\n", i + 1, salarios[i]);
    }

    return 0;
}

