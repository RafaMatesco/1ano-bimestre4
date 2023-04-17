Algoritmo "semnome"
//RAFAEL GIORDANO MATESCO
//DAVI BARUEL LARA
//1HID
Var

//procedimento para preencher o vetor disciplinas
disciplinas:vetor[1..5] de caractere
procedimento nome_disciplinas()
var
   x: inteiro
inicio
   para x de 1 ate 5 passo 1 faca
			escreva("Disciplina ",x," :")
			leia(disciplinas[x])
   fimpara
fimprocedimento


//procedimento para preencher a matriz medias_bimestrais
medias_bimestrais:vetor[1..4, 1..5] de real
procedimento tabela_medias(pos_col: inteiro)
var
   x, y: inteiro
inicio
      para x de 1 ate 4 passo 1 faca
         repita
				escreval("Materia -",disciplinas[pos_col],"-")
				escreva("digite a nota do bimestre ",x," :")
				leia(medias_bimestrais[x, pos_col])
				se((medias_bimestrais[x, pos_col] <0) ou (medias_bimestrais[x, pos_col] >10))entao
					escreval("Digite uma nota valida, tente novamente")
            fimse
			ate((medias_bimestrais[x, pos_col] >= 0) e (medias_bimestrais[x, pos_col] < 10))
      fimpara

      escreval("")
fimprocedimento


//funcao para preencher o vetor total pontos ano
total_pontos_ano:vetor[1..5] de real
funcao pontos_dis(y:inteiro): real
var
	soma_medias:real
inicio
      soma_medias <- medias_bimestrais[1, y] + medias_bimestrais[2, y] + medias_bimestrais[3, y] + medias_bimestrais[4, y]
      retorne soma_medias
fimfuncao


//procedimento no caso do aluno ter ficado de exame em alguma materia
procedimento exame_final(var total_pontos:real; indice_posicao:inteiro)
var
inicio
      total_pontos <- 10 - (total_pontos / 4)
fimprocedimento


x, y:inteiro
nota_exame:real
i:inteiro
a:inteiro
//------------------------------------------------------------------------------------------------------------

Inicio

//preencher o vetor disciplinas
	escreval("Digite o nome da disciplina e de enter para digitar a proxima")
	nome_disciplinas()


	//preencher a tabebla com as medias de cada materia
	para y de 1 ate 5 passo 1 faca
        limpatela
		  tabela_medias(y)
   fimpara

   limpatela


	//soma o total de pontos em cada materia
	para y de 1 ate 5 passo 1 faca
		total_pontos_ano[y] <- pontos_dis(y)
   fimpara


	//apresentando tabela de medias e somas
	para x de 1 ate 5 passo 1 faca
      escreval("")
      escreva(disciplinas[x]," -> |")
			para y de 1 ate 4 passo 1 faca
			     escreva("| ",medias_bimestrais[y, x]," |")
         fimpara
		escreva("| - ",total_pontos_ano[x])
   fimpara
	escreval("")
   escreval("")
   

	//mostrando se o aluno foi aprovado, retido ou ficou de exame
	escreval("APROVADO em:")
	para x de 1 ate 5 passo 1 faca
		se(total_pontos_ano[x] >= 24)entao
			escreval(disciplinas[x])
			i <- i+1
      fimse
   fimpara
	se(i < 5)entao
		escreval("EXAME FINAL em:")
		para x de 1 ate 5 passo 1 faca
			se((total_pontos_ano[x] >= 15) e (total_pontos_ano[x] < 24))entao
				escreval(disciplinas[x])
				i<- i+1
         fimse
      fimpara
   fimse
	se(i < 5)entao
		escreval("RETIDO em:")
		para x de 1 ate 5 passo 1 faca
			se(total_pontos_ano[x] < 15)entao
				escreval(disciplinas[x])
				i <- i+1
         fimse
      fimpara
   fimse
   escreval("aperte enter para continuar")
   leia(a)
   limpatela


	//resultados exame final
	para x de 1 ate 5 passo 1 faca
		se((total_pontos_ano[x] >= 15) e (total_pontos_ano[x] < 24))entao
			escreva("Digite a nota tirada no exame da disciplina ",disciplinas[x],": ")
			leia(nota_exame)
			exame_final(total_pontos_ano[x], x)
			escreval("Nota que voce teria que tirar: ",total_pontos_ano[x])
			se(nota_exame >= total_pontos_ano[x])entao
            escreval("")
            escreval("RESULTADO APOS EXAME: APROVADO em ",disciplinas[x])
            escreval("")
             escreval("aperte enter para continuar")
             leia(a)
         senao
            escreval("")
				escreval("RESULTADO APOS EXAME: RETIDO em ",disciplinas[x])
				escreval("")
             escreval("aperte enter para continuar")
             leia(a)
         fimse
      fimse
   fimpara

Fimalgoritmo