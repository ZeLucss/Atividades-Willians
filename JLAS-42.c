// JLAS-42.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-42 - Quantidade de numeros impares digitados            *");
    printf("\n*************************************************************************\n");

    int num, cont = 0, i = 0;
    printf("\nDigite 10 numeros:\n");
    while (i < 10) {
        scanf("%d", &num);
        if (num % 2 != 0) cont++;
        i++;
    }

    printf("\nQuantidade de numeros impares: %d\n", cont);

    return 0;
}
