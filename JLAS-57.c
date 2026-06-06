// JLAS-57.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-57 - A Central do Brinquedo Eletronico com switch/case *");
    printf("\n*************************************************************************\n");

    char cor[20];
    printf("\nQual cor acendeu na barriga do urso? ");
    scanf("%s", cor);

    if (strcmp(cor, "Verde") == 0)
        printf("\nO urso diz: Vamos brincar la fora!\n");
    else if (strcmp(cor, "Amarelo") == 0)
        printf("\nO urso diz: Estou ficando com soninho...\n");
    else if (strcmp(cor, "Vermelho") == 0)
        printf("\nO urso diz: Estou com fome, hora do lanche!\n");
    else
        printf("\nCor desconhecida\n");

    return 0;
}
