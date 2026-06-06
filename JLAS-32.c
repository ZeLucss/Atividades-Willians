// JLAS-32.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-32 - Quadrado dos numeros de 1 a 10                    *");
    printf("\n*************************************************************************\n");

    printf("\nQuadrado dos numeros de 1 a 10:\n");
    for (int i = 1; i <= 10; i++)
        printf("%d^2 = %d\n", i, i * i);

    return 0;
}
