// JLAS-54.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-54 - Validar numero entre 1 e 5 com do...while         *");
    printf("\n*************************************************************************\n");

    int nivel;
    do {
        printf("\nEscolha o nivel de dificuldade (1 a 5): ");
        scanf("%d", &nivel);
        if (nivel < 1 || nivel > 5)
            printf("Nivel invalido! Digite entre 1 e 5.\n");
    } while (nivel < 1 || nivel > 5);

    printf("\nNivel %d selecionado!\n", nivel);

    return 0;
}
