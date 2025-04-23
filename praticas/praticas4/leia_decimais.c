#include <stdio.h>

int main() {

float preco = 0;
double fracao = 0;

printf("Digite um preco: ");
scanf("%f", &preco);
printf("Voce digitou: %.2f\n", preco);

printf("Digite uma fracao: ");
scanf("%lf", &fracao);
getchar;
printf("Voce digitou: %f e %2.f\n", preco, fracao);




    return 0;
}