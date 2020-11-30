/*
Escrever duas palavras e guardar cada uma em uma string.
Depois compara-las e dizer se
se são iguais, se
a 1ª é maior que a segunda ou se
a 1ª é menor que a segunda.
se retornar = 0 => as palavras são iguais
se retornar < 0 => a pal1 é menor que a pal2
se retornar > 0 => a pal1 é maior que a pal2

Dica1:   strcmp (2a_string, 1a_string); 
*/
#include	<stdio.h>
#include	<string.h>
#include	<locale.h>

int	main() {
	setlocale(LC_ALL, "portuguese");
	//comparando strs
    //criar duas str
    char nome1[50], nome2[50];
    int comp;

    //entrar com duas palavras e guardar cada uma em um str
    printf("COMPARADOR DE PALAVRAS\n\n");
    printf("Digite a primeira palavra: ");
    scanf("%s", nome1);
    getchar();

    printf("Digite a segunda palavra: ");
    scanf("%s", nome2);
    getchar();

    //comparar ambas
    //comp = strcmp(strupr(nome1), strupr(nome2));
	comp = strcmp(nome1, nome2);
    //verificar a comparação e mostrar o resultado
    switch (comp)
    {
    case -1:
        printf("A primeira palavra (%s) eh MENOR que a segunda palavra (%s).", nome1, nome2);
        break;
    case 0:
        printf("A primeira palavra (%s) e a segunda palavra (%s) sao IGUAIS.", nome1, nome2);
        break;
    case 1:
        printf("A primeira palavra (%s) eh MAIOR que a segunda palavra (%s).", nome1, nome2);
        break;
    
    default:
        printf("ERRO");
        break;
    }
}
