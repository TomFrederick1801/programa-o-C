#include <stdio.h>
#include <locale.h>

int main(void)
{


	setlocale(LC_ALL, "");
	int p1, p2, p3, p4;
	double media;
	printf("Diz o primeiro númer");
	scanf_s("%d", &p1);
	printf("Diz o segundo número");
	scanf_s("%d", &p2);
	printf("Diz o terceiro número");
	scanf_s("%d", &p3);
	printf("Diz o quarto número");
	scanf_s("%d", &p4);
	media = (p1 + p2 + p3 + p4) / 4.0;
	printf("%.2f", media);
	return 0;
}