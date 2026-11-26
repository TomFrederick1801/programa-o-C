#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	int i;
	char* n[5] = { "Ronaldo", "Pele", "Maradona", "Messi", "Zidane" };
	for (i = 4; i = 0; i--)
	{
		printf("%s", n[i]);
	}
	return 0;
}