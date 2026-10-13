#include <stdio.h>

int main() {
	float nota;
	printf("digite a nota do aluno de (0-20)");
	scanf_s("%f", &nota);

	if (nota > 9) {
		printf("aluno APROVADO!\n");

	}
	else {

		printf("aluno REPROVADO!\n");
	}
	return 0;
}