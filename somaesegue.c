#include <stdio.h>

int main() {
	int quantidade;
	float numero, soma = 0.0f;

	printf("quantos numeros queres somar");
	if (scanf_s("%d", &quantidade) != 1) {
		printf("Erro ao ler a quantidade.\n");
		return 1;
	}

	for (int i = 1; i <= quantidade; i++) {
		printf("Digite o numero %d: ", i);
		if (scanf_s("%f", &numero) != 1) {
			printf("Erro ao ler o numero.\n");
			return 1;
		}
		soma += numero;
	}
	printf("\nA soma de todos os %d numeros e: %.2f\n", quantidade, soma);

	return 0;
}