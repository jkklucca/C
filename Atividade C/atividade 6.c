#include <stdio.h>

int main() {
    float lado1, lado2, lado3;

    printf("Digite o comprimento do primeiro lado: ");
    scanf("%f", &lado1);

    printf("Digite o comprimento do segundo lado: ");
    scanf("%f", &lado2);

    printf("Digite o comprimento do terceiro lado: ");
    scanf("%f", &lado3);


    if ((lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1)) {
        

        if (lado1 == lado2 && lado2 == lado3) {

            printf("O triângulo é EQUILÁTERO.\n");
        } 
        else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {

            printf("O triângulo é ISÓSCELES.\n");
        } 
        else {

            printf("O triângulo é ESCALENO.\n");
        }
        
    } else {

        printf("Os valores informados NÃO formam um triângulo válido.\n");
    }

    return 0;
}

