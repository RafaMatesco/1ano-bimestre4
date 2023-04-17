Algoritmo "semnome"

Var

procedimento conversaoPorValor(dol:real; cot:real)
   var
   re:real
   inicio
	       re <- dol*cot
	       escreval("Voce tem", re, " reais")
   fimprocedimento

procedimento conversaoPorReferencia(dol:real; var re:real; cot:real)
   inicio
	      re <- dol*cot
   fimprocedimento

dolar, heal, cotacao:real

Inicio

   escreva("Digite quantos dolares voce tem: ")
	leia(dolar)

	escreva("Quantos dolares valem 1 real agora? (cotacao) ")
	leia(cotacao)


	conversaoPorValor(dolar, cotacao)

	conversaoPorReferencia(dolar, heal, cotacao)
	escreval("Voce tem", heal, " reais")

Fimalgoritmo