// JLAS-48.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-48 - Menu com opcao de sair com do...while             *");
    printf("\n*************************************************************************\n");

    int opcao;
    do {
        printf("\n1 - Mensagem\n2 - Sair\nEscolha: ");
        scanf("%d", &opcao);

        if (opcao == 1)
            printf("\nVoce escolheu a mensagem!\n");
    } while (opcao != 2);

    printf("\nSaindo...\n");

    return 0;
}
