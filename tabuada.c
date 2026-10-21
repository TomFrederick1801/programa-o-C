#include <stdio.h>

int main() {
    int numero = 0, i;

    printf("escreve um numero da tabuada");
    scanf_s("%d", &numero);

    for (i = 1; i <= 10; i++); {
        printf("%d X %d = %d\n", numero, i,  numero * i);
    }
    return 0; 

}