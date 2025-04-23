#include <stdio.h>
#include <locale.h> // Para setlocale
#include <string.h>

int main() {

  // Se o seu sistema não suporta caracteres especiais, pode ser necessário:
  setlocale(LC_ALL, "pt_BR.UTF-8"); // Ou outra localização adequada

/* código windows - livro */

//operadores artimeticos

int numero1 = 0;

int numero2 = 0;

float numero3 = 0;

printf("Digite um inteiro: ");
scanf("%i", &numero1);

printf("Digite o segundo inteiro: ");
scanf("%i", &numero2);

printf("Digite o flutuante: ");
scanf("%f", &numero3);

//soma de variáveis

int soma = numero1 + numero2;

printf("A soma de %i com %i é igual a %i\n", numero1, numero2, soma);

// subtração de variaveis

int subtracao = numero1 - numero2;

printf("A subtracao de %i e %i\n é: %i ", numero1, numero2, subtracao);






    return 0;
}