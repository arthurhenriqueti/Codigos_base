#include	<stdio.h>

int	main() {
	float	notas[10][4];
	int		lin, col;
	
	// capturar as notas e calcular as médias
	for (lin = 0; lin < 3; lin++) {
		printf("Digite as notas do aluno\n");
		for (col = 0; col < 3; col++) {
			scanf("%f", &notas[lin][col]);
		}
		printf("Calculando a média\n");
		notas[lin][3] = (notas[lin][0] + notas[lin][1] + notas[lin][2]) / 3.0;
	}
	
	// mostrar as notas e médias
	for (lin = 0; lin < 3; lin++) {
		for (col = 0; col < 4; col++) {
			printf("%.1f\t", notas[lin][col]);
		}
		printf("\n");
	}	
}
