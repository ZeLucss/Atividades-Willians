// JLAS-23.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-23 - Maior de dois numeros                             *");
    printf("\n*************************************************************************\n");

    float a, b;
    printf("\nDigite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);

    if (a > b)
        printf("\nO maior numero e: %.2f\n", a);
    else if (b > a)
        printf("\nO maior numero e: %.2f\n", b);
    else
        printf("\nOs dois numeros sao iguais: %.2f\n", a);

    return 0;
}
