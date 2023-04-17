#include <stdio.h>

int main() {
    float valorReal, valorDola;

    printf("Digite o valor em reais a ser convertido: ");
    scanf("%f", &valorReal);

    valorDola = valorReal / 5.3;
    printf("Valor em dolar $%.2f\n", valorDola);
    return 0;
}
