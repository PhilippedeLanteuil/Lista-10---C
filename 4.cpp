#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Aluno{
    int matricula_aluno;
    float nota1, nota2, nota3;
    char nome[31];
};

int main(){

    struct Aluno alunos[5];
    int i;
    float maior, media, maior_media, menor_media;
    char maior_nota_primeira[31], nome_maior_media[31], nome_menor_media[31];

    for (i = 0; i < 5; i++){

        printf("\n===============================\nALUNO %d\n===============================\n", i+1);

        setbuf(stdin, NULL);

        printf("Insira o nome: ");
        gets(alunos[i].nome);

        printf("Insira o numero da matricula: ");
        scanf("%d", &alunos[i].matricula_aluno);

        printf("Insira a primeira nota: ");
        scanf("%f", &alunos[i].nota1);

        if (i == 0){
            maior = alunos[i].nota1;
            strcpy(maior_nota_primeira, alunos[i].nome);
        }
        else{
            if (alunos[i].nota1 > maior){
                maior = alunos[i].nota1;
                strcpy(maior_nota_primeira, alunos[i].nome);
            }
        }

        printf("Insira a segunda nota: ");
        scanf("%f", &alunos[i].nota2);

        printf("Insira a terceira nota: ");
        scanf("%f", &alunos[i].nota3);

        media = ((alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3);

        if (i == 0){
            maior_media = media;
            menor_media = media;
            strcpy(nome_maior_media, alunos[i].nome);
            strcpy(nome_menor_media, alunos[i].nome);
        }
        else{
            if (media >  maior_media){
                maior_media = media;
                strcpy(nome_maior_media, alunos[i].nome);
            }
            if (media < menor_media){
                menor_media = media;
                strcpy(nome_menor_media, alunos[i].nome);
            }
        }

        printf("\nMedia do aluno: %.1f\nSituacao: ", media);

        if (media >= 6){
            printf("Aprovado!\n");
        }
        else{
            printf("Reprovado!\n");
        }
    }

    printf("\nRELATORIO: ");

    printf("\nO(a) aluno(a) com maior nota na primeira prova foi o(a) %s com %.1f pontos.", maior_nota_primeira, maior);
    printf("\nO(a) aluno(a) com maior media foi o(a) %s com %.1f pontos.", nome_maior_media, maior_media);
    printf("\nO(a) aluno(a) com menor media foi o(a) %s com %.1f pontos.\n", nome_menor_media, menor_media);

    return 0;
}


