// JLAS-59.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-59 - O Assistente de Direcao com switch/case           *");
    printf("\n*************************************************************************\n");

    char dir;
    printf("\nDigite a direcao (N, S, L, O): ");
    scanf(" %c", &dir);

    switch (dir) {
        case 'N': printf("\nSeguir para o Norte.\n"); break;
        case 'S': printf("\nSeguir para o Sul.\n"); break;
        case 'L': printf("\nVirar a Leste (Direita).\n"); break;
        case 'O': printf("\nVirar a Oeste (Esquerda).\n"); break;
        default:  printf("\nComando invalido! Pare o robo.\n");
    }

    return 0;
}
