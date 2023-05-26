#include <stdio.h>

int main(){
    float valor_venda, total_vista, valor_parcela, comissao;

    printf("Digite o valor da venda: \n");
    scanf("%f", &valor_venda);

    total_vista = valor_venda - (valor_venda * 0.1);
    valor_parcela = valor_venda / 3;
    comissao = valor_venda * 0.5;

    printf("O total da compra à vista com desconto é: %.2f\n", total_vista);
    printf("O valor da parcela é: %.2f\n", valor_parcela);
    printf("A comissão do vendedor é: %.2f\n", comissao);
}