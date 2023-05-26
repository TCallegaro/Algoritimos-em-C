#include <stdio.h>

int main() {
    int idade;
    int quantidadeDoacoes;
    char genero;
    float peso;

    scanf("%d", &idade);
    scanf("%f", &peso);
    scanf("%c", &genero);
    scanf("%d", &quantidadeDoacoes);

    if (idade >= 18 && idade <= 72 && peso >= 42) {
        if (genero == 'm') {
            if (quantidadeDoacoes < 4) {
                printf("Pode ser doador");
            } else {
                printf("Nao pode ser doador");
            }
        } else if (genero == 'f') {
            if (quantidadeDoacoes < 5) {
                printf("Pode ser doador");
            } else {
                printf("Nao pode ser doador");
            }
        } else {
            printf("Genero invalido");
        }
    } else {
        printf("Nao pode ser doador");
    }

    return 0;
}