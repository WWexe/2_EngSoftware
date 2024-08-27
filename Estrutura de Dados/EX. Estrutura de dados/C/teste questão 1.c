#include <stdio.h>
#include <string.h>

// Definição da struct para Produto
typedef struct {
    int id;
    char nome[50];
    float preco;
    int estoque;
} Produto;

// Definição da struct para Cliente
typedef struct {
    int id;
    char nome[50];
    char endereco[100];
    char telefone[15];
} Cliente;

// Funções para cadastro de Produto e Cliente
void cadastrarProduto(Produto *produto) {
    printf("Digite o ID do Produto: ");
    scanf("%d", &produto->id);
    printf("Digite o Nome do Produto: ");
    scanf(" %[^\n]%*c", produto->nome);
    printf("Digite o Preço do Produto: ");
    scanf("%f", &produto->preco);
    printf("Digite a Quantidade em Estoque: ");
    scanf("%d", &produto->estoque);
}

void cadastrarCliente(Cliente *cliente) {
    printf("Digite o ID do Cliente: ");
    scanf("%d", &cliente->id);
    printf("Digite o Nome do Cliente: "); 
    scanf(" %[^\n]%*c", cliente->nome);
    printf("Digite o Endereço do Cliente: ");
    scanf(" %[^\n]%*c", cliente->endereco);
    printf("Digite o Telefone do Cliente: ");
    scanf(" %[^\n]%*c", cliente->telefone);
}

// Função para exibir o menu
void menu() {
    printf("Menu:\n");
    printf("1. Cadastrar Produto\n");
    printf("2. Cadastrar Cliente\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
}

int main() {
    Produto produto;
    Cliente cliente;
    int opcao;

    while (1) {
        menu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarProduto(&produto);
                printf("Produto cadastrado com sucesso!\n");
                break;
            case 2:
                cadastrarCliente(&cliente);
                printf("Cliente cadastrado com sucesso!\n");
                break;
            case 3:
                printf("Saindo...\n");
                return 0;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    }

    return 0;
}
