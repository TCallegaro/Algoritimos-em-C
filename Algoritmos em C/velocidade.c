#include <stdio.h>

#include <stdio.h>

int main() {
    float kmh, ms;

    printf("Digite a velocidade em km/h: ");
    scanf("%f", &kmh);

    // Conversão de km/h para m/s
    ms = kmh / 3.6;

    printf("%.2f km/h equivale a %.2f m/s.\n", kmh, ms);

    return 0;
}