#include <stdio.h>

#define ALUNOS 3
#define AVALIACOES 4

int main() {
    float notas[ALUNOS][AVALIACOES];
    int i, j;
    float soma, media, maiorMedia = 0.0f;
    int melhorAluno = 0;

    printf("Digite as notas para %d alunos e %d avaliacoes:\n", ALUNOS, AVALIACOES);
    for (i = 0; i < ALUNOS; i++) {
        printf("\n--- Aluno %d ---\n", i + 1);
        for (j = 0; j < AVALIACOES; j++) {
            printf("Avaliacao %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    printf("\n--- Resultados ---\n");
    for (i = 0; i < ALUNOS; i++) {
        soma = 0.0f;
        for (j = 0; j < AVALIACOES; j++) {
            soma += notas[i][j];
        }
        media = soma / AVALIACOES;
        printf("Media do Aluno %d: %.2f\n", i + 1, media);

        if (i == 0 || media > maiorMedia) {
            maiorMedia = media;
            melhorAluno = i + 1;
        }
    }

    printf("\nO melhor aluno foi o Aluno %d com media %.2f!\n", melhorAluno, maiorMedia);

    return 0;
}

