// JLAS-55.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-55 - Ler numeros e mostrar o maior (ate negativo)      *");
    printf("\n*************************************************************************\n");

    float num, maior;
    printf("\nDigite numeros (negativo para encerrar):\n");
    scanf("%f", &num);
    maior = num;

    while (num >= 0) {
        if (num > maior) maior = num;
        scanf("%f", &num);
    }

    printf("\nMaior numero positivo informado: %.2f\n", maior);

    return 0;
}
