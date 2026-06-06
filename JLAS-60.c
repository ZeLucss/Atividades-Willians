// JLAS-60.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-60 - O Validador de Dias Uteis com switch/case         *");
    printf("\n*************************************************************************\n");

    int dia;
    printf("\nDigite o numero do dia (1=Domingo, 2=Segunda, ..., 7=Sabado): ");
    scanf("%d", &dia);

    switch (dia) {
        case 2:
        case 3:
        case 4:
        case 5:
        case 6: printf("\nDia Util. Acesso liberado para o trabalho.\n"); break;
        case 1:
        case 7: printf("\nFim de Semana. Predio fechado.\n"); break;
        default: printf("\nNumero de dia invalido.\n");
    }

    return 0;
}
