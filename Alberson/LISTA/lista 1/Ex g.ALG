Algoritmo "semnome"

Var

procedimento somaPorValor(x:inteiro; y:inteiro; z:inteiro)
   var
   res:inteiro
   
   inicio
	res <- (x + y + z) * (x + y + z)
	escreval("O quadrado da soma dos numeros digitados é:", res)
fimprocedimento

procedimento somaPorReferencia(x:inteiro; y:inteiro; z:inteiro; var res:inteiro)
   inicio
	res <- (x + y + z) * (x + y + z)
fimprocedimento

n1, n2, n3, resRef:inteiro

Inicio

   escreva("Digite o primeiro numero: ")
	leia(n1)
	escreva("Digite o segundo numero: ")
	leia(n2)
	escreva("Digite o terceiro numero: ")
	leia(n3)

	somaPorValor(n1, n2, n3)

	somaPorReferencia(n1, n2, n3, resRef)
	escreval("O quadrado da soma dos numeros digitados é:", resRef)

Fimalgoritmo