#include <stdio.h>
int main () {

char tecla = 0;
char nome[31];

printf("Digite uma tecla: ");
scanf("%c", &tecla);
printf("Voce digitou: %c\n", tecla);
getchar;

printf("Digite seu nome:  ");
scanf("%[^\n]s", nome);

printf("Voce digitou: %s\n", nome);



    return 0;
}