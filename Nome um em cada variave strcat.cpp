/*
Ler seu nome completo, cada nome em uma string. Concatenar todos nomes em uma mesma string. Mostrar o nome completo.

Dica1:
strcat (nome_completo, primeiro_nome);
strcat (nome_completo, nome_do_meio);
strcat (nome_completo, ultimo_nome);
*/
#include	<stdio.h>
#include	<string.h>

int	main() {
	
	char	primeiro_nome[100], meio_nome[100], ultimo_nome[100], nome_completo[200];
	
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
    
    // mostrar o nome completo
    printf("Meu nome completo e: %s\n", nome_completo);
}








