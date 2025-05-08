#include <stdio.h>

int main(){

int matematica, portugues, ingles;

printf("Digite sua nota de matemática:\n");
scanf("%d", &matematica);
printf("Digite sua nota de português:\n");
scanf("%d", &portugues);
printf("Digite sua nota de inglês:\n");
scanf("%d", &ingles);

if (matematica >= 8){
  if (portugues >= 9){
    if (ingles >= 7){
        printf("Você atingiu a meta em todas as materias, parabéns!\n");
    }else
    {
        printf("Você não está aprovado pela nota baixa em inglês!\n");
    }
    
    
  }else
  {
    printf("Você não está aprovado pela nota baixa em português!\n");
  }
  
  
}else
{
    printf("Você não está aprovado pela nota baixa em matemática!\n");
}




}