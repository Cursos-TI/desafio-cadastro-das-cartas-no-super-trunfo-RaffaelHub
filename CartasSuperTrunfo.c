#include <stdio.h>
#include <unistd.h> // para utilizar o sleep(), assim o codigo fica mais charmoso
// Não usei o fgets, por pedido do professor, já que é para ser uma estrutura simples.
// Grande gama de comentarios, para o melhor entendimento.



int main() {

                     // Declarações de variaveis
    

    
    char estado1, estado2;
    char codigo_carta1[4], codigo_carta2[4], cidade1[30], cidade2[30], carta1[10] = "Carta1", carta2[10] = "Carta2";
    int ponto_turistico1, ponto_turistico2;
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, densidade_populacional1, densidade_populacional2, pib_per_capita1;
    float pib_per_capita2, super_poder1, super_poder2;

   


                        // Apresentação do jogo
    
    
    printf("---------- BEM VINDO! ---------- \n");
    printf("Esse é o jogo de cartas, trunfo! \n");

 
    
        // Solicitando os dados do cadastro ao usuario, PRIMEIRA CARTA
    
    printf("Digite uma letra de 'A' a 'H': ");
    scanf(" %c", &estado1); // Armazena o estado da carta de 'A' a 'H'
    printf("Digite o código da carta (exemplo: A01): ");
    scanf("%s", codigo_carta1); // não usei o &(pointer) nas variaveis que tem array, segunda minhas pesquisas, não precisa.
    printf("Digite o nome da cidade (Sem espaços): ");
    scanf("%s", cidade1); // Armazena o nome da cidade(sem espaços)
    printf("Digite a quantidade de habitantes da cidade: ");
    scanf("%lu", &populacao1); // Armazena os habitantes(população)
    printf("Digite A área da cidade (em quilômetros quadrados): ");
    scanf("%f", &area1); // Armazena a área quadrada da cidade
    printf("Digite o PIB(Produto Interno Bruto) da cidade: ");
    scanf("%f", &pib1); // Armazena o PIB da cidade
    printf("Digite o número de Pontos Turísticos da cidade: ");
    scanf("%d", &ponto_turistico1); // Armazena a quantidade de pontos turisticos
   




        // Informação de uma continuação
   
    printf("-------------------------------------------- \n");
    sleep(1);
    printf("Ótimo, vamos para a segunda carta, JOGADO!!! \n");
    sleep(1);
    printf("-------------------------------------------- \n");
    




         // Cadastro da SEGUNDA CARTA
    sleep(1);
    printf("Digite uma letra de 'A' a 'H': ");
    scanf(" %c", &estado2); // Armazena o estado da carta de 'A' a 'H'
    printf("Digite o código da carta (exemplo: A01): ");
    scanf("%s", codigo_carta2); // Armazenar o código da carta
    printf("Digite o nome da cidade (Sem espaços): ");
    scanf("%s", cidade2); // Armazena o nome da cidade(sem espaços)
    printf("Digite a quantidade de habitantes da cidade: ");
    scanf("%lu", &populacao2); // Armazena os habitantes(população)
    printf("Digite a área da cidade (em quilômetros quadrados): ");
    scanf("%f", &area2);  // Armazena a área quadrada da cidade
    printf("Digite o PIB(Produto Interno Bruto) da cidade: ");
    scanf("%f", &pib2); // Armazena o PIB da cidade
    printf("Digite o número de pontos turisticos da cidade: ");
    scanf("%d", &ponto_turistico2); // Armazena a quantidade de pontos turisticos


    // Calculo da densidade populacional e PIB per capita

    densidade_populacional1 = populacao1 / area1;
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita1 = pib1 / populacao1;
    pib_per_capita2 = pib2 / populacao2;

  

    // soma de todos atributos mais inverso de densidade
    super_poder1 = (float) populacao1 + area1 + pib1 + ponto_turistico1 + pib_per_capita1 + (1 / densidade_populacional1);
    super_poder2 = (float) populacao2 + area2 + pib2 + ponto_turistico2 + pib_per_capita2 + (1 / densidade_populacional2);

        // Visualização das cartas registradas

    printf("-------------------------------------------------\n");
    sleep(1);
    printf("Agora vamos visualizar as informações das cartas:\n");
    sleep(1);
    printf("-------------------------------------------------\n");




    // SAIDA DA PRIMERA CARTA, Vamos imprimir os dados que o jogador colocou na carta de número 1
    sleep(1);
    printf("CARTA 1 \n");
    printf("ESTADO: %c \n", estado1);
    printf("CÓDIGO: %s \n", codigo_carta1);
    printf("CIDADE: %s \n", cidade1);
    printf("POPULAÇÃO: %lu \n", populacao1);
    printf("ÁREA (EM KM²): %.2f \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("PONTOS TURISTICOS: %d \n", ponto_turistico1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade_populacional1);
    printf("PIB per capita: %.2f reais \n", pib_per_capita1);
    
    printf("-------------------------------------------------\n");


    sleep(5);

    // SAIDA DA SEGUNDA CARTA, Agora a segunda carta

    printf("CARTA 2 \n");
    printf("ESTADO: %c \n", estado2);
    printf("CÓDIGO: %s \n", codigo_carta2);
    printf("CIDADE: %s \n", cidade2);
    printf("POPULAÇÃO: %lu \n", populacao2);
    printf("ÁREA (EM KM²): %.2f \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("PONTOS TURISTICOS: %d \n", ponto_turistico2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade_populacional2);
    printf("PIB per capita: %.2f reais \n", pib_per_capita2);
    printf("-------------------------------------------------\n");
    sleep(2);
    // comparação das cartas
    printf("Muito bom, jogador!, vamos analisar as cartas: \n");
    sleep(4);
    printf("População: %s \n", (populacao1 > populacao2) ? "Carta 1 Venceu (1)" : (populacao1 < populacao2) ? "Carta 2 Venceu! (0)" : "Empate");
    sleep(1.7);
    printf("Área: %s \n", (area1 > area2)? "Carta 1 Venceu! (1)" : (area1 < area2)? "Carta 2 Venceu! (0)" : "Empate");
    sleep(1.7);
    printf("PIB: %s  \n", (pib1 > pib2)? "Carta 1 Venceu! (1)" : (pib1 < pib2)? "Carta 2 Venceu! (0)" : "Empate");
    sleep(1.7);
    printf("Pontos turisticos: %s \n", (ponto_turistico1 > ponto_turistico2 )? "Carta 1 venceu! (1)" : (ponto_turistico1 < ponto_turistico2)? "Carta 2 Venceu! (0)" : "Empate");
    sleep(1.7);
    printf("Densidade populacional: %s \n", (densidade_populacional1 > densidade_populacional2)? "Carta 1 Venceu! (1)" : (densidade_populacional2 < densidade_populacional1)? "Carta 2 Venceu! (0)": "Empate" );
    sleep(1.7);
    printf("PIB per capita: %s \n",(pib_per_capita1 > pib_per_capita2)? "Carta 1 Venceu! (1)" : (pib_per_capita1 < pib_per_capita2)? "Carta 2 Venceu! (0)" : "Empate"  );
    sleep(1.7);
    printf("O SUPER_PODER: %s  \n", (super_poder1 > super_poder2)?"Carta 1 Venceu! (1)" : (super_poder1 < super_poder2)? "Carta 2 Venceu (0)" : "Empate" );
    sleep(1);



    
    // fim do programa

    // Feito com carinho (:

    return 0;
}
