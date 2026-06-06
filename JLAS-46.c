// JLAS-46.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-46 - Contar de 1 a 10 com do...while                  *");
    printf("\n*************************************************************************\n");

    int i = 1;
    printf("\n");
    do {
        printf("%d\n", i);
        i++;
    } while (i <= 10);

    return 0;
}
