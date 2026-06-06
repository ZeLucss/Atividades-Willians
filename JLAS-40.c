// JLAS-40.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-40 - Tabuada com while                                 *");
    printf("\n*************************************************************************\n");

    int n;
    printf("\nDigite um numero: ");
    scanf("%d", &n);

    int i = 1;
    printf("\nTabuada de %d:\n", n);
    while (i <= 10) {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    }

    return 0;
}
