// JLAS-58.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-58 - Calculadora de 4 operacoes com switch/case        *");
    printf("\n*************************************************************************\n");

    float a, b;
    char op;
    printf("\nDigite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);

    switch (op) {
        case '+': printf("\nResultado: %.2f\n", a + b); break;
        case '-': printf("\nResultado: %.2f\n", a - b); break;
        case '*': printf("\nResultado: %.2f\n", a * b); break;
        case '/':
            if (b != 0) printf("\nResultado: %.2f\n", a / b);
            else printf("\nErro: divisao por zero!\n");
            break;
        default: printf("\nOperacao matematica nao reconhecida.\n");
    }

    return 0;
}
