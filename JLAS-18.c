// JLAS-18.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-18 - Login simples                                     *");
    printf("\n*************************************************************************\n");

    char usuario[50], senha[50];
    printf("\nUsuario: ");
    scanf("%s", usuario);
    printf("Senha: ");
    scanf("%s", senha);

    if (strcmp(usuario, "aluno") == 0 && strcmp(senha, "1234") == 0)
        printf("\nAcesso permitido! Bem-vindo a biblioteca digital.\n");
    else
        printf("\nAcesso negado! Usuario ou senha incorretos.\n");

    return 0;
}
