#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PCS 100

typedef struct {
    char nome[50];
    char cpu[50];
    char placaMae[50];
    char placaDeVideo[50];
    char fonte[50];
    char memoriaRam[50];
    char armazenamento[50];
    char gabinete[50];
} PC;

void cadastrarPc(PC listaPc[], int *quantidade) {
    if (*quantidade < MAX_PCS) {
        printf("\033[H\033[J");
        printf("Cadastro do PC %d\n", *quantidade + 1);
        printf("\nInforme o nome do PC:\n");
        scanf(" %49[^\n]", listaPc[*quantidade].nome);
        getchar();
        printf("\nInforme Nome e Modelo do CPU:\n");
        scanf(" %49[^\n]", listaPc[*quantidade].cpu);
        getchar();
        printf("\nInforme Nome e Modelo da Placa Mae:\n");
        scanf(" %49[^\n]", listaPc[*quantidade].placaMae);
        getchar();
        printf("\nInforme Nome e Modelo da Placa de Video:\n");
        scanf(" %49[^\n]", listaPc[*quantidade].placaDeVideo);
        getchar();
        printf("\nInforme Nome, Potencia e Certificacao da Fonte:\n");
        scanf(" %49[^\n]", listaPc[*quantidade].fonte);
        getchar();
        printf("\nInforme Nome, Modelo, Capacidade e Velocidade da RAM:\n");
        scanf(" %49[^\n]", listaPc[*quantidade].memoriaRam);
        getchar();
        printf("\nInforme Nome, Capacidade e Velocidade do SSD/HD:\n");
        scanf(" %49[^\n]", listaPc[*quantidade].armazenamento);
        getchar();
        printf("\nInforme Nome e Modelo do Gabinete:\n");
        scanf(" %49[^\n]", listaPc[*quantidade].gabinete);
        getchar();

        printf("\033[H\033[J");
        printf("PC cadastrado com sucesso!\n");
        (*quantidade)++;
    } else {
        printf("Limite máximo de PCs cadastrados atingido.\n");
    }
}

void pesquisarPorNome(PC listaPc[], int quantidade) {
    char nome[50];
    printf("Digite o Nome do PC: \n");
    scanf(" %49[^\n]", nome);
    getchar();

    int encontrado = 0;
    for (int i = 0; i < quantidade; i++) {
        if (strcmp(listaPc[i].nome, nome) == 0) {
            printf("\033[H\033[J");
            printf("===== Registro encontrado =====\n");
            printf("|| PC - %d\n", i + 1);
            printf("|| CPU - %s\n", listaPc[i].cpu);
            printf("|| Placa Mae - %s\n", listaPc[i].placaMae);
            printf("|| Placa de Video - %s\n", listaPc[i].placaDeVideo);
            printf("|| Fonte - %s\n", listaPc[i].fonte);
            printf("|| RAM - %s\n", listaPc[i].memoriaRam);
            printf("|| Armazenamento - %s\n", listaPc[i].armazenamento);
            printf("|| Gabinete - %s\n", listaPc[i].gabinete);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Registro não encontrado\n");
    }
}

void deletarRegistro(PC listaPc[], int *quantidade) {
    char nome[50];
    int resposta;
    printf("Digite o Nome do PC: \n");
    scanf(" %49[^\n]", nome);
    getchar();

    int encontrado = 0;
    for (int i = 0; i < *quantidade; i++) {
        if (strcmp(listaPc[i].nome, nome) == 0) {
            printf("\033[H\033[J");
            printf("*** Registro encontrado ***\n\n");
            printf(" --- PC  %d ---\n", i + 1);
            printf("|| NOME - %s\n", listaPc[i].nome);
            printf("|| CPU - %s\n", listaPc[i].cpu);
            printf("|| Placa Mae - %s\n", listaPc[i].placaMae);
            printf("|| Placa de Video - %s\n", listaPc[i].placaDeVideo);
            printf("|| Fonte - %s\n", listaPc[i].fonte);
            printf("|| RAM - %s\n", listaPc[i].memoriaRam);
            printf("|| Armazenamento - %s\n", listaPc[i].armazenamento);
            printf("|| Gabinete - %s\n\n", listaPc[i].gabinete);
            encontrado = 1;
            printf("=== TEM CERTEZA QUE QUER DELETAR O REGISTRO? ===\n");
            printf("|| 1 - NAO\n");
            printf("|| 2 - SIM\n");
            scanf("%d", &resposta);
            if (resposta == 2) {
                for (int j = i; j < *quantidade - 1; j++) {
                    listaPc[j] = listaPc[j + 1];
                }
                (*quantidade)--;
                printf("*** Registro Deletado ***\n");
            } else {
                printf("Operacao CANCELADA\n");
            }
            break;
        }
    }

    if (!encontrado) {
        printf("PC com nome '%s' não encontrado.\n", nome);
    }
}

void exibirPcsCadastrados(PC listaPc[], int quantidade) {
    printf("===== PCs Cadastrados =====\n\n");

    for (int i = 0; i < quantidade; i++) {
        printf("--- PC %d ---\n\n", i + 1);
        printf("|| NOME - %s\n", listaPc[i].nome);
        printf("|| CPU - %s\n", listaPc[i].cpu);
        printf("|| Placa Mae - %s\n", listaPc[i].placaMae);
        printf("|| Placa de Video - %s\n", listaPc[i].placaDeVideo);
        printf("|| Fonte - %s\n", listaPc[i].fonte);
        printf("|| RAM - %s\n", listaPc[i].memoriaRam);
        printf("|| Armazenamento - %s\n", listaPc[i].armazenamento);
        printf("|| Gabinete - %s\n\n", listaPc[i].gabinete);
    }
}

void menu() {
    printf("\n===== Bem-vindo ao CRUD de PCs =====\n\n");
    printf("| 1 | - Cadastrar PC\n");
    printf("| 2 | - Listar PCs Cadastrados\n");
    printf("| 3 | - Pesquisar PC por Nome\n");
    printf("| 4 | - Deletar Registro\n");
    printf("| 5 | - Sair\n\n");
    printf("*** Escolha uma das opcoes acima ***\n");
}

int main() {
    int opcao;
    int quantidade = 0;
    PC listaPc[MAX_PCS];

    while (1) {
        menu();
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                cadastrarPc(listaPc, &quantidade);
                break;
            case 2:
                exibirPcsCadastrados(listaPc, quantidade);
                break;
            case 3:
                pesquisarPorNome(listaPc, quantidade);
                break;
            case 4:
                deletarRegistro(listaPc, &quantidade);
                break;
            case 5:
                printf("Saindo...\n");
                return 0;
            default:
                printf("Escolha uma opcao valida!\n");
                break;
        }
    }

    return 0;
}
