/*
Contar e apresentar as quantidades de letras ‘a’, ‘b’ e ‘c’ 
que tem em seu nome completo.
Dica1: percorrer a string letra por letra
*/
#include	<stdio.h>

int	main() {
	char	nome[256];
	int		i, cont_a, cont_b, cont_c;
    
    // ler o nome completo
	printf("Escreva seu nome completo\n");
    scanf("%[ -~]", nome);

	// percorrer letra a letra
	i = cont_a = cont_b = cont_c = 0;
	while (nome[i] != '\0') {
		// para cada letra verificar se é a, b ou c
		// se for tem que somar 1 no contador da letra
		if (nome[i] == 'a')
			cont_a++;
		else if (nome[i] == 'b')
			cont_b++;
		else if (nome[i] == 'c')
			cont_c++;
		i++;
	}
	
	// mostrar as quantidades
	printf("Meu nome completo e: %s\n", nome);
	printf("E ele tem %d letras a, %d letras b e %d letras c\n", cont_a, cont_b, cont_c);
	
}
