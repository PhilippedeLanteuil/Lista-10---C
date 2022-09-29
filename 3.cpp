
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno{
    char nome[31], curso[31];
    int numero_matricula;
};

int main(){

    struct Aluno aluno[5];
    int i;

    for (i = 0; i < 5; i++){

    

        printf("\nALUNO %d\n", i+1);

        printf("Insira o nome: ");
        gets(aluno[i].nome);

        printf("Insira o nome do curso: ");
        gets(aluno[i].curso);

        printf("Insira o numero da matricula: ");
        scanf("%d", &aluno[i].numero_matricula);
    }

    for (i = 0; i < 5; i++){
        printf("===============================================\n");
        printf("\nInformacoes do aluno %d:\n", i+1);

        printf("Nome: %s.\nCurso: %s.\nNumero de matricula: %d.\n", aluno[i].nome, aluno[i].curso, aluno[i].numero_matricula);
    }

    return 0;
}
