// JLAS-35.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-35 - Numeros de Fibonacci (n termos) com for           *");
    printf("\n*************************************************************************\n");

    int n;
    printf("\nDigite quantos termos de Fibonacci deseja ver: ");
    scanf("%d", &n);

    long long a = 0, b = 1, tmp;
    printf("\nSequencia de Fibonacci:\n");
    for (int i = 0; i < n; i++) {
        printf("%lld\n", a);
        tmp = a + b;
        a = b;
        b = tmp;
    }

    return 0;
}
