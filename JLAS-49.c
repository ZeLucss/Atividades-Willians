// JLAS-49.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-49 - Pedir senha ate acertar com do...while            *");
    printf("\n*************************************************************************\n");

    int senha;
    do {
        printf("\nDigite a senha: ");
        scanf("%d", &senha);
        if (senha != 1111)
            printf("Senha incorreta! Tente novamente.\n");
    } while (senha != 1111);

    printf("\nAcesso liberado!\n");

    return 0;
}
