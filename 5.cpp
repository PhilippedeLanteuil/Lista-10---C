#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Aluno{

    char nome[31];
    int matricula, codigo_disciplina;
    float nota1, nota2, media;
};
int main(){

    struct Aluno alunos[10];
    int i;

    for (i = 0; i < 10; i++){
        printf("\n======================================\nALUNO %d\n======================================\n", i+1);

        setbuf(stdin, NULL);

        printf("Insira o nome: ");
        gets(alunos[i].nome);

        printf("Insira o numero da matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Insira o codigo da disciplina: ");
        scanf("%d", &alunos[i].codigo_disciplina);

        printf("Insira a primera nota: ");
        scanf("%f", &alunos[i].nota1);

        printf("Insira a segunda nota: ");
        scanf("%f", &alunos[i].nota2);

        alunos[i].media = (alunos[i].nota1 + (alunos[i].nota2 * 2)) / 3;
    }

    printf("\nRELACAO ALUNO - NOTA: \n");

    for (i = 0; i < 10; i++){
        printf("\nNome: %s | Media: %.1f\n", alunos[i].nome, alunos[i].media);
    }

    return 0;
}


