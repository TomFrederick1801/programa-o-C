#include <stdio.h>

int main() {
    float parcela, soma;
    int qtd;
    do {
        while ("soma" <= 1000);
        printf("Parcela %d: ", qtd + 1);
        scanf_s("%f", &parcela);
        soma += parcela;
        qtd++;
    } while (soma <= 1000); {
        printf("\nTotal acumulado: %.2f", soma);
        printf("\nQtd parcelas: %d", qtd);
        printf("\nMedia: %.2f\n", soma / qtd);
    }

    return 0;
}
