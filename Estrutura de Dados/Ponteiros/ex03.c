#include <stdio.h>
#include <stdlib.h>

int main() {
    int var1, var2;

    printf("Informe o valor de var1 e var2: ");
    scanf("%d %d", &var1, &var2);
    printf("End. var1: %p / End. var2: %p\n\n", &var1, &var2);
    
    if(&var1 > &var2) {
        printf("Maior End: %p", &var1);
    } else {
        printf("Maior End: %p", &var2);
    }

    return 0;
}
