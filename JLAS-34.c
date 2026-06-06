// JLAS-34.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-34 - Verificar se um numero e primo com for            *");
    printf("\n*************************************************************************\n");

    int n, primo = 1;
    printf("\nDigite um numero: ");
    scanf("%d", &n);

    if (n < 2) primo = 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) { primo = 0; break; }

    if (primo)
        printf("\n%d e um numero PRIMO.\n", n);
    else
        printf("\n%d NAO e um numero primo.\n", n);

    return 0;
}
