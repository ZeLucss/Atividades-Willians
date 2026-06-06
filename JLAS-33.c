// JLAS-33.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-33 - Multiplos de 3 entre 1 e 30                       *");
    printf("\n*************************************************************************\n");

    printf("\nMultiplos de 3 entre 1 e 30:\n");
    for (int i = 1; i <= 30; i++)
        if (i % 3 == 0)
            printf("%d\n", i);

    return 0;
}
