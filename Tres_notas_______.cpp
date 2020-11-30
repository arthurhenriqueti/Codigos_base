/*
Faça um programa que leia duas notas e calcule a media destas notas e 
apresente o resultado. Repita para três alunos.
*/

#include	<stdio.h>

int	main() {
	
	float	nota1, nota2, media;
	
	// definir laco FOR (cont < 3)
	for (i = 0; i < 3; i++) {
	// receber nota1
		scanf("%f", &nota1);
	// receber nota2
		scanf("%f", &nota2);
	// calcular media = (nota1 + nota2) / 2 
		media = (nota1 + nota2) / 2;
	// exibir media
		printf("Media = %.2f\n", media);
	// incrementar cont
	}
}

