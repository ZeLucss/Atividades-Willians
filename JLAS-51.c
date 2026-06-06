// JLAS-51.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-51 - Contagem regressiva com do...while                *");
    printf("\n*************************************************************************\n");

    int i = 10;
    printf("\nContagem regressiva:\n");
    do {
        printf("%d\n", i);
        i--;
    } while (i >= 1);

    return 0;
}
