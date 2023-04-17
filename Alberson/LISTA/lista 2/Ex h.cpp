#include <stdio.h>

int main(void) {
    float valorReal, valorDola, cotacao;

    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cotacao);

    printf("Digite o valor em reais a ser convertido: ");
    scanf("%f", &valorReal);

    valorDola = valorReal * cotacao;
    printf("Valor em dolar %f\n", valorDola);
  return 0;
}
 
