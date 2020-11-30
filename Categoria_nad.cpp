// ler um valor INTEIRO que é o ANO DE NASCIMENTO
// Calcular a IDADE - subtrair o ano de nascimento do ano corrente: 2020 - ano
// Classificar em função da idade encontrada.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
	
    int ano_nascimento = 0;
    int subtracao = 0;

    printf("Digite aqui o ano de seu nascimento: ");
    scanf("%d", &ano_nascimento);

    subtracao = 2020 - ano_nascimento;

    if (subtracao >  17 ) {
        printf("Nadador de idade %d, categoria Senior", subtracao);
    }
    else if (subtracao >= 14) {
        printf("Nadador de idade %d, categoria Juvenil B", subtracao);
    }
    else if (subtracao >= 11) {
        printf("Nadador de idade %d, categoria Juvenil A", subtracao);
    }
    else if (subtracao >= 8) {
        printf("Nadador de idade %d, categoria Infantil B", subtracao);
    }
    else if (subtracao >= 5) {
        printf("Nadador de idade %d, categoria Infantil A", subtracao);
    }
    else {
        printf("Muito jovem para nadar");
    }
return 0;
}
