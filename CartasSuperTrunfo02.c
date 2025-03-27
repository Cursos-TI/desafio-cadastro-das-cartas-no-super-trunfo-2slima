#include <stdio.h>

int main() {
    int Populacao = 56899;
    int Area = 129876;
    float PIB = 68568;
    float Turisticos = 193;

    //CARTA 02

    printf("DIGITE SUA POPULAÇÃO:\n");
    scanf("%d", &Populacao);
    printf("Sua População é: %d\n", Populacao);

    printf("DIGITE SUA ÁREA:\n");
    scanf("%d", &Area);
    printf("Sua Área é: %d\n", Area);

    printf("DIGITE SEU PIB:\n");
    scanf("%f", &PIB);
    printf("Seu PIB é: %.2f\n", PIB);
    
    printf("DIGITE QUANTOS PONTOS TURÍSTICOS:\n");
    scanf("%f", &Turisticos);
    printf("Os pontos turísticos são: %.2f", Turisticos);

    return 0;

}