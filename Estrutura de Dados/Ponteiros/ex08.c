#include <stdio.h>

void converteHora(int total_segundos, int *hora, int *min, int *seg) {
    *hora = total_segundos / 3600;
    total_segundos %= 3600;
    *min = total_segundos / 60;
    *seg = total_segundos % 60;
}

int main() {
    int total_segundos, horas, minutos, segundos;

    printf("Digite a quantidade total de segundos: ");
    scanf("%d", &total_segundos);

    converteHora(total_segundos, &horas, &minutos, &segundos);

    printf("Tempo convertido: %02d:%02d:%02d\n", horas, minutos, segundos);

    return 0;
}
