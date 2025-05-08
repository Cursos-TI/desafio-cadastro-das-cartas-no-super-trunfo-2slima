#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int jogador, computador;

int main(){

srand (time(0));

printf("Olá, selecione seu carro abaixo:\n");
printf(" 1 Jetta 2.0\n");
printf(" 2 Golf GTI\n");
printf(" 3 Passat 2.0\n");
scanf("%d", &jogador);

computador = rand() % 3 + 1; 

switch (jogador)
{
case 1:
    printf(" Jogador => Jetta 2.0 \n");
    break;
case 2:
    printf(" Jogador => Golf GTI \n");
    break;
case 3: 
    printf(" Jogador => Passat 2.0 \n");
    break;
default:
    printf(" Opção inválida!\n");
    break;
}

switch (computador)
{
case 1:
    printf(" Computador => Jetta 2.0 \n");
    break;
case 2:
    printf(" Computador => Golf GTI \n");
    break;
case 3: 
    printf(" Computador => Passat 2.0 \n");
    break;
default:
    printf(" Opção inválida!\n");
    break;
}
if (computador == jogador)
{
    printf(" ***O JOGO EMPATOU***\n");
} else if ((jogador == 2) && (computador == 1)||
           (jogador == 3) && (computador == 2)||
           (jogador == 3) && (computador == 1))
{
    printf("**Você Ganhou!!**\n");
}else
{
    printf("**Você perdeu!!**\n");
}

return 0;


}