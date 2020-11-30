#include	<stdio.h>

int	main() {
	
	int	matriz[3][3];
	int	lin, col;
	
	// preencher uma matriz 3x3
	// com inteiros solicitados ao usuario
	// capturar os valores do teclado - scanf("%d")
	for (lin = 0; lin < 3; lin++) {
		for (col = 0; col < 3; col++) {
			scanf("%d", &matriz[lin][col]);
		}
	}	
	
	// mostrar os valores
	for (lin = 0; lin < 3; lin++) {
		for (col = 0; col < 3; col++) {
			printf("%d - ", matriz[lin][col]);
		}
		printf("\n");
	}	
}
