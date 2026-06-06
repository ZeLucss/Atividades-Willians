// JLAS-27.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-27 - Tabuada de um numero com for                      *");
    printf("\n*************************************************************************\n");

    int n;
    printf("\nDigite um numero: ");
    scanf("%d", &n);

    printf("\nTabuada de %d:\n", n);
    for (int i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", n, i, n * i);

    return 0;
}
