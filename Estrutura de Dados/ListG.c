#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void inserirElemento(struct Node** head, int valor) {
    struct Node* novoNo = (struct Node*)malloc(sizeof(struct Node));
    novoNo->data = valor;
    novoNo->next = NULL;

    if (*head == NULL) {
        *head = novoNo;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = novoNo;
    }
}

void removerElemento(struct Node** head) {
    if (*head == NULL) {
        printf("A lista esta vazia.\n");
        return;
    }
    struct Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

void exibirElementos(struct Node* head) {
    if (head == NULL) {
        printf("A lista esta vazia.\n");
        return;
    }
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int contarElementos(struct Node* head) {
    int contador = 0;
    struct Node* temp = head;
    while (temp != NULL) {
        contador++;
        temp = temp->next;
    }
    return contador;
}

int main() {
    struct Node* head = NULL;
    int opcao, valor;

    do {
        printf("\nEscolha uma opcao:\n");
        printf("1 - Inserir Elemento no final da Lista\n");
        printf("2 - Remover o primeiro Elemento da Lista\n");
        printf("3 - Exibir todos os elementos da Lista\n");
        printf("4 - Contar o numero de elementos na Lista\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Digite o valor a ser inserido: ");
                scanf("%d", &valor);
                inserirElemento(&head, valor);
                break;
            case 2:
                removerElemento(&head);
                break;
            case 3:
                exibirElementos(head);
                break;
            case 4:
                printf("Numero de elementos: %d\n", contarElementos(head));
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while(opcao != 0);

    return 0;
}
