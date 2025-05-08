#include <stdio.h>

int main(){

int opcao;

printf("Escolha uma das opções:\n");
printf("1 Notas de português :\n");
printf("2 Notas de matemática:\n");
printf("3 Notas de inglês:\n");
scanf("%d", &opcao);

switch (opcao)
{
case 1:
    printf("Português:\n");
    printf("Primeira unidade => 8.7 (APROVADO)\n");
    printf("Segunda unidade => 9.0 (APROVADO)\n");
    printf("Terceira unidade => 8.6 (APROVADO)\n");
    break;
case 2:
    printf("Matemática:\n");
    printf("Primeira unidade => 7.7 (RECUPERAÇÃO)\n");
    printf("Segunda unidade => 9.0 (APROVADO)\n");
    printf("Terceira unidade => 9.6(APROVADO)\n");
    break;
case 3:
    printf("Inglês:\n");
    printf("Primeira unidade => 8.7 (APROVADO)\n");
    printf("Segunda unidade => 8.0 (APROVADO)\n");
    printf("Terceira unidade => 8.5 (APROVADO)\n");   
    break;
default:
    printf("Opção inválida!\n");
    break;
}


}