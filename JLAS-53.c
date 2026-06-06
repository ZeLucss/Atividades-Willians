// JLAS-53.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-53 - Confirmar saida com 's' usando do...while         *");
    printf("\n*************************************************************************\n");

    char resp;
    do {
        printf("\n--- MENU ---\n");
        printf("Realizando operacao...\n");
        printf("Deseja sair? (s para sair): ");
        scanf(" %c", &resp);
    } while (resp != 's');

    printf("\nSistema encerrado.\n");

    return 0;
}
