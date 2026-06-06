// JLAS-19.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-19 - Ordem crescente (tres numeros)                    *");
    printf("\n*************************************************************************\n");

    float a, b, c, tmp;
    printf("\nDigite tres numeros: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a > b) { tmp = a; a = b; b = tmp; }
    if (b > c) { tmp = b; b = c; c = tmp; }
    if (a > b) { tmp = a; a = b; b = tmp; }

    printf("\nOrdem crescente: %.2f  %.2f  %.2f\n", a, b, c);

    return 0;
}
