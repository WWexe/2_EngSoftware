#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    char nome;
    int num;
    struct Node *prox;
} node;

node *LISTA;

node* CriarLista() {
    node *inicio = (node*) malloc(sizeof(node));
    if (inicio != NULL) {
        inicio->prox = NULL;
    } else {
        printf("Erro de alocacao de memoria\n");
    }
    return inicio;
}

int main() {
    LISTA = CriarLista();
    if (LISTA != NULL) {
        printf("Lista criada com sucesso\n");
    }
    return 0;
}
