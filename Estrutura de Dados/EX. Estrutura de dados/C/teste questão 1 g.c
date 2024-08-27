#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Para usar a função strcmp

#define MAX_PCS 100 // Definindo o número máximo de PCs que podem ser cadastrados

typedef struct {
    char processador[30];
    char placaMae[30];
    char placaDeVideo[50];
    char Ram[30];
    char gabinete[30];
} PC;

int numPcsCadastrados = 0; // Variável para controlar o número de PCs cadastrados
PC listaPcs[MAX_PCS]; // Array para armazenar os PCs cadastrados

void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void cadastrarPc() {
    if (numPcsCadastrados < MAX_PCS) {
        PC *pc = &listaPcs[numPcsCadastrados];
        limparBufferEntrada();
        printf("Informe o Nome e Modelo do CPU:\n");
        fgets(pc->processador, sizeof(pc->processador), stdin);
        pc->processador[strlen(pc->processador) - 1] = '\0'; // removendo o '\n' adicionado pelo fgets
        printf("Informe Nome e Modelo Placa Mae:\n");
        fgets(pc->placaMae, sizeof(pc->placaMae), stdin);
        pc->placaMae[strlen(pc->placaMae) - 1] = '\0'; // removendo o '\n' adicionado pelo fgets
        numPcsCadastrados++;
        printf("\nPC Cadastrado!\n\n");
    } else {
        printf("Limite máximo de PCs cadastrados atingido.\n\n");
    }
}

void exibirPcsCadastrados() {
    if (numPcsCadastrados == 0) {
        printf("Nenhum PC cadastrado.\n\n");
    } else {
        printf("----- PCs Cadastrados -----\n");
        for (int i = 0; i < numPcsCadastrados; i++) {
            printf("PC %d:\n", i + 1);
            printf("Processador: %s\n", listaPcs[i].processador);
            printf("Placa Mãe: %s\n", listaPcs[i].placaMae);
            printf("\n");
        }
    }
}

void menu() {
    printf("----- Bom Dia -----\n");
    printf("1 - Cadastrar novo PC\n");
    printf("2 - Exibir PCs cadastrados\n");
    printf("0 - Sair\n");
}

int main() {
    int opcao;

    while (1) {
        menu();
        scanf("%d", &opcao);
        limparBufferEntrada(); // limpar o buffer após a leitura de inteiros

        switch (opcao) {
            case 1:
                cadastrarPc();
                break;
            case 2:
                exibirPcsCadastrados();
                break;
            case 0:
                printf("Encerrando programa.\n");
                return 0;
            default:
                printf("Escolha uma Opção válida.\n\n");
                break;
        }
    }

    return 0;
}
