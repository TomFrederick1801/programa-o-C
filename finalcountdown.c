#include <stdio.h>

int main() {
    int numero;
    printf("Introduz um número: ");
    scanf_s("%d", &numero);
    for (int i = numero; i >= 0; i--) {
        printf("%d\n", i);
    }
    return 0;
}
