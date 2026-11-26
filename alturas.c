#include<stdio.h>
#include<locale.h>
int main(void)
{
	
	int contador = 0, idade[5], i=0; 
	float media, alturas[5], soma = 0;
		for (i < 0; i < 30; i++)
		{
			printf("diz a tua idade:" ,i + 1);
			scanf_s("%d", &idade[i]
		for (i = 0; i < 30; i++) );
			printf("diz a tua altura: ", i + 1);
			scanf_s("%d", &alturas[i]);
			soma = soma+idade[i];
		}
		media = soma / 30;
		
		{
			if (idade[i] > 13 && alturas[i] < media);
			{
					contador++;
			}
		}
			printf("quatidade de alunos: %d\n",contador);
			printf("media das alturas:%.2f\n", media);
			return 0;
}