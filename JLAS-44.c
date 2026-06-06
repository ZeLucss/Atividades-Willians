// JLAS-44.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-44 - Contar digitos de um numero com while             *");
    printf("\n*************************************************************************\n");

    long long num;
    int cont = 0;
    printf("\nDigite um numero positivo: ");
    scanf("%lld", &num);

    long long tmp = num;
    if (tmp == 0) cont = 1;
    while (tmp > 0) {
        cont++;
        tmp /= 10;
    }

    printf("\nO numero %lld possui %d digito(s).\n", num, cont);

    return 0;
}
