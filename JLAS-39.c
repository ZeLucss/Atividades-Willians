// JLAS-39.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-39 - Verificar se um numero e positivo com while       *");
    printf("\n*************************************************************************\n");

    float num;
    printf("\nDigite um numero positivo: ");
    scanf("%f", &num);

    while (num <= 0) {
        printf("Numero invalido! Digite um numero positivo: ");
        scanf("%f", &num);
    }

    printf("\nNumero aceito: %.2f\n", num);

    return 0;
}
