#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CAMISA 100
#define MAX_BERMUDA 100

typedef struct {
    char genero[10];
    char cor[10];
    char tamanho[5];
    char marca[20];
} CAMISA;

typedef struct {
    char genero[10];
    char cor[10];
    char tamanho[5];
    char marca[20];
} BERMUDA;


CAMISA listaCamisa[MAX_CAMISA];
BERMUDA listaBermuda[MAX_BERMUDA];
int numCamisasCadastradas = 0;
int numBermudasCadastradas = 0;

void cadastrarCamisa(){
    CAMISA *camisa = &listaCamisa[numCamisasCadastradas];

    printf("Informe o Genero da camisa(F / M):\n");
    fgets(camisa->genero, 10, stdin);
    printf("Informe a cor:");
    fgets(camisa->cor, 10, stdin);
    printf("Informe o tamanho:");
    fgets(camisa->tamanho, 5, stdin);
    printf("Informe a marca:");
    fgets(camisa->marca, 20, stdin);
    numCamisasCadastradas++;
};

void cadastrarBermuda(){
    BERMUDA *bermuda = &listaBermuda[numBermudasCadastradas];

    printf("Informe o Genero da bermuda(F / M):\n");
    fgets(bermuda->genero, 10, stdin);
    printf("Informe a cor:");
    fgets(bermuda->cor, 10, stdin);
    printf("Informe o tamanho:");
    fgets(bermuda->tamanho, 5, stdin);
    printf("Informe a marca:");
    fgets(bermuda->marca, 20, stdin);
    numBermudasCadastradas++;
};

void exibirCamisasCadastradas() {
    printf("---Camisas Cadastradas:---\n\n");
    for(int i = 0; i < numCamisasCadastradas; i++){
        CAMISA *camisa = &listaCamisa[i];
        printf("---Camisa - %i---\n\n", i + 1);
        printf("Genero: %s\n", camisa->genero);
        printf("Cor: %s\n", camisa->cor);
        printf("Tamanho %s\n", camisa->tamanho);
        printf("Marca: %s\n", camisa->marca);
    }
}

void exibirBermudasCadastradas() {
    printf("Camisas Cadastradas:\n\n");
    for(int i = 0; i < numBermudasCadastradas; i++){
        BERMUDA *bermuda = &listaBermuda[i];
        printf("Bermuda - %i\n\n", i + 1);
        printf("Genero: %s\n", bermuda->genero);
        printf("Cor: %s\n", bermuda->cor);
        printf("Tamanho %s\n", bermuda->tamanho);
        printf("Marca: %s\n", bermuda->marca);
    }
}

void menu() {
    printf("---Bem Vindo---\n");
    printf("1 - Cadastrar Camisas:\n");
    printf("2 - Cadastrar Bermudas:\n");
    printf("3 - Listar Camisas Cadastradas:\n");
    printf("4 - Listar Bermudas Cadastradas:\n");
    printf("5 - Sair\n");
}

int main() {
    int opcao;

    while(1) {
        menu();
        scanf("%d", &opcao);
        getchar();
        switch(opcao) {
            case 1: 
                cadastrarCamisa();
                break;
            case 2: 
                cadastrarBermuda();
                break;
            case 3:
                exibirCamisasCadastradas();
                break;
            case 4:
                exibirBermudasCadastradas();
                break;
            case 5:
                return 0;
            default: 
                printf("Digite uma opcao valida:");
                break;
        }
    }
    return 0;
}