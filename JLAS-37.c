// JLAS-37.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-37 - Soma de numeros ate digitar zero                  *");
    printf("\n*************************************************************************\n");

    float num, soma = 0;
    printf("\nDigite numeros (0 para encerrar):\n");
    scanf("%f", &num);
    while (num != 0) {
        soma += num;
        scanf("%f", &num);
    }

    printf("\nSoma total: %.2f\n", soma);

    return 0;
}
