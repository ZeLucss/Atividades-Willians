// JLAS-20.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-20 - Ano bissexto                                      *");
    printf("\n*************************************************************************\n");

    int ano;
    printf("\nDigite um ano: ");
    scanf("%d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
        printf("\n%d e um ano bissexto (366 dias).\n", ano);
    else
        printf("\n%d nao e um ano bissexto (365 dias).\n", ano);

    return 0;
}
