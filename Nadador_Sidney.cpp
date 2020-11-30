#include <stdio.h>

int main()
{
    int ano, id;

    printf("Inform o ano de nascimento: ");
    scanf("%d", &ano);

    id = 2020 - ano;

    switch(id){
        case 1:
            printf("O nadador de idade %d e da categoria Invalida!", id);
            break;
        case 2:
            printf("O nadador de idade %d e da categoria Invalida!", id);
            break;
        case 3:
            printf("O nadador de idade %d e da categoria Invalida!", id);
            break;
        case 5:
            printf("O nadador de idade %d e da categoria Infantil A!", id);
            break;
        case 6:
            printf("O nadador de idade %d e da categoria Infantil A!", id);
            break;
        case 7:
            printf("O nadador de idade %d e da categoria Infantil A!", id);
            break;
        case 8:
            printf("O nadador de idade %d e da categoria Infantil B!", id);
            break;
        case 9:
            printf("O nadador de idade %d e da categoria Infantil B!", id);
            break;
        case 10:
            printf("O nadador de idade %d e da categoria Infantil B!", id);
            break;
        case 11:
            printf("O nadador de idade %d e da categoria Juvenil A!", id);
            break;
        case 12:
            printf("O nadador de idade %d e da categoria Juvenil A!", id);
            break;
        case 13:
            printf("O nadador de idade %d e da categoria Juvenil A!", id);
            break;
        case 14:
            printf("O nadador de idade %d e da categoria Juvenil B!", id);
            break;
        case 15:
            printf("O nadador de idade %d e da categoria Juvenil B!", id);
            break;
        case 16:
            printf("O nadador de idade %d e da categoria Juvenil B!", id);
            break;
        case 17:
            printf("O nadador de idade %d e da categoria Juvenil B!", id);
            break;
        default:
            printf("O nadador de idade %d e da categoria Senior!", id);
    }

    return 0;
}
