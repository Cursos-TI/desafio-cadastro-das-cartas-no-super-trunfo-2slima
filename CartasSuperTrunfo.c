#include <stdio.h>
#include <string.h>

int main() {
    // === DECLARAÇÃO DAS VARIÁVEIS ===
    
    // Dados das cartas
    char estado1[30], estado2[30];             // Nome dos estados
    char codigo1[10], codigo2[10];             // Código da carta
    char cidade1[30], cidade2[30];             // Nome das cidades

    unsigned long int populacao1, populacao2;  // População das cidades
    float area1, area2;                        // Área dos estados
    float pib1, pib2;                          // PIB total
    int pontosTuristicos1, pontosTuristicos2;  // Número de pontos turísticos

    float densidade1, densidade2;              // Densidade populacional
    float percapita1, percapita2;              // PIB per capita

    // === ENTRADA DOS DADOS ===

    printf("Cadastro da Carta 1:\n");
    printf("Estado: ");
    scanf(" %[^\n]", estado1);
    printf("Código: ");
    scanf(" %[^\n]", codigo1);
    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\nCadastro da Carta 2:\n");
    printf("Estado: ");
    scanf(" %[^\n]", estado2);
    printf("Código: ");
    scanf(" %[^\n]", codigo2);
    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // === CÁLCULOS AUTOMÁTICOS ===

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    percapita1 = pib1 / populacao1;
    percapita2 = pib2 / populacao2;

    // === MENU INTERATIVO COMPARAÇÃO DE DOIS ATRIBUTOS ===

    int opcao1, opcao2;
    float valor1_1, valor2_1, valor1_2, valor2_2;

    printf("\nEscolha o primeiro atributo para comparação:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n6 - PIB per capita\n");
    scanf("%d", &opcao1);

    // Garantir que a segunda escolha seja diferente
    do {
        printf("\nEscolha o segundo atributo para comparação (diferente do primeiro):\n");
        printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n6 - PIB per capita\n");
        scanf("%d", &opcao2);
        if (opcao2 == opcao1) {
            printf("Você já escolheu esse atributo! Escolha outro.\n");
        }
    } while (opcao2 == opcao1);

    // === ATRIBUIR OS VALORES DOS ATRIBUTOS ESCOLHIDOS ===

    // Primeiro atributo
    switch(opcao1) {
        case 1: valor1_1 = populacao1; valor2_1 = populacao2; break;
        case 2: valor1_1 = area1; valor2_1 = area2; break;
        case 3: valor1_1 = pib1; valor2_1 = pib2; break;
        case 4: valor1_1 = pontosTuristicos1; valor2_1 = pontosTuristicos2; break;
        case 5: valor1_1 = densidade1; valor2_1 = densidade2; break;
        case 6: valor1_1 = percapita1; valor2_1 = percapita2; break;
        default: printf("Atributo inválido.\n"); return 1;
    }

    // Segundo atributo
    switch(opcao2) {
        case 1: valor1_2 = populacao1; valor2_2 = populacao2; break;
        case 2: valor1_2 = area1; valor2_2 = area2; break;
        case 3: valor1_2 = pib1; valor2_2 = pib2; break;
        case 4: valor1_2 = pontosTuristicos1; valor2_2 = pontosTuristicos2; break;
        case 5: valor1_2 = densidade1; valor2_2 = densidade2; break;
        case 6: valor1_2 = percapita1; valor2_2 = percapita2; break;
        default: printf("Atributo inválido.\n"); return 1;
    }

    // === LÓGICA DE COMPARAÇÃO E SOMA ===

    // Para densidade: menor é melhor
    float parcial1 = (opcao1 == 5) ? -valor1_1 : valor1_1;
    float parcial2 = (opcao1 == 5) ? -valor2_1 : valor2_1;

    parcial1 += (opcao2 == 5) ? -valor1_2 : valor1_2;
    parcial2 += (opcao2 == 5) ? -valor2_2 : valor2_2;

    // === RESULTADO ===

    printf("\nComparando:\n");
    printf("Carta 1 - %s: %.2f e %.2f\n", cidade1, valor1_1, valor1_2);
    printf("Carta 2 - %s: %.2f e %.2f\n", cidade2, valor2_1, valor2_2);

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", cidade1, parcial1);
    printf("%s: %.2f\n", cidade2, parcial2);

    if (parcial1 > parcial2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (parcial2 > parcial1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;

}