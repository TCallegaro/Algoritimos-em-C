#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsius * (9.0 / 5.0) + 32;

    printf("%.2f graus Celsius equivale a %.2f graus Fahrenheit.", celsius, fahrenheit);

    return 0;
}