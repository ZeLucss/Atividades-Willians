// JLAS-21.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-21 - Numero positivo ou negativo                       *");
    printf("\n*************************************************************************\n");

    float num;
    printf("\nDigite um numero: ");
    scanf("%f", &num);

    if (num > 0)
        printf("\nLucro: numero positivo.\n");
    else if (num < 0)
        printf("\nPrejuizo: numero negativo.\n");
    else
        printf("\nNeutro: o numero e zero.\n");

    return 0;
}
