#include <stdio.h>

int main(){

//Declaração de variaveis
    int month;

//Entrada do valor
    printf("Enter a number from 1 to 12: ");
    scanf("%d", &month);

    switch (month){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
	        printf(" tem 31 dias.");
		break;
		case 2:
	        printf(" e ano bissexto, tem entre 28 e 29 dias.");
		break;
		case 4:
		case 6:
		case 9:
		case 11: 
	        printf(" tem 30 dias.");
		break;
		default:
			printf(" mes invalido");
		break;
	}

    return 0;
}
