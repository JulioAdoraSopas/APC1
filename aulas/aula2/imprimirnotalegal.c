#include <stdio.h> 

int main() {

    //nota legal impressão

    printf("...........................\n");
    printf("......NOTA LEGAL......\n");
    printf("...........................\n");
    printf("item.........Qde.........Valor\n");
    printf("%-12s %03i %12.2f\n", "Caneta azul", 2, 2.0, 4.0);
    printf("%-12s %03i %12.2f\n", "Laranja", 1, 4.0, 5.0);
    printf("%-12s %03i %12.2f\n", "Chocolate", 3, 2.0, 4.0);
    printf("                           =        \n");
    printf("Total..................:R$%2.1f\n", 22.0);





    return 0;
}