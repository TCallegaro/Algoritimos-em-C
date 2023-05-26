#include <stdio.h>

int main() {
    float salario, novo_salario;
    float aumento = 0.25; // aumento de 25%

    // lê o salário do funcionário
    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    // calcula o novo salário com o aumento de 25%
    novo_salario = salario * (1 + aumento);

    // imprime o novo salário na tela
    printf("O novo salario do funcionario com aumento de 25%% e de R$ %.2f\n", novo_salario);

    return 0;
}
