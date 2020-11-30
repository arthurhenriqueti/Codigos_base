#include <stdio.h>

int main(){

//Declaração de variaveis
    int month;

//Entrada do valor
    printf("Enter a number from 1 to 12: ");
    scanf("%d", &month);

    switch (month){
		case 1:
			printf("Janeiro");
			break;
		case 2:
			printf("Fevereiro");
			break;
		case 3:
			printf("Marco");
			break;
		case 4:
			printf("Abril");
			break;
		case 5:
			printf("Maio");
			break;
		case 6:
			printf("Junho");
			break;
		case 7:
			printf("Julho");
			break;
		case 8:
			printf("Agosto");
			break;
		case 9:
			printf("Setembro");
			break;
		case 10:
			printf("Outubro");
			break;
		case 11:
			printf("Novembro");
			break;
		case 12:
			printf("Dezembro");
			break;	
	}
	
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month ==12){
        printf(" tem 31 dias.");
    }

    else if(month == 4 || month == 6 || month == 9 || month == 11){
        printf(" tem 30 dias.");
    }

    else if(month ==2){
        printf(" e ano bissexto, tem entre 28 e 29 dias.");
    }

    return 0;

}
