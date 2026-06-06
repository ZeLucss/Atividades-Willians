// JLAS-45.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-45 - Menu ate escolher sair com while                  *");
    printf("\n*************************************************************************\n");

    int opcao = 0;
    while (opcao != 3) {
        printf("\n--- MENU ---\n");
        printf("1 - Saldo\n");
        printf("2 - Extrato\n");
        printf("3 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 1) printf("\nSaldo: R$ 1.000,00\n");
        else if (opcao == 2) printf("\nExtrato: sem movimentacoes.\n");
        else if (opcao != 3) printf("\nOpcao invalida!\n");
    }

    printf("\nAte logo!\n");

    return 0;
}
