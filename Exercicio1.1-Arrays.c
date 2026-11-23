#include <stdio.h>
#include <locale.h>

int main(void)
{
    serlocale(LC_ALL, "");
    int v[10], i=0, escolha, cont = 0, total = 0;
    printf("Digite 10 números:\n");
    for (i = 0; i < 10; i++)
    {
        scanf_s("%d", &v[i]);
    }
    printf("\n1 - Contar negativos");
    printf("\n2 - Somar negativos");
    printf("\nEscolha uma opcao: ");
    scanf_s("%d", &escolha);

    while (i < 10)
    {
        if (v[i] < 0)
        {
            cont++;
            total = total + v[i];
        }
        i++;
    }

    switch (escolha)

    {

    case 1:

        printf("Existem %d numeros negativos.", cont);

        break;

    case 2:

        printf("A soma dos negativos e %d.", total);
        break;
    }
    return 0;
}
