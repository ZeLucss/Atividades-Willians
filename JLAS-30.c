// JLAS-30.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-30 - Fatorial de um numero com for                     *");
    printf("\n*************************************************************************\n");

    int n;
    printf("\nDigite um numero: ");
    scanf("%d", &n);

    long long fat = 1;
    for (int i = 1; i <= n; i++)
        fat *= i;

    printf("\n%d! = %lld\n", n, fat);

    return 0;
}
