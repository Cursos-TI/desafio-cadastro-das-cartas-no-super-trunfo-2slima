#include <stdio.h>

int main() {
    int Populacao1 = 65000, Populacao2 = 75000;
    int Area1 = 54500, Area2 = 12300;
    float PIB1 = 506694, PIB2 = 768500;
    float Turisticos1 = 120, Turisticos2 = 190;
    float resultado, resultado2;
    float resultado3, resultado4;
    double superpoder1, superpoder2;

    //CARTA 01
    printf("\nCarta 01\n");
    printf("SUA POPULAÇÃO:\n");
    scanf("%d", &Populacao1);
    
    printf("SUA ÁREA:\n");
    scanf("%d", &Area1);
    
    printf("VALOR DO PIB:\n");
    scanf("%f", &PIB1);
     
    printf("QUANTOS PONTOS TURÍSTICOS:\n");
    scanf("%f", &Turisticos1);

    //Carta02
    
    printf("\nCarta02\n");
    printf("SUA POPULAÇÃO:\n");
    scanf("%d", &Populacao2);

    printf("SUA ÁREA:\n");
    scanf("%d", &Area2);

    printf("VALOR DO PIB:\n");
    scanf("%f", &PIB2);
    
    printf("QUANTOS PONTOS TURÍSTICOS:\n");
    scanf("%f", &Turisticos2);

    //CALCULO:
    
    printf("\nCarta01\n");
    resultado = (float) Populacao1 / Area1;
    printf("DENSIDADE POPULACIONAL: %.2f\n", resultado);
 
    resultado2 = PIB1 / Populacao1;
    printf("PIB PER CAPITA: %.2f\n", resultado2);

    printf("\nCarta02\n");   
    resultado3 = (float) Populacao2 / Area2;
    printf("DENSIDADE POPULACIONAL: %.2f\n", resultado3);

    resultado4 = PIB2 / Populacao2;
    printf("PIB PER CAPITA: %.2f\n", resultado4);

    float densidade1 = 1.19, densidade2 = 7.80;
    float percapita01 = 7.80, percapita02 = 10.25;

    superpoder1 = Populacao1 + Area1 + PIB1 + Turisticos1 + percapita01 + (1 / densidade1);
    superpoder2 = Populacao2 + Area2 + PIB2 + Turisticos2 + percapita02 + (1 / densidade2);

    printf("\n== Super Poder ==\n");
    printf("Carta 01: %.2f\n", superpoder1);
    printf("Carta 02: %.2f\n", superpoder2);


    return 0;
}