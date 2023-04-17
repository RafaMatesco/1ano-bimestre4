#include<stdio.h>
#include<locale.h>

float temp,guar,r;

int tprt (float n){
    float conv;

    conv= (n*9/5)+32;
    return conv;
}

main(){
    setlocale(LC_ALL,"Portuguese");

    printf("Digite uma temperatura em Fahrenheit: ");
    scanf("%f",&temp);

    r=tprt(temp);
    printf("%.1f graus Celsius para Fahrenheit: %.1f\n",temp,r);
}
