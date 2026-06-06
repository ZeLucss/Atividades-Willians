// JLAS-22.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-22 - Par ou impar                                      *");
    printf("\n*************************************************************************\n");

    int num;
    printf("\nDigite um numero: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("\n%d e PAR.\n", num);
    else
        printf("\n%d e IMPAR.\n", num);

    return 0;
}
