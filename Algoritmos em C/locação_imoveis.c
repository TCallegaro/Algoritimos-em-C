#include <stdio.h>

int main() {
    int tipo_imovel, imovel, dias;
    double diaria, adicional, desconto, valor_diarias, valor_adicionais, valor_descontos, valor_total;

    // Ler os dados da locação
    printf("Digite o tipo do imóvel (1-Casa / 2-Apartamento): ");
    scanf("%d", &tipo_imovel);

    printf("Digite o número do imóvel: ");
    scanf("%d", &imovel);

    printf("Digite a quantidade de dias para locação: ");
    scanf("%d", &dias);

    // Calcular os valores da locação com base no tipo e no número do imóvel
    switch (tipo_imovel) {
        case 1:
            switch (imovel) {
                case 1:
                    diaria = 1200.0;
                    adicional = 0.0;
                    desconto = 0.0;
                    break;
                case 2:
                    diaria = 700.0;
                    adicional = 0.0;
                    desconto = 0.1;
                    break;
                default:
                    printf("Imóvel inválido\n");
                    return 1;
            }
            break;
        case 2:
            switch (imovel) {
                case 1:
                    diaria = 8500.0;
                    adicional = 0.0;
                    desconto = 0.0;
                    break;
                case 2:
                    diaria = 1300.0;
                    adicional = 200.0;
                    desconto = 0.0;
                    break;
                default:
                    printf("Imóvel inválido\n");
                    return 1;
            }
            break;
        default:
            printf("Tipo de imóvel inválido\n");
            return 1;
    }

    // Calcular os valores totais da locação
    valor_diarias = diaria * dias;
    valor_adicionais = adicional * dias;
    valor_descontos = (valor_diarias + valor_adicionais) * desconto;
    valor_total = valor_diarias + valor_adicionais - valor_descontos;

    // Exibir os dados da locação
    printf("\nDados da locação:\n");
    printf("Imóvel locado: ");
    if (tipo_imovel == 1) {
        printf("Casa ");
    } else {
        printf("Apartamento ");
    }
    printf("%d\n", imovel);
    printf("Quantidade de dias: %d\n", dias);
    printf("Valor total das diárias: R$ %.2f\n", valor_diarias);
    printf("Valor total dos adicionais: R$ %.2f\n", valor_adicionais);
    printf("Valor total dos descontos: R$ %.2f\n", valor_descontos);
    printf("Valor total final: R$ %.2f\n", valor_total);

    return 0;
}