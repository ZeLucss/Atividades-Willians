// JLAS-50.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-50 - Numero positivo obrigatorio com do...while        *");
    printf("\n*************************************************************************\n");

    float num;
    do {
        printf("\nDigite um valor positivo para deposito: ");
        scanf("%f", &num);
        if (num <= 0)
            printf("Valor invalido! Digite um numero positivo.\n");
    } while (num <= 0);

    printf("\nDeposito de R$ %.2f realizado com sucesso!\n", num);

    return 0;
}
