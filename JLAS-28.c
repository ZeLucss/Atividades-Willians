// JLAS-28.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-28 - Soma dos 100 primeiros numeros naturais            *");
    printf("\n*************************************************************************\n");

    int soma = 0;
    for (int i = 1; i <= 100; i++)
        soma += i;

    printf("\nA soma dos numeros de 1 a 100 e: %d\n", soma);

    return 0;
}
