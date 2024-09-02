#include <stdio.h>
#include <stdlib.h>

struct produto {
    int cod, qtda;
    char nome[50];
    float valor;
};

int main() {

    struct produto *prod;
    char op;
    int n = 1, i = 0, x = 1;
    prod = malloc(n * sizeof(struct produto));

    do {
        for (i = n - 1; i < n; i++) {
            printf("\n\nCadastro do Produto %d:\n", i + 1);
            printf("Codigo: ");
            scanf("%d", &prod[i].cod);
            printf("Nome: ");
            scanf("%s", prod[i].nome);
            printf("Quantidade: ");
            scanf("%d", &prod[i].qtda);
            printf("Valor: ");
            scanf("%f", &prod[i].valor);

            printf("\n\nProduto cadastrado com sucesso!\n");
            printf("---------------------------------\n");


            printf("Codigo do produto %d\n", prod[i].cod);
            printf("Nome do produto %s\n", prod[i].nome);
            printf("Quantidade %d\n", prod[i].qtda);
            printf("Valor do produto %.2f\n", prod[i].valor);
        }

        printf("\n\nDeseja cadastrar outro produto? (s/n): ");
        scanf(" %c", &op);
        if (op == 'n' || op == 'N') {
            x = 0;
        } else {
            n++;
            prod = realloc(prod, n * sizeof(struct produto));
        }
    } while (x == 1);

    free(prod);

    return 0;
}
