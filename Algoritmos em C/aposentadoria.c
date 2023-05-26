#include <stdio.h>

int main(){
    int idade, tempo_de_servico;

    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    printf("Digite o tempo de servico (em anos): \n");
    scanf("%d", &tempo_de_servico);

    if(idade >= 65 || tempo_de_servico >= 30 && idade >= 60 && tempo_de_servico >= 25){
        printf("Você pode se aposentar!");
    }else{
        printf("Você não pode se aposentar!");
    }
    return 0;
}