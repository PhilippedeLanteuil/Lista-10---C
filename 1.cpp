#include <stdio.h>
#include <string.h>

struct Horario{
    int hora, minutos, segundos;
};

struct Data{
    int dia, mes, ano;
};

struct Compromisso{
    struct Data data;
    struct Horario horario;
    char texto[200];
};

int main(){

    struct Compromisso compromisso;

    compromisso.data.dia = 21;
    compromisso.data.mes = 12;
    compromisso.data.ano = 2022;
    compromisso.horario.hora = 2;
    compromisso.horario.minutos = 25;
    compromisso.horario.segundos = 45;

    strcpy(compromisso.texto, "Uma singela reuniao destinada a comemoracao de mais um ano comendo torta de maca");

    printf("\nHorario: %dh%dm%d\n", compromisso.horario.hora, compromisso.horario.minutos, compromisso.horario.segundos);

    printf("\nData: %d/%d/%d\n", compromisso.data.dia, compromisso.data.mes, compromisso.data.ano);

    printf("\nDescricao: %s\n", compromisso.texto);

    return 0;
}


