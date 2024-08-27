#include <stdio.h>
#include <stdlib.h>

//Menor numero

int compara(int n1, int n2){
    if(n1 > n2){
        return n2;
    }else{
        return n1;
    }
}

int main() {
    int a, b, res;
    printf("Informe 2 numeros separados por espaco:");
    scanf("%i %i", &a, &b);
    res = compara(a, b);
    printf("O menor numero eh: %d", res);
    return 0;
}
