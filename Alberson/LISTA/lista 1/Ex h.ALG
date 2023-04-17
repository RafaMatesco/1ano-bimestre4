Algoritmo "semnome"

Var

procedimento FahrenheitPorValor(celsius:real; fahrenheit:real)
   inicio
	fahrenheit <- (((celsius/5)*9)+32)
	escreval(celsius," graus celsius sao",fahrenheit," graus fahrenheit")
fimprocedimento

procedimento FahrenheintPorReferencia(celsius:real; var fahrenheit:real)
   inicio
	fahrenheit <- (((celsius/5)*9)+32)
fimprocedimento

grausCelsius , grausFahrenheit:real

Inicio

escreva("Digite uma temperatura em celsius: ")
leia(grausCelsius)

FahrenheitPorValor(grausCelsius , grausFahrenheit)

FahrenheintPorReferencia(grausCelsius , grausFahrenheit)
escreval(grauscelsius," graus celsius sao",grausfahrenheit," graus fahrenheit")


Fimalgoritmo