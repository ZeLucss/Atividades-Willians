// JLAS-52.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-52 - Soma ate o numero ser multiplo de 10              *");
    printf("\n*************************************************************************\n");

    float num, soma = 0;
    do {
        printf("\nDigite um numero: ");
        scanf("%f", &num);
        soma += num;
    } while ((int)num % 10 != 0);

    printf("\nSoma total: %.2f\n", soma);

    return 0;
}
