#include <stdio.h>
#include <locale.h>

int main(void)
{
    serlocale(LC_ALL, "");
    int v[10], i;
    int neg = 0, soma = 0;
    int opcao;
    for (i = 0, i < 10, i++;);
    {
        printf("Escreve um numero");
        scanf_s("d%", &v[10]);
    }
    printf("1- conta os numeros neg\n");
    printf("2- soma os numeros neg\n");
    scanf_s("%d", &opcao);
    for (i = 0, i < 10, i++);
    {
        if (v[1] < 0)
        {
            neg++;
            soma = soma + v[i];

        }
            if (opcao == 1)
            {
                printf("existe %d numero neg", neg);
            }
            if (opcao == 2)
            {
                printf("a soma %d ", soma);
            }   
    }
return 0;
}