#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int opcao, numerosecreto, palpite;

int main(){
  
printf("Menu princípal:\n");
printf("1 Inicíar jogo\n");
printf("2 Regras\n");
printf("Escolha uma opção:\n");
scanf("%d", &opcao);

switch (opcao)
{
case 1:
    srand (time(0));
    numerosecreto = rand () % 10;
    printf("Digite um número de 0 a 9:\n");
    scanf("%d", &palpite);
    if (numerosecreto == palpite)
    {
        printf("Você acertou!!\n");
        printf("🎉 Você acertou!! (%d)\n", numerosecreto);
    }else
    {
        printf("Você errou!!\n");
        printf("😢 Você errou! O número secreto era %d.\n", numerosecreto);
    }
    break;
    case 2:
    printf("\n**** REGRAS ****\n");
    printf("1. O jogo escolhe aleatoriamente um número entre 0 e 9.\n");
    printf("2. Você deve tentar adivinhar esse número.\n");
    printf("3. Se acertar, vence! Se errar, o número secreto será revelado.\n");
    break;
default:
    printf("Opção inválida!!\n");
    break;
}

}