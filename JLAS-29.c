// JLAS-29.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-29 - Numeros pares de 0 a 50                           *");
    printf("\n*************************************************************************\n");

    printf("\nNumeros pares de 0 a 50:\n");
    for (int i = 0; i <= 50; i += 2)
        printf("%d\n", i);

    return 0;
}
