#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 50

typedef struct {
    int codigo;
    char nome[MAX_NOME];
    int quantidade;
    float preco;
} produto;

produto encontrarMaiorPreco(produto *estoque, int numProdutos) {
    produto maiorPreco = estoque[0];
    for (int i = 1; i < numProdutos; i++) {
        if (estoque[i].preco > maiorPreco.preco) {
            maiorPreco = estoque[i];
        }
    }
    return maiorPreco;
}

produto encontrarMaiorQuantidade(produto *estoque, int numProdutos) {
    produto maiorQuantidade = estoque[0];
    for (int i = 1; i < numProdutos; i++) {
        if (estoque[i].quantidade > maiorQuantidade.quantidade) {
            maiorQuantidade = estoque[i];
        }
    }
    return maiorQuantidade;
}

int main() {
    int numProdutos = 0;
    int capacidade = 1;
    produto *estoque = malloc(capacidade * sizeof(produto));

    if (estoque == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    char opcao;
    do {
        if (numProdutos == capacidade) {
            capacidade *= 2;
            produto *temp = realloc(estoque, capacidade * sizeof(produto));
            if (temp == NULL) {
                printf("Erro ao realocar memoria.\n");
                free(estoque);
                return 1;
            }
            estoque = temp;
        }

        printf("Digite o codigo do produto: ");
        scanf("%d", &estoque[numProdutos].codigo);
        printf("Digite o nome do produto: ");
        scanf(" %[^\n]", estoque[numProdutos].nome);
        printf("Digite a quantidade disponivel: ");
        scanf("%d", &estoque[numProdutos].quantidade);
        printf("Digite o preco de venda: ");
        scanf("%f", &estoque[numProdutos].preco);

        numProdutos++;

        printf("Deseja adicionar outro produto? (s/n): ");
        scanf(" %c", &opcao);

    } while (opcao == 's' || opcao == 'S');

    produto maisCaro = encontrarMaiorPreco(estoque, numProdutos);
    produto maisDisponivel = encontrarMaiorQuantidade(estoque, numProdutos);

    printf("Produto com maior preço: Codigo %d, Nome %s, Preço %.2f\n",
           maisCaro.codigo, maisCaro.nome, maisCaro.preco);
    printf("Produto com maior quantidade: Codigo %d, Nome %s, Quantidade %d\n",
           maisDisponivel.codigo, maisDisponivel.nome, maisDisponivel.quantidade);

    free(estoque);
    return 0;
}
