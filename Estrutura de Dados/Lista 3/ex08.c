#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int matricula;
    char sobrenome[50];
    int ano_nascimento;
} Aluno;

int main() {
    int num_alunos;

    printf("Digite o numero de alunos: ");
    if (scanf("%d", &num_alunos) != 1 || num_alunos <= 0) {
        printf("Numero de alunos invalido.\n");
        return 1;
    }

    Aluno *alunos = (Aluno *)malloc(num_alunos * sizeof(Aluno));
    if (alunos == NULL) {
        printf("Erro na alocacao de memoria.\n");
        return 1;
    }

    for (int i = 0; i < num_alunos; i++) {
        printf("Digite os dados do aluno %d:\n", i + 1);

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Sobrenome: ");
        scanf("%s", alunos[i].sobrenome);

        printf("Ano de nascimento: ");
        scanf("%d", &alunos[i].ano_nascimento);
    }

    printf("\nDados dos alunos cadastrados:\n");
    for (int i = 0; i < num_alunos; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Sobrenome: %s\n", alunos[i].sobrenome);
        printf("Ano de nascimento: %d\n", alunos[i].ano_nascimento);
        printf("\n");
    }

    free(alunos);

    return 0;
}
