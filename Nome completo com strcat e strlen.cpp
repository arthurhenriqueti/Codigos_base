/*
Descubra qual o tamanho da string resultante da concatenação dos nomes 
e mostre esse tamanho. Depois escreva cada letra do nome completo, todas separadas por ‘\t’.

Dica1:         strlen (nome_completo);
Dica2:         use o laço FOR
*/
#include	<stdio.h>
#include	<string.h>

int	main() {
	// ler e concatenar os nomes
	char	primeiro_nome[100], meio_nome[100], ultimo_nome[100], nome_completo[200];
	int		tam;
	
	// ler o nome completo MAS tenho que colocar um nome em cada variavel string
	printf("Escreva seu primeiro nome\n");
    scanf("%[ -~]", primeiro_nome);
    getchar();
		
	printf("Escreva seu(s) nome(s) do meio\n");
    scanf("%[ -~]", meio_nome);
	getchar();
	
	printf("Escreva seu ultimo nome\n");
    scanf("%[ -~]", ultimo_nome);
    getchar();

    // concaternar todos nomes em uma variavel 
    nome_completo[0] = '\0';
	strcat (nome_completo, primeiro_nome);
	strcat (nome_completo, " ");
	strcat (nome_completo, meio_nome);
	strcat (nome_completo, " ");
	strcat (nome_completo, ultimo_nome);

	tam = strlen(nome_completo);
	
	// loop para mostrar letra por letra separadas por \t
	while(nome_completo[i] != '\0'){
		printf("%c\t", nome_completo[i++]);
    } 
	
	
	
}
