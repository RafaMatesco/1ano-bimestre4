Algoritmo "semnome"

Var

n1, n2, n3, resRef:inteiro

procedimento somaPorValor(x:inteiro; y:inteiro; z:inteiro)
   var
   res:inteiro

   inicio
	res <- (x*x) + (y*y) + (z*z)
	escreval("A soma do quadrado dos numeros digitados é:", res)
fimprocedimento

procedimento somaPorReferencia(x:inteiro; y:inteiro; z:inteiro; var res:inteiro)
   inicio
	res <- (x*x) + (y*y) + (z*z)
fimprocedimento

Inicio
   escreva("Digite o primeiro numero: ")
	leia(n1)
	escreva("Digite o segundo numero: ")
	leia(n2)
	escreva("Digite o terceiro numero: ")
	leia(n3)

	somaPorValor(n1, n2, n3)

	somaPorReferencia(n1, n2, n3, resRef)
	escreval("A soma do quadrado dos numeros digitados é:", resRef)

Fimalgoritmo