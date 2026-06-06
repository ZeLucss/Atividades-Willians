// JLAS-36.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-36 - Contar ate 10 com while                           *");
    printf("\n*************************************************************************\n");

    int i = 1;
    printf("\n");
    while (i <= 10) {
        printf("%d\n", i);
        i++;
    }

    return 0;
}
