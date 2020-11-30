/*
Escreva um algoritmo em C para ler 5 números, um de cada vez, 
e ir armazenando-o em um vetor.
Em seguida exiba os valores desse vetor em ordem crescente dos índices
e em ordem decrescente dos índices.
*/

#include	<stdio.h>

int	main() {
	
	//Declarar um array int de 5 posicoes;
	int	valores[5];
	//Declarar um contador int;
	int i, nro;
	
	//Criar um laco FOR para:
	for (i = 0; i < 5; i++) {
		//Solicitar os dados do usuario;
		printf("Digite um numero\n");
		//Atribuir os dados informado as posicoes do array;
		scanf("%d", &valores[i]);
//		valores[i] = nro;
	}
		
	//Criar um laco FOR para:
	for (i = 0; i < 5; i++)
		//Exibir os dados do array em ordem crescente do indice/contador (Incrementando);
		printf("%d\t", valores[i]);
		
	printf("\n");
	//Criar um laco FOR para:
	for (i = 4; i >= 0; i--)
		//Exibir os dados do array em ordem DEcrescente do indice/contador (DEcrementando);
		printf("%d\t", valores[i]);
	//
	//
	//
	
	
}
