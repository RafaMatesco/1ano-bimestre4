Algoritmo "semnome"

Var

 potencia, base, expoente, x, resultado : inteiro

 funcao resolvepotencia (p :inteiro; b : inteiro; ex : inteiro) : inteiro
 var
 s : inteiro
 inicio
 p <- 1

 para x de 1 ate ex faca

 p <- p * b

 s <- p
 retorne s

 fimpara

 fimfuncao

inicio

escreval ("qual é a base")
leia (base)
escreval ("digite o expoente")
leia (expoente)

resultado <- resolvepotencia(potencia,base,expoente)

escreval ("o resultado é ",resultado)


Fimalgoritmo