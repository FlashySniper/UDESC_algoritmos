Algoritmo "trabalho1"
//Universidade do Estado de Santa Catarina (UDESC)
//Curso: Tecnologia em Análise e Desenvolvimento de Sistemas
//Disciplina: Algoritmos (AGT0001)
//Prof. Rui Jorge Tramontin Jr.
//Aluno: Gabriel Lucas Soares
Var
   dia, ano, mes, semana, ultimosAlgarismosAno : inteiro
   numChaveAno, numChaveMes, seculo, diaDaSemana : inteiro
   somaVariaveis : inteiro
   
Inicio
   escreval("         -----DESCOBRINDO O DIA DA SEMANA-----")
   enquanto (ano < 1800) ou (ano > 2199) faca
      escreva("Digite o ano: ")
      leia(ano)
   fimenquanto
   enquanto (mes < 1) ou (mes > 12) faca
      escreva("Digite o mês: ")
      leia(mes)
   fimenquanto
   enquanto (dia < 1) ou (dia > 31) faca
      escreva("Digite o dia: ")
      leia(dia)
   fimenquanto
   ultimosAlgarismosAno <- ano mod 100 // (1)
   numChaveAno <- ano \ 4   // (2)
   escolha mes  // (3)
   caso 1
      se ((ano mod 4 = 0) e (ano mod 100 <> 0)) ou (ano mod 400 = 0) entao
         numChaveMes <- 0
      senao
         numChaveMes <- 1
      fimse
   caso 2
      se ((ano mod 4 = 0) e (ano mod 100 <> 0)) ou (ano mod 400 = 0) entao
         numChaveMes <- 3
      senao
         numChaveMes <- 4
      fimse
   caso 3
      numChaveMes <- 4
   caso 4
      numChaveMes <- 0
   caso 5
      numChaveMes <- 2
   caso 6
      numChaveMes <- 5
   caso 7
      numChaveMes <- 0
   caso 8
      numChaveMes <- 3
   caso 9
      numChaveMes <- 6
   caso 10
      numChaveMes <- 1
   caso 11
      numChaveMes <- 4
   caso 12
      numChaveMes <- 6
   fimescolha
   se (ano >= 1800) e (ano <= 1899) entao  // (4)
      seculo <- 2
   senao
      se (ano >= 1900) e (ano <= 1999) entao
         seculo <- 0
      senao
         se (ano >= 2000) e (ano <= 2099) entao
            seculo <- 6
         senao
            se (ano >= 2100) e (ano <= 2199) entao
               seculo <- 4
            fimse
         fimse
      fimse
   fimse
   somaVariaveis <- dia + numChaveMes + ultimosAlgarismosAno + numChaveAno + seculo     // (6)
   diaDaSemana <- (somaVariaveis mod 7) //(7)
   escreval
   escolha diaDaSemana
   caso 0
        escreva("Sábado")
   caso 1
        escreva("Domingo")
   caso 2
        escreva("2ª Feira")
   caso 3
        escreva("3ª Feira")
   caso 4
        escreva("4ª Feira")
   caso 5
        escreva("5ª Feira")
   caso 6
        escreva("6ª Feira")
   fimescolha


Fimalgoritmo