#include <stdio.h>

int main() {
    unsigned long int Populacao1 = 65000, Populacao2 = 75000;
    int Area1 = 54500, Area2 = 12300;
    float PIB1 = 506694, PIB2 = 768500;
    float Turisticos1 = 120, Turisticos2 = 190;
    float densidade1, densidade2, percapita1, percapita2;
    float inverso_densidade1, inverso_densidade2;
    float superpoder1, superpoder2;

    // Entrada da carta 1
    printf("\nCarta 01\n");
    printf("SUA POPULAÇÃO:\n");
    scanf("%lu", &Populacao1);
    
    printf("SUA ÁREA:\n");
    scanf("%d", &Area1);
    
    printf("VALOR DO PIB:\n");
    scanf("%f", &PIB1);
     
    printf("QUANTOS PONTOS TURÍSTICOS:\n");
    scanf("%f", &Turisticos1);

    // Entrada da carta 2
    printf("\nCarta 02\n");
    printf("SUA POPULAÇÃO:\n");
    scanf("%lu", &Populacao2);

    printf("SUA ÁREA:\n");
    scanf("%d", &Area2);

    printf("VALOR DO PIB:\n");
    scanf("%f", &PIB2);
    
    printf("QUANTOS PONTOS TURÍSTICOS:\n");
    scanf("%f", &Turisticos2);

    // Cálculos
    densidade1 = (float)Populacao1 / Area1;
    densidade2 = (float)Populacao2 / Area2;

    percapita1 = PIB1 / Populacao1;
    percapita2 = PIB2 / Populacao2;

    inverso_densidade1 = 1.0 / densidade1;
    inverso_densidade2 = 1.0 / densidade2;

    superpoder1 = Populacao1 + Area1 + PIB1 + Turisticos1 + percapita1 + inverso_densidade1;
    superpoder2 = Populacao2 + Area2 + PIB2 + Turisticos2 + percapita2 + inverso_densidade2;

    // Saída dos resultados
    printf("\n--- Resultados ---\n");
    printf("Carta 01 - Densidade Populacional: %.2f | PIB per Capita: %.2f | Super Poder: %.2f\n", densidade1, percapita1, superpoder1);
    printf("Carta 02 - Densidade Populacional: %.2f | PIB per Capita: %.2f | Super Poder: %.2f\n\n", densidade2, percapita2, superpoder2);

    // Comparações
    printf("Comparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", Populacao1 > Populacao2 ? 1 : 2, Populacao1 > Populacao2);
    printf("Área: Carta %d venceu (%d)\n", Area1 > Area2 ? 1 : 2, Area1 > Area2);
    printf("PIB: Carta %d venceu (%d)\n", PIB1 > PIB2 ? 1 : 2, PIB1 > PIB2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", Turisticos1 > Turisticos2 ? 1 : 2, Turisticos1 > Turisticos2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densidade1 < densidade2 ? 1 : 2, densidade1 < densidade2); // menor vence
    printf("PIB per Capita: Carta %d venceu (%d)\n", percapita1 > percapita2 ? 1 : 2, percapita1 > percapita2);
    printf("Super Poder: Carta %d venceu (%d)\n", superpoder1 > superpoder2 ? 1 : 2, superpoder1 > superpoder2);

    return 0;
}
