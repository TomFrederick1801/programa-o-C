#include <stdio.h>

int main() {
    
    int numero_secreto = 42;
    int palpite;
    int tentativas_maximas = 5;
    int acertou = 0;
    printf("--- Jogo da Adivinhacao ---\n");
    printf("Tenta adivinhar o numero secreto entre 1 e 100.\n");
    printf("Tens %d tentativas!\n\n", tentativas_maximas);

    
    for (int i = 1; i <= tentativas_maximas; i++) {
        printf("Tentativa %d de %d. Digita o teu palpite: ", i, tentativas_maximas);
        scanf_s("%d", &palpite);        
        if (palpite == numero_secreto) {
            printf("\nParabens, acertou! O numero era mesmo o %d.\n", numero_secreto);
            acertou = 1;
            break; 
        }   
        else if (palpite > numero_secreto) {
            printf("O numero secreto e MENOR do que %d.\n\n", palpite);
        }
        else {
            printf("O numero secreto e MAIOR do que %d.\n\n", palpite);
        }
    }
    if (!acertou) {
        printf("Game Over! Esgotou as suas tentativas. O numero era o %d.\n", numero_secreto);
    }

    return 0;
}
