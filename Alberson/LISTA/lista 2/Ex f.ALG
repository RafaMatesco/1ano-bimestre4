 Algoritmo "semnome"

Var

 a, b, c, d : inteiro
 resultado : inteiro

 funcao quadradoabc(x : inteiro ; y : inteiro ; z : inteiro ; v : inteiro) : inteiro
  var
  s: inteiro

  inicio

   v <- x + y + z
   s <- v*v
   retorne s

  fimfuncao

Inicio

   escreval ("digite uma valor")
   leia (a)
   escreval ("digite outro numero")
   leia (b)
   escreval ("digite o ultimo numero")
   leia (c)
   resultado <- quadradoabc(a,b,c,d)
   escreval (" o quadrado da soma dos numeros é igual a ", resultado)

Fimalgoritmo