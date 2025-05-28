#include <stdio.h>
#include <string.h>

int main(){

int achou = -1;
int numeros [10];

for(int i=0; i<10; i++) {
    scanf("%d", &numeros[i]);
}

for(int j=0; j<9; j++) { //duvidas aqui eu tenho
  if (numeros [j] == numeros[j]) {
    achou = j;
    printf("O numero foi encontrado na posicao %d\n", j); //erros aqui eu cometi (questão 4-l)

    }
}
    return (0);
}