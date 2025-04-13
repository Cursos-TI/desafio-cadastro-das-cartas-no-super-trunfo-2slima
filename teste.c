#include <stdio.h>

int main(){


    char Elsever[30] = "Elseve";
    char Pantener[30] = "Pantener";

    unsigned int estoqueElsever = 3500;
    unsigned int estoquePantener = 3800;

    unsigned int estoqueminimoElsever = 1500;
    unsigned int estoqueminimoPantener = 1300;

    float valordoElsever = 17.50;
    float valordoPantener = 23.50;

    double valortotalElsever;
    double valortotalPantener;
    
    int estoque1, estoque2;

    //Exibir as informações dos produtos:
    printf("O %s tem estoque atual de: %u\nsendo estoque minímo de: %u\n com valor de: R$ %.2f\n\n",
          Elsever, estoqueElsever, estoqueminimoElsever, valordoElsever);
    printf("O %s tem estoque atual de: %u\nsendo estoque minímo de: %u\n com valor de: R$ %.2f\n\n",
         Pantener, estoquePantener, estoqueminimoPantener, valordoPantener);
    
    //Comparações do estoque com o estoque minimo:
    estoque1 = estoqueElsever > estoqueminimoElsever;
    estoque2 = estoquePantener > estoqueminimoPantener;
    
    printf("O %s está com estoque acima do mínimo? %d\n", Elsever, estoque1 );
    printf("O %s está com estoque acima do mínimo? %d\n", Pantener, estoque2);

    return 0;


}  