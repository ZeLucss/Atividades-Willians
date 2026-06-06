// JLAS-26.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-26 - Contar de 1 a 10 com for                          *");
    printf("\n*************************************************************************\n");

    printf("\n");
    for (int i = 1; i <= 10; i++)
        printf("%d\n", i);

    return 0;
}
