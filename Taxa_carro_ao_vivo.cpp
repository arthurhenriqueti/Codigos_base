/*
criar um variavel para ano do carro , criar um print solicitando o ano , criar um scan
recebendo e guardando na variavel tipo int ano do carro 
criar um if para invalidar o ano >2020 ou ano < 1950
pegar o valor do carro e guardar em uma variável tipo float
criar um outro if para calcular o ano do carro < 1990 e mostrar um print com a taxa 1%
criar um else para ano do carro >= 1990 mostrando um print com taxa de 1,5%
e no final return 0.
*/

#include	<stdio.h>

#define	MENOR_ANO 1950
#define	MAIOR_ANO 2020
#define	TAXA_1 1.1
#define	TAXA_15 1.7

int main() {

	//criar um variavel para ano do carro , criar um print solicitando o ano , criar um scan

	int	ano_fabricacao = 0;
	float	valor_carro = 0.0;
	float	taxa = 0.0;
	
	//		recebendo e guardando na variavel tipo int ano do carro 
	printf("Informe o ano de fabricacao do carro\n");
	scanf("%d", &ano_fabricacao);

	//criar um if para invalidar o ano >2020 ou ano < 1950
	if (ano_fabricacao > MAIOR_ANO || ano_fabricacao < MENOR_ANO) {
		printf("Ano de fabricacao invalido");
		return 0;
	}
	//pegar o valor do carro e guardar em uma variável tipo float
	printf("Informe o valor do carro.\n");
	scanf("%f", &valor_carro);
	
	//criar um outro if para calcular o ano do carro < 1990 e mostrar um print com a taxa 1%
	//criar um else para ano do carro >= 1990 mostrando um print com taxa de 1,5%
	if (ano_fabricacao < 1990) {
		// calcular o valor da taxa com 1%
		taxa = (valor_carro / 100) * TAXA_1;
	}
	else {
		// calcular o valor da taxa com 1,5%
		taxa = (valor_carro / 100) * TAXA_15;
	}
	
	// mostrar a taxa a ser paga
	printf("A taxa a ser paga é de %.2f\n", taxa);
		
	//e no final return 0.
	return 0;

}

