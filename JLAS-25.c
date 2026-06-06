// JLAS-25.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-25 - Notas e aprovacao                                 *");
    printf("\n*************************************************************************\n");

    float media;
    printf("\nDigite a media final do aluno: ");
    scanf("%f", &media);

    if (media >= 7.0)
        printf("\nAluno APROVADO!\n");
    else if (media >= 5.0)
        printf("\nAluno em RECUPERACAO.\n");
    else
        printf("\nAluno REPROVADO.\n");

    return 0;
}
