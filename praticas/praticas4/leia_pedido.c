#include <stdio.h>

/* REVISAR ISSO EM CASA PARA PROVA. REVISAR TODA A PRATICA 4. */

int main () {

char produto [21];
long int quantidade = 0;
float valor = 0;


printf("seu produto: %c \n", produto);
scanf("%c[^\n]s", produto);
getchar ();


printf("Quantidade: %lld \n", quantidade);
scanf("%lld[^\n]s", quantidade);
getchar ();


printf("Valor:%.2f \n", valor);
scanf("%f[^\n]s", valor);
getchar ();


    return 0;
}