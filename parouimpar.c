#include <stdio.h>

int main() {
	int numero = 0;
	printf("ler o numero");
	scanf_s("%d", &numero);

	if (numero == 0) {
		printf("escreve o numero %d\n", numero);
		printf("fim\n");
	}
	else if (numero > 0) {
		if (numero % 2 == 0) {
			printf("O número %d é par.\n", numero);
		} else {
			printf("O número %d é impar.\n", numero);
		}
		printf("fim\n");
	}
	else {
		printf("O número %d é negativo.\n", numero);
		printf("fim\n");
	}
}
