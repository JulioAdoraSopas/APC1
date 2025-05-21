#include <stdio.h>

int main() {

 float total = 0.0;
 float nota_fiscal [5][3];


 for(int i=0; i<5; i++) {
    printf("Valor: ");
    scanf("%f", &total);
    scanf("%f", &nota_fiscal);
    getchar();
 }



    return (0);
}