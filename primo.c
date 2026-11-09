#include <stdio.h>

int main() {
    int num, i, divisores = 0;
    printf("escrve um numero inteiro");
    scanf_s("%d", &num);
    if (num <= 1) 
    {
        printf("o numero %d nao e primo boy.\n", num);
        return 0;
    }
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            divisores++;
        }
    }
    if (divisores == 2) {
        printf("o numero %d e primo acertaste.\n", num);
    } else {
        printf("o numero %d nao e primo fogo mano.\n", num);
    }
    return 0;
}
