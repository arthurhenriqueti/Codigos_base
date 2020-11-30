// Ler um numero inteiro e informar se ele é par ou impar
// ler um valor INTEIRO
// descobrir se é par - resto da divisão inteira POR 2

#include <stdio.h>

int main ()
{
	int numero;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &numero);
	
	if(numero % 2 == 0)
	{
		printf("Par");
	}
	else
		printf("Impar");
}
