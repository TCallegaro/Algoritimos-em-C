#include <stdio.h>
int main(){
    float altura, comprimento, largura, volume;
    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Digite o comprimento: ");
    scanf("%f", &comprimento);

    printf("Digite a largura: ");
    scanf("%f", &largura);
    
    volume = altura * comprimento * largura;
    printf("O volume e: %.2f\n", volume);

    return 0;
}