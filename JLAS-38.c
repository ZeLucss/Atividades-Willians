// JLAS-38.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-38 - Senha correta com while                           *");
    printf("\n*************************************************************************\n");

    char senha[50];
    printf("\nDigite a senha: ");
    scanf("%s", senha);

    while (strcmp(senha, "1234") != 0) {
        printf("Senha incorreta! Tente novamente: ");
        scanf("%s", senha);
    }

    printf("\nAcesso liberado!\n");

    return 0;
}
