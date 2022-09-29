#include <stdio.h>
#include <string.h>


struct Pessoa{
    char nome[31], endereco[101];
    int idade;
};

int main(){

    struct Pessoa pessoa;

    printf("Insira o nome: ");
    gets(pessoa.nome);

    while (strlen(pessoa.nome) > 30){
        printf("O numero limite de caracteres foi atingido. Por favor, insira novamente: ");
        gets(pessoa.nome);
    }

    printf("Insira o endereco: ");
    gets(pessoa.endereco);

    while (strlen(pessoa.endereco) > 100){
        printf("O numero limite de caracteres foi atingido. Por favor, insira novamente: ");
        gets(pessoa.endereco);
    }

    printf("Insira a idade: ");
    scanf("%d", &pessoa.idade);

    printf("\nNome: %s\nEndereco: %s\nIdade: %d\n", pessoa.nome, pessoa.endereco, pessoa.idade);

    return 0;
}

