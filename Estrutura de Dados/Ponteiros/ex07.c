#include <stdio.h>
#define PI 3.14159

void calc_esfera(float R, float *area, float *volume) {
    *area = 4 * PI * R * R;
    *volume = (4.0 / 3.0) * PI * R * R * R;
}

int main() {
    float raio, area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    calc_esfera(raio, &area, &volume);

    printf("Area da superficie: %.2f\n", area);
    printf("Volume: %.2f\n", volume);

    return 0;
}
