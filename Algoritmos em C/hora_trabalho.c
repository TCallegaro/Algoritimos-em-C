#include <stdio.h>

int main(){
    int valorHora, horasTrabalhadas, salario, salarioComBonus;
    float valorPago;


     printf("Digite o número de horas de trabalho (por mês): ");
    scanf("%d", &valorHora);


    printf("Digite o valor da hora de trabalho: ");
    scanf("%d", &horasTrabalhadas);

   salario = valorHora * horasTrabalhadas;
   salarioComBonus = salario * 10/100;

    printf("O valor a pagar é de: %.2f\n", salarioComBonus);

    return 0;
}