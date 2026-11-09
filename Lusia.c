#include <stdio.h>

int main() {
    int familiares, M, N, sobras;

    printf("Introduza o numero de familiares e fatias (M): ");
    scanf_s("%d %d", &familiares, &M);
    N = M / familiares;       
    sobras = M % familiares;  
    printf("Cada familiar recebe: %d fatias\n", N);
    printf("Sobram: %d fatias\n", sobras);

    return 0;
}
