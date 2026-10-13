#include <stdio.h>

int main() {
    float kmi, kmf, litros, litros_aos_100;
    printf("Introduza os quilómetros iniciais (kmi): ");
    scanf_s("%f", &kmi);
    printf("Introduza os quilómetros finais (kmf): ");
    scanf_s("%f", &kmf);
    printf("Introduza os litros consumidos: ");
    scanf_s("%f", &litros);
    if (kmf > kmi) {       
        litros_aos_100 = (litros * 100) / (kmf - kmi);
        printf("\nO consumo médio é de: %.2f litros aos 100 km.\n", litros_aos_100);
    }
    else {
        printf("\nErro: Os quilómetros finais têm de ser maiores que os iniciais.\n");
    }

    return 0;
}