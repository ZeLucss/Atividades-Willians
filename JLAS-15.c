// JLAS-15.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n*************************************************************************");
    printf("\n* Aluno: JOSE LUCAS ABREU SANTOS - RA  0021238                         *");
    printf("\n* Programa JLAS-15 - Quantas caixas cabem dentro do caminhao           *");
    printf("\n*************************************************************************\n");

    float alt_cam, larg_cam, comp_cam;
    float alt_cx, larg_cx, comp_cx;

    printf("\n--- Dimensoes do CAMINHAO (em metros) ---\n");
    printf("Altura: ");
    scanf("%f", &alt_cam);
    printf("Largura: ");
    scanf("%f", &larg_cam);
    printf("Comprimento: ");
    scanf("%f", &comp_cam);

    printf("\n--- Dimensoes da CAIXA (em metros) ---\n");
    printf("Altura: ");
    scanf("%f", &alt_cx);
    printf("Largura: ");
    scanf("%f", &larg_cx);
    printf("Comprimento: ");
    scanf("%f", &comp_cx);

    int qtd = (int)(alt_cam / alt_cx) * (int)(larg_cam / larg_cx) * (int)(comp_cam / comp_cx);
    printf("\nCabem %d caixas no caminhao.\n", qtd);

    return 0;
}
