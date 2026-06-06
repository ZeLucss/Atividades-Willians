// JLAS-16.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-16 - Multiplo de 3 e/ou 5                              *");
    printf("\n*************************************************************************\n");

    int pedido;
    printf("\nDigite o numero do pedido: ");
    scanf("%d", &pedido);

    if (pedido % 3 == 0 && pedido % 5 == 0)
        printf("\nVoce ganhou refrigerante E sobremesa!\n");
    else if (pedido % 3 == 0)
        printf("\nVoce ganhou um refrigerante!\n");
    else if (pedido % 5 == 0)
        printf("\nVoce ganhou uma sobremesa!\n");
    else
        printf("\nNenhum brinde desta vez.\n");

    return 0;
}
