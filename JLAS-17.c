// JLAS-17.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-17 - O Sensor do Parque Tematico                       *");
    printf("\n*************************************************************************\n");

    float altura;
    printf("\nDigite a altura em centimetros: ");
    scanf("%f", &altura);

    if (altura >= 140)
        printf("\nLUZ VERDE - Acesso liberado!\n");
    else
        printf("\nLUZ VERMELHA - Acesso negado! Altura minima: 140 cm.\n");

    return 0;
}
