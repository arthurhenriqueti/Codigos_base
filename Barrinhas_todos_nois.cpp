/*
Use comando de repetição para mostrar na tela o efeito de uma barrinha 
rodando indefinidamente.
Pode usar qualquer um dos três comandos de repetição que aprendeu.
*/

#include	<stdio.h>

int	main() {
	// loop infinito
	while(1) {
		// mostrar barrinhas | / - | \ - | no mesmo lugar
		// \b
		printf("|\b");
		printf("/\b");
		printf("-\b");
		printf("\\\b");
		printf("|\b");
		printf("/\b");
		printf("-\b");
		printf("\\\b");
	}
}
