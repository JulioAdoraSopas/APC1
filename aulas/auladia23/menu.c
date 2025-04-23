#include <stdio.h>

int main() {


    int opcao = 0;

    printf("MENU PRINCIPAL\n");
    printf("Consultar\n");
    printf("Recarregar saldo\n");
    printf("Ver recados\n");
    printf("Ver ligacoes\n");
    printf("sair\n");

    printf("Escolha opção" );
    scanf("%i", &opcao);

    if (opcao == 1){
        printf("Seu saldo eh de R$ 10.00\n");

   }else if (opcao ==2) {
        printf("digite 1 para R$ 10.00, 2 para R$20.00 ou 5 para R$ 50.00\n");

   }else if (opcao ==3) {

        printf("Voce nao tem recados\n");
    }

    else if (opcao ==4) {

        printf("ultimo numero foi 8888-8888\n");
    }else if (opcao == 5)
        printf("Ate logo\n");
    
    



return 0;
}