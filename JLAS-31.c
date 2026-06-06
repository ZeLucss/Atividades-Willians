// JLAS-31.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-31 - Contagem regressiva com for                       *");
    printf("\n*************************************************************************\n");

    printf("\nContagem regressiva:\n");
    for (int i = 10; i >= 1; i--)
        printf("%d\n", i);

    return 0;
}
