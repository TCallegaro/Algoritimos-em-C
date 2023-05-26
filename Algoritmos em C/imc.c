#include <stdio.h>

int main(){
    int peso;
    float altura;
    float imc;

    printf("Digite seu peso: \n");
    scanf("%d", &peso);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if (imc < 18)
    {
        printf("Abaixo do peso");

    }if (imc >=18.6 && imc <=24.9)
    {
        printf("Saudável");

    }if (imc >=25.0 && imc <=29.9)
    {
        printf("Peso em excesso");

    }if (imc >=30.0 && imc <= 34.9)
    {
       printf("Obesidade Grau I");

    }if (imc >=35.0 && imc <= 39.9)
    {
        printf("Obesidade Grau II(severa)");

    }if (imc >= 40.0)
    {
        printf("Obesidade Grau III(mórbida)");
    }






}