#include <stdio.h>

int main() {

    const char* carros[3] = { "Ford", "BMW", "Volvo" };
    int numero;
    char sair = 'n';
    do {
        printf("Qual o carro que deseja saber? (0 a 2): ");
        scanf_s("%d", &numero);
        if (numero < 0 || numero >= 3) {
        printf("Esse numero nao existe! Tente de novo.\n\n");
        }
        else {       
        printf("O carro escolhido e: %s\n", carros[numero]);   
        printf("Deseja sair?(s/n) ");
        scanf_s(" %c", &sair); 
        printf("\n");
        }
    } while (sair != 's' && sair != 'S');
    printf("Programa terminado.\n");
    return 0;
}

