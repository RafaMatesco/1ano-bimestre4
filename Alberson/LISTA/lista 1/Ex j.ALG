Algoritmo "semnome"

Var

procedimento divisivelPorValor(Val:inteiro)
inicio
	se((Val%2=0) e (Val%3=0))entao
		escreval(Val," e divisivel por 2 E 3")
   senao
		escreval("Valor invalido")
   fimse
fimprocedimento

procedimento divisivelPorReferencia(var Val:inteiro)
inicio
	se((Val%2=0) e (Val%3=0))entao
		escreval(Val," e divisivel por 2 E 3")
   senao
		escreval("Valor invalido")
	fimse
fimprocedimento

valor, x:inteiro

Inicio

      escreva("Digite um valor: ")
		leia(valor)
		escreval("")
		divisivelPorValor(valor)
		divisivelPorReferencia(valor)

Fimalgoritmo