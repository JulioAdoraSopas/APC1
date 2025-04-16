#include <stdio.h>

int main() {



    int numero = 0;
    printf: "Entre um numero inteiro: ";
    scanf: "%i", (&numero);

    int e_divisivel_por_2 = numero %2 == 0;

    if (e_divisivel_por_2){

        printf("o numero %i e par\n", numero);


    }

    return 0;
}