/*
Inverter as letras de seu nome completo, duas a duas.
Mostrar o nome resultante.

Dica1: usar [i] e [i+1] para percorrer o array
*/


#include	<stdio.h>
#include	<string.h>
#include	<locale.h>

int	main() {
	setlocale(LC_ALL, "portuguese");
	
	char	nome[256], aux;
	int		i;
    
    // ler o nome completo
	printf("Escreva seu nome completo\n");
    scanf("%[ -~]", nome);
    
    // como controlar o loop para pegar duas em duas letras
    // troca-las de posição entre elas
    i = 0;
	while(nome[i] != '\0' && nome[i + 1] != '\0') {
	    aux = nome[i];
	    nome[i] = nome[i + 1];
	    nome[i + 1] = aux;
	    i+=2;
	}
    
    printf("O nome com as letras invertidas, duas a duas, ficou [%s]\n", nome);
}



