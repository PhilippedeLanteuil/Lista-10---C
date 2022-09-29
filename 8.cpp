#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Pessoa{
    char nome[31], endereco[51];
    int telefone;
};

int main(){

    char alfabeto[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    struct Pessoa pessoas[5], aux;
    int i, j, k, indices[5], aux2;

    for (i = 0; i < 5; i++){

        printf("\nPESSOA %d\n", i+1);

        setbuf(stdin, NULL);

        printf("\nInsira o nome: ");
        gets(pessoas[i].nome);

        printf("Insira o endereco: ");
        gets(pessoas[i].endereco);

        printf("Insira o telefone: ");
        scanf("%d", &pessoas[i].telefone);

        for (j = 0; j < 26; j++){
            if (pessoas[i].nome[0] == alfabeto[j]){
                indices[i] = j;
                j = 25;
            }
        }

        if (i > 0){
            for (j = 0; j < i; j++){
                if (indices[j] > indices[i]){
                    aux = pessoas[i];
                    pessoas[i] = pessoas[j];
                    pessoas[j] = aux;
                    aux2 = indices[i];
                    indices[i] = indices[j];
                    indices[j] = aux2;
                }
            }
        }
    }

    printf("\nNomes em ordem alfabetica: \n");


    for (i = 0; i < 5; i++){
        printf("\nNome: %s\nEndereco: %s\nTelefone: %d\n", pessoas[i].nome, pessoas[i].endereco, pessoas[i].telefone);
    }


    return 0;
}
