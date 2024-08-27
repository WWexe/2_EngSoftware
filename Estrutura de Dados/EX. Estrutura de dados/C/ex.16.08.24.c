#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor = 27;
    int *ptr;
    ptr = &valor;

    printf("Valor da var 'valor': %d \n", valor);
    printf("Endereço variavel 'valor' %x \n", &valor);
    printf("Valor variavel 'ptr' %d \n", ptr);
    printf("Endereço variavel 'ptr' %d \n", *ptr);
    
}