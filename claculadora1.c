#include<stdio.h>

int main()
{
	char opcao;
	float num1, num2, resultado;
	printf("escolha A(adicionar),S(subtrair),M(multiplicacao),D(divisao)");
	scanf_s(" %c", &opcao, 1); 
	printf("Escreve  num1");
	scanf_s("%f", &num1);
	printf("escreve num2");
	scanf_s("%f", &num2);
	switch (opcao) {
	case 'A': 'a';
		resultado = num1 + num2;
		printf("escreve o resultado %2f", resultado);
		break;
	case 'S': 's';
		resultado = num1 - num2;
		printf("escreve o resultado %2f", resultado);
		break;
	case 'M': 'm';
		resultado = num1 * num2;
		printf("escreve o resultado %2f", resultado);
		break;
	case 'D': 'd';
		resultado = num1 / num2;
		printf("escreve o resultado %2f", resultado);
		break;
	}
	return 0;
}