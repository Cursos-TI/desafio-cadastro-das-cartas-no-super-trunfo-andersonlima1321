#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    //Declarando as variaveis
    int carta1 = 1, carta2 = 2, cartas;
    unsigned int pontuacaoE = 10, pontuacaoV = 50, populacao1 = 12325000, populacao2 = 6748000;
    int numeros1 = 50, numeros2 = 30;
    float area1 = 1521.11, area2 = 1200.25;
    float PIB1 = 699.28, PIB2 = 300.50;
    char estado1 = 'A', estado2  = 'B';
    char codigo1 [3] = "A01", codigo2 [3] = "B02";
    char nome1 [20] = "São Paulo", nome2 [20] = "Rio de Janeiro", usuario1[30], usuario2[30];
    float densidadePopulacional1 = 8102.64, densidadePopulacional2 = 5622.16;
    float PIBperCapita1 =  56736.71, PIBperCapita2 = 44531.71;
    float superPoder1 = 12375904.00, superPoder2 = 6788440.00;
    int numeral, opcao, palpite, soma, pontuacao1 = 0, pontuacao2 = 0;
    int numeroSecreto1, numeroSecreto2;
    int reiniciar = 1;

    //Titulo do jogo

    printf("Jogo Super Trunfo.\n\n");


    //Apresentação do jogo

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);


    

    //grupo de menu do jogo
            switch (opcao)
    {
    case 1:
    printf("Bem vindo ao jogo Super Trunfo:\n\n");

     //estrutura de repetição
    while (reiniciar = 1 )
         {
    
        /* Dialogo com o primeiro jogador */
        printf("Digite o nome do primeiro jogador\n\n");
        scanf("%s",&usuario1);

        //distribuindo as para o primeiro jogador de forma aleatoria
        srand(time(0));
      numeroSecreto1 = rand() % 2 + 1;
      

      if (palpite == numeroSecreto1) {
        printf("A sua carta é %d.\n\n", numeroSecreto1);
      } else {
        printf("A Sua carta é %d.\n\n", numeroSecreto1);
      }   
      //grupo de cartas do primeiro jogador
      switch (numeroSecreto1)
    {
      
    case 1:
    printf("%s você escolheu a carta 1\n", usuario1, carta1);
    printf("carta: 1\n");
    printf("Estado: %c\n", estado1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %u\n", populacao1);
    printf("Área: %.2f em km²\n", area1);
    printf("PIB: %.2F bilhões de reais\n", PIB1);
    printf("Numeros de Pontos Turísticos: %d\n", numeros1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per carpita: %.2f reais\n", PIBperCapita1);
    printf("Super poder: %.2f\n\n", superPoder1);

        break;
        case 2:
        printf("%s você escolheu a carta 2\n", usuario1, carta2);
        printf("carta: 2\n");
        printf("Estado: %c\n", estado2);
        printf("População: %u\n", populacao2);
        printf("Área: %.2f em km²\n", area2);
        printf("PIB: %.2F bilhões de reais\n", PIB2);
        printf("Numeros de Pontos Turísticos: %d\n", numeros2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
        printf("PIB per carpita: %.2f reais\n", PIBperCapita2);
        printf("Super poder: %.2f\n\n", superPoder2);
        printf("Escolha uma Carta:\n");

    
    default:
        break;
    }

    //dialogo com o segundo jogador
    printf("Digite o nome do segundo jogador\n\n");
    scanf("%s",&usuario2);
    
      //distribuindo a carta do segundo jogador de forma aleatorio
      srand(time(0));
      numeroSecreto2 = rand() % 2 + 1;
    

      if (palpite == numeroSecreto2) {
        printf("A sua carta é %d.\n\n", numeroSecreto2);
      } else {
        printf("A sua carta é %d.\n\n", numeroSecreto2);
        
      }

      //grupo de cartas do segundo jogador
      switch (numeroSecreto2)
    {
    case 1:
    printf("%s você escolheu a carta %d\n", usuario2, carta1);
    printf("carta: 1\n");
    printf("Estado: %c\n", estado1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %u\n", populacao1);
    printf("Área: %.2f em km²\n", area1);
    printf("PIB: %.2F bilhões de reais\n", PIB1);
    printf("Numeros de Pontos Turísticos: %d\n", numeros1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per carpita: %.2f reais\n", PIBperCapita1);
    printf("Super poder: %.2f\n\n", superPoder1);

    
        break;
        case 2:
        printf("%s você escolheu a carta %d\n", usuario2, carta2);
        printf("carta: 2\n");
        printf("Estado: %c\n", estado2);
        printf("Nome da Cidade: %s\n", nome2);
        printf("População: %u\n", populacao2);
        printf("Área: %.2f em km²\n", area2);
        printf("PIB: %.2F bilhões de reais\n", PIB2);
        printf("Numeros de Pontos Turísticos: %d\n", numeros2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
        printf("PIB per carpita: %.2f reais\n", PIBperCapita2);
        printf("Super poder: %.2f\n\n", superPoder2);
        printf("Escolha uma Carta:\n");

       
    default:
    break;
    }
   
    //dislogo com od jogadores para escolher o atributos que vão apostar
    printf("Escolhas um dos atibutos?\n1:População.\n2:Números de pontos turístico.\n3:Área por km².\n4:PIB.\n5:Densidade Populacional.\n6:PIB per Capita.\n7:Super Poder\n");
    printf("Escolha um número de 1 a 7\n");
    scanf("%d", &numeral);

    //grupo de atibutos
    switch (numeral){

    //primeiro atributo POPULAÇÃO
        case 1:
    printf("Você escolheu %d população!\n\n", numeral);
    if ( numeroSecreto1 == carta1 && numeroSecreto1 != carta2 && numeroSecreto1 != numeroSecreto2 ) {
        printf("jogador 1 %s venceu com a maior população de %u: %d pontos\n\n",usuario1,populacao1, pontuacaoV);
        (pontuacao1 += pontuacaoV) || (pontuacao1 += pontuacaoE);
        }else if  ( numeroSecreto2 == carta1 && numeroSecreto2 != carta2 && numeroSecreto2 != numeroSecreto1 ){
        printf("jogador 2 %s venceu com a maior população de %u: %d pontos\n\n",usuario2,populacao1,pontuacaoV);
        (pontuacao2 += pontuacaoV) || (pontuacao2 += pontuacaoE);
        }else if (numeroSecreto1 == numeroSecreto2){
        printf("Empataram pois é a mesma carta: %d pontos\n\n", pontuacaoE); 
        (pontuacao1 += pontuacaoE) && (pontuacao2 += pontuacaoE);
    }

        break;
        //segundo atributo NUMERO DE PONTOS TURISTICOS
        case 2:
        printf("Você escolheu %d números de pontos turísticos!\n\n", numeral);
        if ( numeroSecreto1 == carta1 && numeroSecreto1 != carta2 && numeroSecreto1 != numeroSecreto2 ) {
        printf("jogador 1 %s venceu com a maior números de pontos turístico de %d: 5%d pontos\n\n",usuario1,numeros1, pontuacaoV);
        (pontuacao1 += pontuacaoV) || (pontuacao1 += pontuacaoE);
        }else if  ( numeroSecreto2 == carta1 && numeroSecreto2 != carta2 && numeroSecreto2 != numeroSecreto1 ){
        printf("jogador 2 %s venceu com a maior números de pontos turístico de %d: %d pontos\n\n",usuario2,numeros1,pontuacaoV);
        (pontuacao2 += pontuacaoV) || (pontuacao2 += pontuacaoE);
        }else if (numeroSecreto1 == numeroSecreto2){
        printf("Empataram pois é a mesma carta: %d pontos\n\n", pontuacaoE); 
        (pontuacao1 += pontuacaoE) && (pontuacao2 += pontuacaoE);
    }
       
        break;
        //terceiro atributo ÁREA
        case 3:
        printf("Você escolheu %d área total da cidade!\n\n", numeral);
         if ( numeroSecreto1 == carta1 && numeroSecreto1 != carta2 && numeroSecreto1 != numeroSecreto2 ) {
        printf("jogador 1 %s venceu com a maior Área de %2.f: %d pontos\n\n",usuario1, area1, pontuacaoV);
        (pontuacao1 += pontuacaoV) || (pontuacao1 += pontuacaoE);
        }else if  ( numeroSecreto2 == carta1 && numeroSecreto2 != carta2 && numeroSecreto2 != numeroSecreto1 ){
        printf("jogador 2 %s venceu com a maior Área de %2.f: %d pontos\n\n",usuario2, area1,pontuacaoV);
        (pontuacao2 += pontuacaoV) || (pontuacao2 += pontuacaoE);
        }else if (numeroSecreto1 == numeroSecreto2){
        printf("Empataram pois é a mesma carta: %d pontos\n\n", pontuacaoE);
        (pontuacao1 += pontuacaoE) && (pontuacao2 += pontuacaoE); }


        break;
        //quarto atributo PIB
        case 4:
        printf("Você escolheu %d PIB!\n\n", numeral);
         if ( numeroSecreto1 == carta1 && numeroSecreto1 != carta2 && numeroSecreto1 != numeroSecreto2 ) {
        printf("jogador 1 %s venceu com a maior PIB de %2.f: %d pontos\n\n",usuario1, PIB1, pontuacaoV);
        (pontuacao1 += pontuacaoV) || (pontuacao1 += pontuacaoE);
        }else if  ( numeroSecreto2 == carta1 && numeroSecreto2 != carta2 && numeroSecreto2 != numeroSecreto1 ){
        printf("jogador 2 %s venceu com a maior PIB de %2.f: %d pontos\n\n",usuario2, PIB1,pontuacaoV);
        (pontuacao2 += pontuacaoV) || (pontuacao2 += pontuacaoE);
        }else if (numeroSecreto1 == numeroSecreto2){
        printf("Empataram pois é a mesma carta: 1%d pontos\n\n", pontuacaoE);
        (pontuacao1 += pontuacaoE) && (pontuacao2 += pontuacaoE); }


        break;
        //quimto atributo DENSIDADE POPULACIONAL
        case 5:
        printf("Você escolheu %d Densidade Populaciona!\n\n", numeral);
         if ( numeroSecreto1 == carta2 && numeroSecreto1 != carta1 && numeroSecreto1 != numeroSecreto2 ) {
        printf("jogador 1 %s venceu com a menor Densidade Populacional de %2.f: %d pontos\n\n",usuario1, densidadePopulacional1, pontuacaoV);
        (pontuacao1 += pontuacaoV) || (pontuacao1 += pontuacaoE);
        }else if  ( numeroSecreto2 == carta2 && numeroSecreto2 != carta1 && numeroSecreto2 != numeroSecreto1 ){
        printf("jogador 2 %s venceu com a menor Densidade Populacional de %2.f: %d pontos\n\n",usuario2, densidadePopulacional1,pontuacaoV);
        (pontuacao2 += pontuacaoV) || (pontuacao2 += pontuacaoE);
        }else if (numeroSecreto1 == numeroSecreto2){
        printf("Empataram pois é a mesma carta: %d pontos\n\n", pontuacaoE);
        (pontuacao1 += pontuacaoE) && (pontuacao2 += pontuacaoE); }


        break;
        //sexto atributo PIB per CAPITA
        case 6:
        printf("Você escolheu %d PIB per Capita!\n\n", numeral);
         if ( numeroSecreto1 == carta1 && numeroSecreto1 != carta2 && numeroSecreto1 != numeroSecreto2 ) {
        printf("jogador 1 %s venceu com a maior PIB per Capita de %2.f: %d pontos\n\n",usuario1, PIBperCapita1, pontuacaoV);
        (pontuacao1 += pontuacaoV) || (pontuacao1 += pontuacaoE);
        }else if  ( numeroSecreto2 == carta1 && numeroSecreto2 != carta2 && numeroSecreto2 != numeroSecreto1 ){
        printf("jogador 2 %s venceu com a maior PIB per Capita de %2.f: %d pontos\n\n",usuario2, PIBperCapita1,pontuacaoV);
        (pontuacao2 += pontuacaoV) || (pontuacao2 += pontuacaoE);
        }else if (numeroSecreto1 == numeroSecreto2){
        printf("Empataram pois é a mesma carta: %d pontos\n\n", pontuacaoE);
        (pontuacao1 += pontuacaoE) && (pontuacao2 += pontuacaoE);}


        break;
        //setimo atributo super poder
        case 7:
        printf("Você escolheu %d Super Poder!\n\n", numeral);
         if ( numeroSecreto1 == carta1 && numeroSecreto1 != carta2 && numeroSecreto1 != numeroSecreto2 ) {
        printf("jogador 1 %s venceu com a maior Super Poder de %2.f: %d pontos\n\n",usuario1, superPoder1, pontuacaoV);
        (pontuacao1 += pontuacaoV) || (pontuacao1 += pontuacaoE);
        }else if  ( numeroSecreto2 == carta1 && numeroSecreto2 != carta2 && numeroSecreto2 != numeroSecreto1 ){
        printf("jogador 2 %s venceu com a maior Super Poder de %2.f: %d pontos\n\n",usuario2, superPoder1,pontuacaoV);
        (pontuacao2 += pontuacaoV) || (pontuacao2 += pontuacaoE);
        }else if (numeroSecreto1 == numeroSecreto2){
        printf("Empataram pois é a mesma carta: %d pontos\n\n", pontuacaoE);
        (pontuacao1 += pontuacaoE) && (pontuacao2 += pontuacaoE); }
        break;
        
    default:
    printf("Opção invalida!");
        break;
    }

    //apresentação da pontuação dos jogadores
    printf("%s sua pontuação é: %d\n\n",usuario1, pontuacao1);

    printf("%s sua pontuação é: %d\n\n",usuario2, pontuacao2);
    

         //fim do laço de repetição     
         printf("Quer jogar novamente?\nDigite (1/0):\n\n");
         scanf("%d", &reiniciar);
        
        
            printf("Vamos Jogar!\n\n");
            reiniciar++;
            /* code */
         }
    
        break;
        case 2:
        printf("Regras do Jogo:\n");
        printf("O jogo baseia-se na comparação dos valores de sua carta com a dos outros jogadores. Para sua carta vencer, a característica escolhida precisa ter valor maior ou menor (em alguns casos) do que a carta dos seus adversários.");

        break;
        case 3:
        printf("Sair:\n");

    break;
    default:
    printf("Opção invalida:");
        
    }
    
          
         //fim do jogo
        printf("Obrigado por jogar\n\n");
    
        
    return 0;
}