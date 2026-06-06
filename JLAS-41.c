// JLAS-41.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-41 - Numero primo com while                            *");
    printf("\n*************************************************************************\n");

    int n, i = 2, primo = 1;
    printf("\nDigite um numero: ");
    scanf("%d", &n);

    if (n < 2) primo = 0;
    while (i * i <= n && primo) {
        if (n % i == 0) primo = 0;
        i++;
    }

    if (primo)
        printf("\n%d e um numero PRIMO.\n", n);
    else
        printf("\n%d NAO e um numero primo.\n", n);

    return 0;
}
