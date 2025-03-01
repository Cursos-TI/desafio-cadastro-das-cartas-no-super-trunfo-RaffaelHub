#include <stdio.h>

// Não utilizei fgets, por pedido do professor, já que é para ser uma estrutura simples.



int main() {

                     // Declarações de variaveis
    

    
    char estado1, estado2;
    char codigo_carta1[4], codigo_carta2[4], cidade1[10], cidade2[10];
    int populacao1, populacao2, ponto_turistico1, ponto_turistico2;
    float area1, area2, pib1, pib2;

   


                        // Apresentação do jogo
    
    
    printf("---------- BEM VINDO! ---------- \n");
    printf("Esse é o jogo de cartas, trunfo! \n");

 
    
        // Solicitando os dados do cadastro ao usuario, PRIMEIRA CARTA
    
    printf("Digite uma letra de 'A' a 'H': ");
    scanf(" %c", &estado1);
    printf("Digite o codigo da carta, exemplo(A01): ");
    scanf("%s", codigo_carta1); // não usei o &(pointer) nas variaveis que tem array, segunda minhas pesquisas, não precisa.
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);
    printf("Digite a quantidade da população: ");
    scanf("%d", &populacao1);
    printf("Digite A área da cidade (quilômetros quadrados): ");
    scanf("%f", &area1);
    printf("Digite o PIB(Produto Interno Bruto da cidade): ");
    scanf("%f", &pib1);
    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &ponto_turistico1); 
   




        // Informação de uma continuação
   
    printf("-------------------------------------------- \n");
    printf("Ótimo, vamos para a segunda carta, JOGADO!!! \n");
    




         // Cadastro da SEGUNDA CARTA
    
    printf("Digite uma letra de 'A' a 'H': ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta, exemplo(A01): ");
    scanf("%s", codigo_carta2);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Digite a quantidade da população: ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade (quilômetros quadrados): ");
    scanf("%f", &area2);
    printf("Digite o PIB(Produto Interno Bruto da cidade): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &ponto_turistico2);
  



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

    return 0;
}
