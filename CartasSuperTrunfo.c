#include <stdio.h>

int main() {
    int Populacao1, Populacao2;
    int Area1, Area2;
    float PIB1, PIB2;
    float Turisticos1, Turisticos2;
    float densidade1, densidade2;
    float percapita01, percapita02;
    double superpoder1, superpoder2;

    // CARTA 01
    printf("\nCarta 01\n");
    printf("SUA POPULAÇÃO:\n");
    scanf("%d", &Populacao1);

    printf("SUA ÁREA:\n");
    scanf("%d", &Area1);

    printf("VALOR DO PIB:\n");
    scanf("%f", &PIB1);

    printf("QUANTOS PONTOS TURÍSTICOS:\n");
    scanf("%f", &Turisticos1);

    // CARTA 02
    printf("\nCarta 02\n");
    printf("SUA POPULAÇÃO:\n");
    scanf("%d", &Populacao2);

    printf("SUA ÁREA:\n");
    scanf("%d", &Area2);

    printf("VALOR DO PIB:\n");
    scanf("%f", &PIB2);

    printf("QUANTOS PONTOS TURÍSTICOS:\n");
    scanf("%f", &Turisticos2);

    // CÁLCULO DENSIDADE E PIB PER CAPITA
    printf("\nCarta 01\n");
    densidade1 = (float)Populacao1 / Area1;
    percapita01 = PIB1 / Populacao1;
    printf("DENSIDADE POPULACIONAL: %.2f\n", densidade1);
    printf("PIB PER CAPITA: %.2f\n", percapita01);

    printf("\nCarta 02\n");
    densidade2 = (float)Populacao2 / Area2;
    percapita02 = PIB2 / Populacao2;
    printf("DENSIDADE POPULACIONAL: %.2f\n", densidade2);
    printf("PIB PER CAPITA: %.2f\n", percapita02);

    // SUPER PODER
    superpoder1 = Populacao1 + Area1 + PIB1 + Turisticos1 + percapita01 + (1 / densidade1);
    superpoder2 = Populacao2 + Area2 + PIB2 + Turisticos2 + percapita02 + (1 / densidade2);

    printf("\nSuper Poder\n");
    printf("Carta 01: %.2lf\n", superpoder1);
    printf("Carta 02: %.2lf\n", superpoder2);

    // COMPARAÇÃO DOS ATRIBUTOS
    printf("\nComparação por atributo:\n");
    printf("Ganhador em população: %s\n", (Populacao1 > Populacao2) ? "Carta 01" : "Carta 02");
    printf("Ganhador em área: %s\n", (Area1 > Area2) ? "Carta 01" : "Carta 02");
    printf("Ganhador em PIB: %s\n", (PIB1 > PIB2) ? "Carta 01" : "Carta 02");
    printf("Ganhador em pontos turísticos: %s\n", (Turisticos1 > Turisticos2) ? "Carta 01" : "Carta 02");
    printf("Ganhador no Super Poder: %s\n", (superpoder1 > superpoder2) ? "Carta 01" : "Carta 02");

    return 0;
}