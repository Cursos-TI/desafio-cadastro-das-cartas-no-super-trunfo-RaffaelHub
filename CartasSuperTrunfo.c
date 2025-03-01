#include <stdio.h>

// Não usei o fgets, por pedido do professor, já que é para ser uma estrutura simples.
// Grande gama de comentarios, para o melhor entendimento.



int main() {

                     // Declarações de variaveis
    

    
    char estado1, estado2;
    char codigo_carta1[4], codigo_carta2[4], cidade1[30], cidade2[30];
    int populacao1, populacao2, ponto_turistico1, ponto_turistico2;
    float area1, area2, pib1, pib2;

   


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
    scanf("%d", &populacao1); // Armazena os habitantes(população)
    printf("Digite A área da cidade (em quilômetros quadrados): ");
    scanf("%f", &area1); // Armazena a área quadrada da cidade
    printf("Digite o PIB(Produto Interno Bruto) da cidade: ");
    scanf("%f", &pib1); // Armazena o PIB da cidade
    printf("Digite o número de Pontos Turísticos da cidade: ");
    scanf("%d", &ponto_turistico1); // Armazena a quantidade de pontos turisticos
   




        // Informação de uma continuação
   
    printf("-------------------------------------------- \n");
    printf("Ótimo, vamos para a segunda carta, JOGADO!!! \n");
    printf("-------------------------------------------- \n");
    




         // Cadastro da SEGUNDA CARTA
    
    printf("Digite uma letra de 'A' a 'H': ");
    scanf(" %c", &estado2); // Armazena o estado da carta de 'A' a 'H'
    printf("Digite o código da carta (exemplo: A01): ");
    scanf("%s", codigo_carta2); // Armazenar o código da carta
    printf("Digite o nome da cidade (Sem espaços): ");
    scanf("%s", cidade2); // Armazena o nome da cidade(sem espaços)
    printf("Digite a quantidade de habitantes da cidade: ");
    scanf("%d", &populacao2); // Armazena os habitantes(população)
    printf("Digite a área da cidade (em quilômetros quadrados): ");
    scanf("%f", &area2);  // Armazena a área quadrada da cidade
    printf("Digite o PIB(Produto Interno Bruto) da cidade: ");
    scanf("%f", &pib2); // Armazena o PIB da cidade
    printf("Digite o número de pontos turisticos da cidade: ");
    scanf("%d", &ponto_turistico2); // Armazena a quantidade de pontos turisticos
  



        // Visualização das cartas registradas

    printf("-------------------------------------------------\n");
    printf("Agora vamos visualizar as informações das cartas:\n");
    printf("-------------------------------------------------\n");




    // SAIDA DA PRIMERA CARTA, Vamos imprimir os dados que o jogador colocou na carta de número 1

    printf("CARTA 1 \n");
    printf("ESTADO: %c \n", estado1);
    printf("CÓDIGO: %s \n", codigo_carta1);
    printf("CIDADE: %s \n", cidade1);
    printf("POPULAÇÃO: %d \n", populacao1);
    printf("ÁREA (EM KM²): %.2f \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("PONTOS TURISTICOS: %d \n", ponto_turistico1);
    printf("-------------------------------------------------\n");




    // SAIDA DA SEGUNDA CARTA, Agora a segunda carta

    printf("CARTA 2 \n");
    printf("ESTADO: %c \n", estado2);
    printf("CÓDIGO: %s \n", codigo_carta2);
    printf("CIDADE: %s \n", cidade2);
    printf("POPULAÇÃO: %d \n", populacao2);
    printf("ÁREA (EM KM²): %.2f \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("PONTOS TURISTICOS: %d \n", ponto_turistico2);
    printf("-------------------------------------------------\n");



    
    // fim do programa

    // Feito com carinho (:

    return 0;
}
