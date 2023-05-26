#include <stdio.h>
int main(){
    float primeiro_lugar, segundo_lugar, terceiro_lugar;
    int premio_total;

    premio_total = 100000;
    primeiro_lugar = 0.5 * premio_total;
    segundo_lugar = 0.3 * premio_total;
    terceiro_lugar = 0.2 * premio_total;

    printf("A quantia ganha pelo primeiro lugar(ganhador 1) é: %.2f\n", primeiro_lugar);
    printf("A quantia ganha pelo segundo lugar(ganhador 2) é: %.2f\n", segundo_lugar);
    printf("A quantia ganha pelo terceiro lugar(ganhador 3) é: %.2f\n", terceiro_lugar);

    return 0;
}