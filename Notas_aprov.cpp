// Ler dois valores reais (com casa decimal)
// somar os valores e guardar em outra variável 
// apresentar uma palavra com base na decisão sobre a soma

#include <stdio.h>

int main(void)
{
    float nota1 = 0.0, nota2 = 0.0, soma = 0.0;
    
    printf("Digite a sua primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Digite a sua segunda nota: ");
    scanf("%f", &nota2);
    
    soma = (nota1 + nota2);
 
 	if (nota1 < 0 || nota2 < 0)   
 		printf("Nota invalida");
 	else {	
	    printf("Esta e a soma de suas notas = %.1f\n", soma);
	    
	    if(soma >= 6.0)
	    {
	        printf("Voce foi aprovado \n");
	    }
	    else if(soma >= 1.0)
	    {
	        printf("Voce fara a prova final");
	    }
	    else
	    {
	        printf("Voce foi reprovado \n");
	    }
	}
	
    return 0;
}
