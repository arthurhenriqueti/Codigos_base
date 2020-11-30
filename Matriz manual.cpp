#include	<stdio.h>

int	main() {
	
	//matriz é 3 linhas por 3 colunas de inteiros
	int	matriz[3][3];

	//armazenar valores na matriz
	matriz[0][0] = 300;
	matriz[0][1] = 5;
	matriz[0][2] = 3;

	matriz[1][0] = 4;
	matriz[1][1] = 10;
	matriz[1][2] = 337;

	matriz[2][0] = 12;
	matriz[2][1] = 2;
	matriz[2][2] = 5;
	
	// mostrar os valores
	printf("%d - ", matriz[0][0]);
	printf("%d - ", matriz[0][1]);
	printf("%d \n", matriz[0][2]);

	printf("%d - ", matriz[1][0]);
	printf("%d - ", matriz[1][1]);
	printf("%d \n", matriz[1][2]);

	printf("%d - ", matriz[2][0]);
	printf("%d - ", matriz[2][1]);
	printf("%d \n", matriz[2][2]);	
}
