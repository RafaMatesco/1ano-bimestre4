#include <stdio.h>

void FahrenheitPorValor(int celsius, int fahrenheit){
	fahrenheit = (((celsius/5)*9)+32);
	printf("%d graus celsius sao %d graus fahrenheit\n", celsius, fahrenheit);
}

void FahrenheintPorReferencia(int celsius, int &fahrenheit){
	fahrenheit = (((celsius/5)*9)+32);
}

int grausCelsius , grausFahrenheit;
main(){

printf("Digit uma temperatura em celsius: ");
scanf("%d", &grausCelsius);

FahrenheitPorValor(grausCelsius , grausFahrenheit);

FahrenheintPorReferencia(grausCelsius , grausFahrenheit);
printf("%d graus celsius sao %d graus fahrenheit\n",grausCelsius , grausFahrenheit);

}
