// JLAS-43.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-43 - Soma dos pares entre 1 e 100 com while            *");
    printf("\n*************************************************************************\n");

    int i = 2, soma = 0;
    while (i <= 100) {
        soma += i;
        i += 2;
    }

    printf("\nSoma dos numeros pares entre 1 e 100: %d\n", soma);

    return 0;
}
