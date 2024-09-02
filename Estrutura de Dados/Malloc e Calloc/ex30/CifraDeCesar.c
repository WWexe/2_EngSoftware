#include <stdio.h>

void CifraCesar(char *mensagem, int shift) {
    if (*mensagem == '\0') {
        return;
    }

    char ch = *mensagem;
    if (ch >= 'a' && ch <= 'z') {
        *mensagem = ((ch - 'a' + shift) % 26) + 'a';
    } else if (ch >= 'A' && ch <= 'Z') {
        *mensagem = ((ch - 'A' + shift) % 26) + 'A';
    }

    CifraCesar(mensagem + 1, shift);
}

int main() {
    char mensagem[100];
    int shift, escolha;

    printf("Digite uma mensagem: ");
    fgets(mensagem, sizeof(mensagem), stdin);

    printf("Escolha uma opcao:\n");
    printf("1. Criptografar a mensagem\n");
    printf("2. Descriptografar a mensagem\n");
    printf("Opcao: ");
    scanf("%d", &escolha);

    printf("Digite o valor do shift: ");
    scanf("%d", &shift);

    if (escolha == 2) {
        shift = -shift;
    }

    CifraCesar(mensagem, shift);

    if (escolha == 1) {
        printf("Mensagem criptografada: %s", mensagem);
    } else if (escolha == 2) {
        printf("Mensagem descriptografada: %s", mensagem);
    } else {
        printf("Opcao invalida.\n");
    }

    return 0;
}
