#include<stdio.h>
#include<locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	char *Nomes[5] = { "Victor", "João", "Tom", "Salvador", "Gonçalo" };
	for (int i = 4; i >= 0; i--) 
	{
		printf("%s\n", Nomes[i]);
	}
	return 0;
}