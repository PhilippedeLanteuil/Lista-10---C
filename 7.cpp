#include <stdio.h>
#include <math.h>

struct NumeroComplexo{
    int parte_real, parte_imaginaria;
};

int main(){

    struct NumeroComplexo numero_c[2];
    char letras[] = {'z', 'w'};
    int i, produto1 = 1, produto2 = 1, modulo;

    for (i = 0; i < 2; i++){

        printf("\nCom relacao ao numero complexo %c:\n", letras[i]);

        printf("\nInsira sua parte real: ");
        scanf("%d", &numero_c[i].parte_real);

        printf("Insira o coeficiente da parte imaginaria: ");
        scanf("%d", &numero_c[i].parte_imaginaria);
    }


    printf("\nNumero complexo Z: %d + %di", numero_c[0].parte_real, numero_c[0].parte_imaginaria);
    printf("\nNumero complexo W: %d + %di\n", numero_c[1].parte_real, numero_c[1].parte_imaginaria);

    printf("\nZ + W: %d + %di", numero_c[0].parte_real + numero_c[1].parte_real, numero_c[0].parte_imaginaria + numero_c[1].parte_imaginaria);
    printf("\nZ - W: %d %di", numero_c[0].parte_real - numero_c[1].parte_real, numero_c[0].parte_imaginaria - numero_c[1].parte_imaginaria);

    produto1 = (numero_c[0].parte_real * numero_c[1].parte_real) + (-1 * (numero_c[0].parte_imaginaria * numero_c[1].parte_imaginaria));
    produto2 = (numero_c[0].parte_real * numero_c[1].parte_imaginaria) + (numero_c[0].parte_imaginaria * numero_c[1].parte_real);

    printf("\nZ * W: %d %di\n", produto1, produto2);

    modulo = (numero_c[0].parte_real * numero_c[0].parte_real) +  (numero_c[0].parte_imaginaria * numero_c[0].parte_imaginaria);

    printf("\nModulo de z: %.2f", sqrt(modulo));

    modulo = (numero_c[1].parte_real * numero_c[1].parte_real) +  (numero_c[1].parte_imaginaria * numero_c[1].parte_imaginaria);

    printf("\nModulo de w: %.2f\n", sqrt(modulo));

    return 0;
}
