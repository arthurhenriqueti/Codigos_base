#include    <stdio.h>

int         main()
{
            char  nome[256];
            
            printf("Escreva seu nome completo\n");
            scanf("%[ -~]", nome);
            printf("%s\n", nome);
}
