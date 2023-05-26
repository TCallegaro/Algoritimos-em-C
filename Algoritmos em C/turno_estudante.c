#include <stdio.h>

int main(){
    char resposta;

    printf("Digite seu turno: (M - matutino | V - vespertino | N- Noturno)\n");
    scanf("%c", &resposta);

    if (resposta == 'V')
    {
        printf("Bom dia!");

    }if (resposta == 'M')
    {
        printf("Boa tarde!");

    }if (resposta == 'N')
    {
        printf("Boa noite!");
    }

    return 0;
}