
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Funcionario{

    char nome[31], sexo, data_nascimento[11], cargo[31];
    int idade, cpf, codigo_setor;
    float salario;
};


int main(){

    struct Funcionario f1;

    setbuf(stdin, NULL);

    printf("\nInsira o nome: ");
    gets(f1.nome);

    printf("Insira a idade: ") ;
    scanf("%d", &f1.idade);

    setbuf(stdin, NULL);

    printf("Insira o sexo (F/M): ");
    scanf("%c%*C", &f1.sexo);

    while ((f1.sexo != 'f' && f1.sexo != 'F') && (f1.sexo != 'm' && f1.sexo != 'M')){
        printf("Por favor, insira um sexo valido: ");
        scanf("%c%*C", &f1.sexo);
    }

    printf("Insira o CPF: ");
    scanf("%d", &f1.cpf);

    printf("Insira o codigo do setor onde trabalha (0-99): ");
    scanf("%d", &f1.codigo_setor);

    while (f1.codigo_setor < 0 || f1.codigo_setor > 99){
        printf("Erro! O codigo deve estar entre 0  e 99. Por favor, insira novamente: ");
        scanf("%d", &f1.codigo_setor);
    }

    setbuf(stdin, NULL);

    printf("Insira o cargo que ocupa: ");
    gets(f1.cargo);

    while (strlen(f1.cargo) > 30){
        printf("O limite de caracteres foi atingido! Por favor, insira novamente: ");
        gets(f1.cargo);
    }

    printf("Insira o salario: ");
    scanf("%f", &f1.salario);

    setbuf(stdin, NULL);

    printf("Insira a data de nascimento: ");
    gets(f1.data_nascimento);

    printf("\nNome: %s.\nIdade: %d.\nSexo: %c.\nCPF: %d.\nCodigo do setor: %d.\nCargo: %s.\nSalario: %.2f.\nData de nascimennto: %s.\n", f1.nome, f1.idade, f1.sexo, f1.cpf, f1.codigo_setor, f1.cargo, f1.salario, f1.data_nascimento);

    return 0;

}
