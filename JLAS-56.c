// JLAS-56.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-56 - O Menu do Fast-Food Digital com switch/case       *");
    printf("\n*************************************************************************\n");

    int combo;
    printf("\n--- CARDAPIO ---\n");
    printf("1 - Combo Hamburguer + Batata + Refri\n");
    printf("2 - Combo Pizza Brotinho + Refri\n");
    printf("3 - Combo Salada + Suco Natural\n");
    printf("4 - Combo Balde de Frango + Molho\n");
    printf("Escolha o combo: ");
    scanf("%d", &combo);

    switch (combo) {
        case 1: printf("\nCombo Hamburguer + Batata + Refri - R$ 30,00\n"); break;
        case 2: printf("\nCombo Pizza Brotinho + Refri - R$ 25,00\n"); break;
        case 3: printf("\nCombo Salada + Suco Natural - R$ 22,00\n"); break;
        case 4: printf("\nCombo Balde de Frango + Molho - R$ 35,00\n"); break;
        default: printf("\nOpcao invalida! Escolha de 1 a 4.\n");
    }

    return 0;
}
