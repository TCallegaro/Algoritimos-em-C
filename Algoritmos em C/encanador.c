#include <stdio.h>
int main(){
    float valor_dia, valor_total;
    int dias_trabalhados;

    valor_dia = 27.00;

    printf("Digite a quantidade de dias trabalhados: ");
    scanf("%d", &dias_trabalhados);

    valor_total = (dias_trabalhados * valor_dia) - 0.08;
    printf("O encanador deve receber: %.2f", valor_total);

}