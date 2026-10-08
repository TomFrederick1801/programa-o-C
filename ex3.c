#include <stdio.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "");

	float lado,área;
	printf("Digite o valor do lado do quadrado: ");
	scanf_s("%f", &lado,1);
	área = lado * lado;

	printf("A area do quadrado e: %.2f\n", área);

	return 0;
}
