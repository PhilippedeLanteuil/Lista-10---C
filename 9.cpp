#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Aluno{
    char nome[31];
    int matricula;
    float media_final;
};

int main(){

    struct Aluno alunos[10];
    struct Aluno alunos_aprovados[10];
    struct Aluno alunos_reprovados[10];
    int i, cont_aprovados = 0, cont_reprovados = 0;


    for (i = 0; i < 10; i++){
        printf("\n============================\nALUNO %d\n============================\n", i+1);

        setbuf(stdin, NULL);

        printf("Insira o nome: ");
        gets(alunos[i].nome);

        printf("Insira o numero da matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Insira a media final: ");
        scanf("%f", &alunos[i].media_final);

        if (alunos[i].media_final >= 5){
            alunos_aprovados[cont_aprovados] = alunos[i];
            cont_aprovados++;
        }
        else{
            alunos_reprovados[cont_reprovados] = alunos[i];
            cont_reprovados++;
        }

    }

    printf("\n| Alunos aprovados: |\n");

    if (cont_aprovados == 0){
        printf("Não houve alunos aprovados!\n");
    }
    else{
        for (i = 0; i < cont_aprovados; i++){
            printf("\nALUNO %d\n", i+1);

            printf("Nome: %s.\nNumero de matricula: %d.\nMedia final: %.1f.\n", alunos_aprovados[i].nome, alunos_aprovados[i].matricula, alunos_aprovados[i].media_final);
        }
    }

    printf("\n| Alunos reprovados: |\n");

    if (cont_reprovados == 0){
        printf("Nao houve alunos reprovados!\n");
    }
    else{
        for (i = 0; i < cont_reprovados; i++){
            printf("\nALUNO %d\n", i+1);

            printf("Nome: %s.\nNumero de matricula: %d.\nMedia final: %.1f.\n", alunos_reprovados[i].nome, alunos_reprovados[i].matricula, alunos_reprovados[i].media_final);
        }
    }


    return 0;
}


