#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int numero_secreto, palpite, tentativas = 0;
	srand((unsigned int)time(NULL));
	numero_secreto = (rand() % 1000) + 1;
	printf("bem vindo ao nosso jogo de advinhação\n");
	printf("Tente adivinhar o numero secreto entre 1 e 1000.\n");
	do { 
		printf("Digite o seu palpite: ");
		if (scanf_s("%d", &palpite) != 1)
		{
			printf("Entrada inválida. Por favor, digite um número inteiro.\n");
			int c;
			while ((c = getchar()) != '\n' && c != EOF) {}
			continue;
		}
		tentativas++;
		if (palpite == numero_secreto)
		{
			printf("\nParabens! Acertaste o numero secreto (%d) em %d tentativas.\n", numero_secreto, tentativas);
		}
		else if (palpite < numero_secreto)
		{
			printf("O numero secreto e MAIOR.\n\n");
		}
		else
		{
			printf("O numero secreto e MENOR.\n\n");
		}
	} while (palpite != numero_secreto);

	return 0;
}