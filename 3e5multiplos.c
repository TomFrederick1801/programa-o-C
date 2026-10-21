#include <stdio.h>

int main() {

	int numero = 0;

	while (1) {
		printf("diz me um numero || 0 para sair");
		scanf_s("%d", &numero);

		if (numero == 0) {
			printf("programa termina se tem 0.\n");
            return 0;
			
		}
        if (numero % 3 == 0 && numero % 5 == 0) {
            printf("O numero %d e multiplo de  (3 e 5).\n", numero);
        }
        else if (numero % 3 == 0) {
            printf("O numero %d e multiplo de 3.\n", numero);
        }
        else if (numero % 5 == 0) {
            printf("O numero %d e multiplo de 5.\n", numero);
        }
        else {
            printf("O numero %d nao e multiplo nem de 3 nem de 5.\n", numero);
        }

        printf("\n");
        
	}

	return 0;
}