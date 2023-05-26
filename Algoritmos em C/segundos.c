#include <stdio.h>

int main(){
    int valor;
    float hora, minuto, segundo;

    printf("Digite um valor em segundos: \n");
    scanf("%d", &valor);

    hora = valor / 3600;
    minuto = (valor - (hora * 3600)) / 60;
    segundo = valor - (hora * 3600) - (minuto * 60);
    printf("Hora: %.2f \n", hora);
    printf("Minuto: %.2f \n", minuto);
    printf("Segundo: %.2f \n", segundo);
    return 0;
}