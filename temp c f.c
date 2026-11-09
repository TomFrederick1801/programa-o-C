#include <stdio.h>

int main() {
    char temp;
    float valor;

    printf("Escolha C ou F: ");
    scanf_s(" %c", &temp, 1);
    printf("Digite o valor: ");
    scanf_s("%f", &valor);  
    if (temp == 'C' || temp == 'c') {
        printf("\nCelsius: %.1f C\n", valor);
        printf("Fahrenheit: %.1f F\n", (valor * 9.0 / 5.0) + 32.0);
    }
    else if (temp == 'F' || temp == 'f') {
        printf("\nFahrenheit: %.1f F\n", valor);
        printf("Celsius: %.1f C\n", (valor - 32.0) * 5.0 / 9.0);
    }
    return 0;
}