#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Carro{
    char marca[16];
    float preco;
    int ano;
};


int main(){

    struct Carro carros[5];
    int i, j;
    float preco_filtro;

    for (i = 0; i < 5; i++){

        printf("\n============================\nCARRO %d\n============================\n", i+1);

        setbuf(stdin, NULL);

        printf("Insira a marca do carro: ");
        gets(carros[i].marca);

        printf("Insira o valor: ");
        scanf("%f", &carros[i].preco);

        printf("Insira o ano: ");
        scanf("%d", &carros[i].ano);
    }

    printf("\nInsira um valor para ser feito o filtro de preco (0 para parar): ");
    scanf("%f", &preco_filtro);

    while (preco_filtro != 0){

        printf("\nCarros que valem menos do que R$%.2f:\n", preco_filtro);

        for (i = 0; i < 5; i++){
            if (carros[i].preco < preco_filtro){
                printf("\nMarca: %s\nValor: R$%.2f\nAno: %d\n", carros[i].marca, carros[i].preco, carros[i].ano);
            }
        }

        printf("\nInsira um valor para ser feito o filtro de preco (0 para parar): ");
        scanf("%f", &preco_filtro);
    }

    return 0;
}

