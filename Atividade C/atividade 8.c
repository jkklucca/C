#include <stdio.h>

int main() {
    int idade, i;
    float soma_idades = 0, media;

    for (i = 1; i <= 5; i++) {
        printf("Digite a idade do individuo %d: ", i);
        scanf("%d", &idade);
        
        soma_idades = soma_idades + idade; 
    }


    media = soma_idades / 5.0;

    printf("\nA media aritmetica simples das idades informadas e: %.1f anos\n", media);

    return 0;
}

