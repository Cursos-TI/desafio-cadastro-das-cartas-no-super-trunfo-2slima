#include <stdio.h>

int main(){

int idade;

//Até 12 anos => Criança
//De 12 até 18 => Adolescente
//De 18 até 36 => Adulto 
//De 36 até 55 => Corôa
//De 55 em diante => Idoso

printf("Olá, digite sua idade por favor!\n");
scanf("%d", &idade);

if (idade <= 12)
{
    printf("Você é uma criança!\n ");
}else if (idade >= 13 && idade <=18)
{
    printf("Você é um adolescente!\n ");
}else if (idade >= 19 && idade <= 36)
{
    printf("Você é um adulto!\n");
}else if (idade >= 37 && idade <= 55)
{
    printf("Você é um corôa!\n");
}else
{
    printf("Você é um idoso!\n");
}

printf("Conseguimos identificar sua classe através da sua idade, muito obrigado pelas infomações!\n");

}