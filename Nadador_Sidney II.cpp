#include <stdio.h>

int main()
{
    int ano, id; 

    printf("Inform o ano de nascimento: ");
    scanf("%d", &ano);
    
    printf("Ano digitado %d\n", ano);

	if (ano < 1950 || ano > 2020) {
		printf("Ano informado e invalido.");
		return 0;
	}	
	
    id = 2020 - ano;

    switch(id){
        case 1:
        case 2:
        case 3:
        case 4:
            printf("O nadador de idade %d e da categoria Invalida!", id);
        break;
        case 5:
        case 6:
        case 7:
            printf("O nadador de idade %d e da categoria Infantil A!", id);
        break;
        case 8:
        case 9:
        case 10:
            printf("O nadador de idade %d e da categoria Infantil B!", id);
        break;
        case 11:
        case 12:
        case 13:
            printf("O nadador de idade %d e da categoria Juvenil A!", id);
        break;
        case 14:
        case 15:
        case 16:
        case 17 :
            printf("O nadador de idade %d e da categoria Juvenil B!", id);
        break;
        default:
            printf("O nadador de idade %d e da categoria Senior!", id);
    }

    return 0;
}
