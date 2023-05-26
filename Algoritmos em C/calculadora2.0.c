#include <stdio.h>

int main(){
    int a, b, soma, multiplicacao, subtracao, moduloA, moduloB;
    float divisao;
    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    soma = a + b;
    subtracao = a - b;
    multiplicacao = a * b;
    divisao = a * b;
    moduloA = a % 2;
    moduloB = b % 2;

    printf("Soma de A por B: %d\n", soma);
    printf("Subtracao de A por B: %d\n", subtracao);
    printf("Multiplicacao de A por B: %d\n", multiplicacao);
    printf("Divisao de A por B: %f\n", divisao);
    printf("Modulo de A: %d\n", moduloA);
    printf("Modulo de B: %d\n", moduloB);
    
    return 0;
}