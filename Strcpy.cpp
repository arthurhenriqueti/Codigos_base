/*
Copie o nome completo (original) para outra string 
e escreva o conteúdo das duas strings, separadas por ‘\n’.

Dica1:   strcpy (nova_string, nome_completo); 
*/
#include	<stdio.h>
#include	<string.h>
#include	<locale.h>

int	main() {
	setlocale(LC_ALL, "portuguese");

	char	nome[256], copia_do_nome[256];
    
    // ler o nome completo
	printf("Escreva seu nome completo\n");
    scanf("%[ -~]", nome);	
    
    // copiar nome para dentro do copia_do_nome
    strcpy(copia_do_nome, nome);
    
    // mostra os dois separados por \n
    printf("Nome original\t\t[%s]\n", nome);
    printf("Copia do original\t[%s]", copia_do_nome);
}
