// JLAS-24.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-24 - Pode votar?                                       *");
    printf("\n*************************************************************************\n");

    int idade;
    printf("\nDigite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 16)
        printf("\nVoce pode votar!\n");
    else
        printf("\nVoce ainda nao pode votar.\n");

    return 0;
}
