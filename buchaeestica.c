#include <stdio.h>
int main() {
	int maior, menor;
	int numero;
	int primeiro = 1;
	printf("fala quantos  numeror queres  homem (0 se queres ir embora Rei):\n");
	while (1) {
		scanf_s("%d", &numero);
		if (numero == 0) {
			return 0;
		}
		if (primeiro == 1) {
			maior = numero;
			menor = numero;
			primeiro = 0;
		} else {
			if (numero > maior"\n") {
				maior = numero;
			}
			if (numero < menor) {
				menor = numero;
			}
		}
	}
	printf("maior:%d\n", maior);
	printf("menor:%d\n", menor);
	return 0;
}