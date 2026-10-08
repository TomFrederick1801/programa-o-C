#include <stdio.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "");
	float base, altura, perimetro, area;
	printf("Digite o valor da base: ");
	scanf_s("%f", &base);
	printf("Digite o valor da altura: ");
	scanf_s("%f", &altura);
	perimetro = 2 * (base + altura);
	area = base * altura;
	printf("Perimetro: %.2f\n", perimetro);
	printf("Area: %.2f\n", area);

	return 0;
}