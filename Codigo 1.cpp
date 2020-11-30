#include<stdio.h>
int main()
{
	int		idade;
	char p_letra;
    char p_nome[12];
    char s_nome[12];

    printf("Informe sua idade:");
    scanf("%d" , &idade);

    printf("Informe seu primeiro nome:");
    scanf("%s" , &p_nome);

    getchar();

    printf("Informe letra do meio:");
    scanf("%c" , &p_letra);

    printf("Informe seu segundo nome:");
    scanf("%s" , &s_nome);

	printf("%d %s %c %s\n", idade, p_nome, p_letra, s_nome);



}
