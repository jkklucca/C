#include <stdio.h>

int main() {
    int vendas[3][4];
    int total_produto[3] = {0, 0, 0};
    int total_geral = 0;
    int i;
    int j;

    printf("==================================================\n");
    printf("         REGISTRO DE VENDAS - CAFETERIA           \n");
    printf("==================================================\n");

    for (i = 0; i < 3; i++) {
        printf("\n[ PRODUTO %d ]\n", i + 1);
        for (j = 0; j < 4; j++) {
            printf("  -> Quantidade vendida no %dº dia: ", j + 1);
            scanf("%d", &vendas[i][j]);
            
            total_produto[i] += vendas[i][j];
            total_geral += vendas[i][j];
        }
    }

    printf("\n==================================================\n");
    printf("                RELATORIO FINAL                   \n");
    printf("==================================================\n");
    
    for (i = 0; i < 3; i++) {
        printf("  Produto %d: %3d unidades\n", i + 1, total_produto[i]);
    }
    
    printf("--------------------------------------------------\n");
    printf("  TOTAL GERAL: %3d unidades\n", total_geral);
    printf("==================================================\n");

    return 0;
}

