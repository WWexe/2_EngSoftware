#include<stdio.h>

int a, b;

void soma(int *ptrA) {
    *ptrA += b; 
    printf("Valores Atual. A: %d B: %d \n", a, b);
}

int main() {
    printf("Informe valores para var a e b: ");
    scanf("%d %d", &a, &b);
    
    int *ptrA = &a;  
    soma(ptrA);  
}
