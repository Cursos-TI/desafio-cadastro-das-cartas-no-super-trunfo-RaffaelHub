#include <stdio.h>
#include <unistd.h> // para utilizar o sleep(), assim o codigo fica mais charmoso
// Não usei o fgets, por pedido do professor, já que é para ser uma estrutura simples.
// Grande gama de comentarios, para o melhor entendimento.



int main() {

                     // Declarações de variaveis
    

    
    char estado1, estado2;
    char codigo_carta1[4], codigo_carta2[4], cidade1[30], cidade2[30], carta1[10] = "Carta1", carta2[10] = "Carta2";
    int ponto_turistico1, ponto_turistico2, comparacao,opcao,atributo1,atributo1d,atributo2d,atributo2,resultado1,resultado2, resultado_final1, resultado_final2;
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
    sleep(0.5);
    printf("Ótimo, vamos para a segunda carta, JOGADO!!! \n");
    sleep(0.5);
    printf("-------------------------------------------- \n");
    




         // Cadastro da SEGUNDA CARTA
    sleep(0.5);
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


    
    // Calculo da densidade populacional tendo que ser diferente de 0
    if (area1 != 0){
        densidade_populacional1 = populacao1 / area1;
    }
    else{
        densidade_populacional1 = 0;
    }
    if (area2 != 0){
        densidade_populacional2 = populacao2 / area2;
    }
    else{
    densidade_populacional2 = 0;
    }

    // calculo pib per capita
    pib_per_capita1 = pib1 / populacao1;
    pib_per_capita2 = pib2 / populacao2;

  

    // soma de todos atributos mais inverso de densidade
    super_poder1 = (float) populacao1 + area1 + pib1 + ponto_turistico1 + pib_per_capita1 + (1 / densidade_populacional1);
    super_poder2 = (float) populacao2 + area2 + pib2 + ponto_turistico2 + pib_per_capita2 + (1 / densidade_populacional2);

        // Visualização das cartas registradas

    printf("-------------------------------------------------\n");
    sleep(0.5);
    printf("Agora vamos visualizar as informações das cartas:\n");
    sleep(0.5);
    printf("-------------------------------------------------\n");




    // SAIDA DA PRIMERA CARTA, Vamos imprimir os dados que o jogador colocou na carta de número 1
    sleep(0.5);
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


    sleep(0.5);

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
    printf("------------------------------------------------------------------------------------------------------------------\n");
    sleep(0.5);

    printf("Vamos fazer comparação de atributos, para isso, você tem duas opções!\n");

    printf("### MENU ###\n");
    printf("1 - Iniciar - comparação\n");
    printf("2 - Jogabilidade\n");
    printf("3 - Regras\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    printf("-------------------------------------------------\n");

    switch (opcao)
    {
    case 1:
        printf("Recomendo que leia as regras, antes de continuar, você pode acessar no menu anterior\n");
        printf("1 - Comparação de um atributo\n");
        printf("2 - comparação de dois atributos\n");
        printf("Escolha uma opção\n");
        scanf("%d", &opcao);
        printf("-------------------------------------------------\n");

        switch(opcao)
        {
        case 1:
            printf("---Vamos faze a comparação--- \n");
            printf("Digite um dos números que representa um atributo \n");
            printf(" 1 - População | 2 - Área | 3 - PIB | 4 - Pontos turisticos | 5 - Densidade populacional | 6 - PIB per capita \n");
            scanf("%d", &comparacao);
            printf("-------------------------------------------------\n");
        
            // menu interativo usando switch
            switch(comparacao)
            {
                // Comparando os habitantes das cartas >>
            case 1:
                if (populacao1 == populacao2){
                    printf("------------------------------------------------------------\n");
                    printf("Carta 1 - População(%lu) vs Carta 2 - População(%lu) \n", populacao1, populacao2);
                    printf("### EMPATE ### \n");
                    printf("------------------------------------------------------------\n");
                }
                else if(populacao1 > populacao2){
                    printf("------------------------------------------------------------\n");
                    printf("Carta 1 - População(%lu) vs Carta 2 - População(%lu) \n", populacao1, populacao2);
                    printf("### Carta 1 Venceu! ###\n");    
                printf("------------------------------------------------------------\n");
                }
                else{
                    printf("------------------------------------------------------------\n");
                    printf("Carta 1 - População(%lu) vs Carta 2 - População(%lu) \n", populacao1, populacao2);
                    printf("### Carta 2 Venceu! ###\n");
                    printf("------------------------------------------------------------\n");
                    
                }
                break;
                // Comparando a Área das cartas >>
            case 2:
                if (area1 == area2){
                    printf("------------------------------------------------------------\n");
                    printf("Carta 1 - Área(%.2f) vs Carta 2 - Área(%.2f) \n", area1, area2);
                    printf("### EMPATE ###\n");
                    printf("------------------------------------------------------------\n");
                }
                else if (area1 > area2){
                    printf("------------------------------------------------------------\n");
                    printf("Carta 1 - Área(%.2f) vs Carta 2 - Área(%.2f) \n", area1, area2);
                    printf("### Carta 1 Venceu ###\n");
                    printf("------------------------------------------------------------\n");
                }
                else{
                    printf("------------------------------------------------------------\n");
                    printf("Carta 1 - Área(%.2f) vs Carta 2 - Área(%.2f) \n", area1, area2);
                    printf("### Carta 2 Venceu ###\n");
                    printf("------------------------------------------------------------\n");
                }
                break;
                // Comparando o PIB das cartas >>
            case 3:
            
                if (pib1 == pib2){
                    printf("------------------------------------------------------------\n");
                    printf("Carta 1 - PIB(%.2f) vs Carta 2 - PIB(%.2f) \n", pib1, pib2);
                    printf("### EMPATE ###\n");
                    printf("------------------------------------------------------------\n");
                }
                else if (pib1 > pib2){
                    printf("------------------------------------------------------------\n");
                    printf("Carta 1 - PIB(%.2f) vs Carta 2 - PIB(%.2f) \n", pib1, pib2);
                    printf("### Carta 1 Venceu ###\n");
                    printf("------------------------------------------------------------\n");
                }
                else{
                    printf("------------------------------------------------------------\n");
                    printf("Carta 1 - PIB(%.2f) vs Carta 2 - PIB(%.2f) \n", pib1, pib2);
                    printf("### Carta 2 Venceu ###\n");
                    printf("------------------------------------------------------------\n");
                }
                break;
            case 4:
            // Comparando os pontos turisticos das cartas >>
                if (ponto_turistico1 == ponto_turistico2){
                    printf("------------------------------------------------------------\n");
                    printf("Carta 1 - Pontos turisticos(%d) vs Carta 2 - Pontos turisticos(%d) \n", ponto_turistico1, ponto_turistico2);
                    printf("### EMPATE ###\n");
                    printf("------------------------------------------------------------\n");
                }
                else if (ponto_turistico1 > ponto_turistico2){
                    printf("------------------------------------------------------------\n");
                    printf("Carta 1 - Pontos turisticos(%d) vs Carta 2 - Pontos turisticos(%d) \n", ponto_turistico1, ponto_turistico2);
                    printf("### Carta 1 Venceu ###\n");
                    printf("------------------------------------------------------------\n");
                }
                else{
                    printf("------------------------------------------------------------\n");
                    printf("Carta 1 - Pontos turisticos(%d) vs Carta 2 - Pontos turisticos(%d) \n", ponto_turistico1, ponto_turistico2);
                    printf("### Carta 2 Venceu ###\n");
                    printf("------------------------------------------------------------\n");
                }
                break;
            case 5:
            // Comparando a densidade populacional das cartas (O menor valor vence) >>
                if (densidade_populacional1 == densidade_populacional2) {
                    printf("------------------------------------------------------------\n");
                    printf("Carta 1 - Densidade Populacional(%.2f) vs Carta 2 - Densidade Populacional(%.2f) \n", densidade_populacional1, densidade_populacional2);
                    printf("### EMPATE ###\n");
                    printf("------------------------------------------------------------\n");
                }
                else if (densidade_populacional1 > densidade_populacional2){
                    printf("------------------------------------------------------------\n");
                    printf("Carta 1 - Densidade Populacional(%.2f) vs Carta 2 - Densidade Populacional(%.2f) \n", densidade_populacional1, densidade_populacional2);
                    printf("Detalhe: o menor valor ganha!\n");
                    printf("### Carta 2 Venceu ###\n");
                    printf("------------------------------------------------------------\n");
                }
                else{
                    printf("------------------------------------------------------------\n");
                    printf("Carta 1 - PIB(%f) vs Carta 2 - PIB(%f) \n", densidade_populacional1, densidade_populacional2);
                    printf("Detalhe: o menor valor ganha!\n");
                    printf("### Carta 1 Venceu ###\n");
                    printf("------------------------------------------------------------\n");
                }
                
                break;
                // Comparando o PIB per capita das cartas >>
            case 6:
                if (pib_per_capita1 == pib_per_capita2){
                    printf("------------------------------------------------------------\n");
                    printf("Carta 1 - PIB Per capita(%.2f) vs Carta 2 - PIB per capita(%.2f) \n", pib_per_capita1, pib_per_capita2);
                    printf("### EMPATE ###\n");
                    printf("------------------------------------------------------------\n");
                }
                else if (pib_per_capita1 > pib_per_capita2){
                    printf("------------------------------------------------------------\n");
                    printf("Carta 1 - PIB Per capita(%.2f) vs Carta 2 - PIB per capita(%.2f) \n", pib_per_capita1, pib_per_capita2);
                    printf("### Carta 1 Venceu ###\n");
                    printf("------------------------------------------------------------\n");
                }
                else{
                    printf("------------------------------------------------------------\n");
                    printf("Carta 1 - PIB Per capita(%.2f) vs Carta 2 - PIB per capita(%.2f) \n", pib_per_capita1, pib_per_capita2);
                    printf("### Carta 2 Venceu ###\n");
                    printf("------------------------------------------------------------\n");
                }
                break;
            }
    
            break;
        case 2:
        printf("---Vamos faze as comparação--- \n");
        printf("Digite o primeiro atributo\n");
        printf(" 1 - População | 2 - Área | 3 - PIB | 4 - Pontos turisticos | 5 - Densidade populacional | 6 - PIB per capita \n");
        scanf("%d", &atributo1);
        printf("-------------------------------------------------\n");
        
        switch(atributo1)
        {
        case 1:
            resultado1 = populacao1;
            break;
        case 2:
            resultado1 = area1;
            break;
        case 3:
            resultado1 = pib1;
            break;
        case 4:
            resultado1 = ponto_turistico1;
            break;
        case 5:
            atributo1d = densidade_populacional1;
            break;
        case 6:
            resultado1 = pib_per_capita1;
            break;
        }

        printf("Digite o segundo atributo\n");
        printf(" 1 - População | 2 - Área | 3 - PIB | 4 - Pontos turisticos | 5 - Densidade populacional | 6 - PIB per capita \n");
        scanf("%d", &atributo2);
        printf("-------------------------------------------------\n");

        switch(atributo2)
        {
        case 1:
            resultado2 = populacao2;
            break;
        case 2:
            resultado2 = area2;
            break;
        case 3:
            resultado2 = pib2;
            break;
        case 4:
            resultado2 = ponto_turistico2;
            break;
        case 5:
            atributo2d = densidade_populacional2;
            break;
        case 6:
            resultado2 = pib_per_capita2;
            break;

        }


            printf("Ótimo, vamos ver quais atributos ganharam!\n");
            printf("O placar será assim! 1:0 = você venceu, 0:1 = Você perdeu, 1:1 = Empate!\n ");
            printf("-------------------------------------------------\n");

            if ((atributo1 != 5 && atributo2 != 5) && (resultado1 == resultado2)) {
                printf("Empate! (1:1)\n");
                printf("-------------------------------------------------\n");
            }
            else if ((atributo1 != 5 && atributo2 != 5) && (resultado1 != resultado2)) {
                if (resultado1 > resultado2) {
                    printf("Você venceu! (1:0)\n");
                    printf("-------------------------------------------------\n");
                } else {
                    printf("Você perdeu! (0:1)\n");
                    printf("-------------------------------------------------\n");
                }
            } 
            else if (atributo1 == 5 && atributo2 == 5) { // Comparação de Densidade Populacional
                if (atributo1d == atributo2d) {
                    printf("Empate na Densidade Populacional! (1:1)\n");
                    printf("-------------------------------------------------\n");
                } else if (atributo1d < atributo2d) { // Menor valor vence
                    printf("Você venceu! (1:0)\n");
                    printf("-------------------------------------------------\n");
                } else {
                    printf("Você perdeu! (0:1)\n");
                    printf("-------------------------------------------------\n");
                }
            } 
            else if (atributo1 == 5 || atributo2 == 5) { // Caso um atributo seja Densidade Populacional
                if (atributo1 == 5) { // Atributo 1 é Densidade Populacional
                    if (atributo1d < resultado2) { // Menor valor vence
                        printf("Você venceu! (1:0)\n");
                        printf("-------------------------------------------------\n");
                    } else {
                        printf("Você perdeu! (0:1)\n");
                        printf("-------------------------------------------------\n");
                    }
                } else { // Atributo 2 é Densidade Populacional
                    if (resultado1 < atributo2d) { // Menor valor vence
                        printf("Você venceu! (1:0)\n");
                        printf("-------------------------------------------------\n");
                    } else {
                        printf("Você perdeu! (0:1)\n");
                        printf("-------------------------------------------------\n");
                    }
                }
            }
            

            
        
            break;
        default:
            printf("Valor inválido\n");
            break;
        }
        break;


    case 2:
        printf("A jogabilidade é simples! No terminal, o jogo irá solicitar que você insira os dados dos atributos para cada carta. Após inserir os dados, a comparação será realizada entre os atributos escolhidos, e o vencedor será determinado com base nessa comparação.\n");
        printf("-------------------------------------------------\n");
        break;
    case 3:
        printf("Você terá duas opções de comparação para jogar:\n");
        printf("1. **Comparação de um único atributo**: Você escolhe um atributo de uma carta (como População, PIB, etc.) e o mesmo atributo será comparado na outra carta.\n");
        printf("2. **Comparação de dois atributos**: Você escolhe um atributo da primeira carta e um atributo da segunda carta, e então os dois serão comparados entre si.\n");
        printf("\nAgora, vamos entender a regra de como o vencedor é determinado com base nos valores escolhidos para cada atributo:\n");
        printf("Quando você fizer a comparação, os valores dos atributos são tratados como números lógicos: se o valor for maior que zero, ele é considerado 'verdadeiro' (1), e se for zero ou menor, ele é considerado 'falso' (0).\n");
        printf("Aqui estão as regras para determinar quem ganhou, empatou ou perdeu:\n");
        printf("1. **Vitória (Você venceu!)**: Isso acontece quando ambos os atributos comparados têm o mesmo valor, e esse valor é maior que zero.\n");
        printf("2. **Empate**: Se os atributos comparados forem diferentes, o jogo considera empate.\n");
        printf("3. **Derrota (Você perdeu!)**: Se ambos os atributos forem zero, o jogo considera que você perdeu.\n");
        printf("-------------------------------------------------\n");
        break;
    }
    

    
    // fim do programa

    // Feito com carinho (:

    return 0;
    }


