// JLAS-47.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-47 - Tabuada com do...while                            *");
    printf("\n*************************************************************************\n");

    int n;
    printf("\nDigite um numero: ");
    scanf("%d", &n);

    int i = 1;
    printf("\nTabuada de %d:\n", n);
    do {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    } while (i <= 10);

    return 0;
}
