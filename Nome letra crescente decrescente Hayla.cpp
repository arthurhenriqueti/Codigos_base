#include <stdio.h>

int main(void) {

  // declarando variaveis
  char nomeInput, name[100];
  int i = 0;
  int lenght;

  // ler nome completo e armazena cada letra em uma posição de um vetor
  // laço para ler um nome em char
  
  // m0
	do {
	    nomeInput = getchar();// pega um caracter "por vez" e armazena cada no nameInput
	    //printf("%c\n", nomeInput);// mostra caracter
	    if (nomeInput != '\n'){
			name[i] = nomeInput;// armazena os valores do nome digitado(cada caracter) na variavel i do vetor.
		    i++;
	    }
		//else {
	    //    name[i] = '\0';
	    //} 
	} while (nomeInput!= '\n');// se o caracter de entrada n for enter volta para o do

	lenght = i;
	for ( i = 0; i < lenght ; i++) {
    	printf("%c", name[i]);
	}
	
	printf("\n");
	for(i = lenght-1; i >= 0; i--) {
		printf("%c", name[i]);
	}
	printf("\n");
	
	return 0;
}
