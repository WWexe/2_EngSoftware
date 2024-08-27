#include <stdio.h>

int fatorial(int n){
    if(n == 0)
        return 1;
    else
        return n + fatorial(n - 1);
}

int main(){
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    
    if(num < 0){
        printf("Numero invalido. Digite um numero inteiro positivo.\n");
    }
    else{
        int soma_num = fatorial(num);
        printf("A soma de %d ate 0 eh: %d\n", num, soma_num);
    }
    
    return 0;
}