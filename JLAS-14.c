// JLAS-14.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-14 - Tipo de Triangulo                                 *");
    printf("\n*************************************************************************\n");

    float a, b, c;
    printf("\nDigite os tres lados do triangulo: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == b && b == c)
        printf("\nTriangulo Equilatero\n");
    else if (a == b || b == c || a == c)
        printf("\nTriangulo Isosceles\n");
    else
        printf("\nTriangulo Escaleno\n");

    return 0;
}
