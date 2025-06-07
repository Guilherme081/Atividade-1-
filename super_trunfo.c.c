#include <stdio.h> 
#include <string.h>     

int main(){
    //Declaração das variáveis (as com número 1 serão armazenada para a primeira carta, as com número 2 para a segunda carta)
    char letraEstado1, letraEstado2, codigoCarta1[4], codigoCarta2[4], nomeCidade1[50], nomeCidade2[50];
    float areaKm1, areaKm2, pib1, pib2;
    int populacao1, populacao2, npontostur1, npontostur2;
    
    //Solicitação das informações e armazenagem do conteúdo digitado pelo usuário para a primeira carta
    printf("Insira informações sobre a carta1\n");
    
    printf("Qual a letra do Estado:\n");
    scanf("%c", &letraEstado1);

    printf("Qual o código da carta:\n");
    scanf("%s", &codigoCarta1);

    printf("Qual o nome da cidade:\n");
    scanf(" "); //Evitar que fique junto com o código de baixo e evitar que o fgets pegue o \n
    fgets(nomeCidade1, 50, stdin);

    printf("Qual a população da cidade:\n");
    scanf("%i", &populacao1);

    printf("Qual a área do estado?\n");
    scanf("%f", &areaKm1);

    printf("Qual o PIB:\n");
    scanf("%f", &pib1);

    printf("Qual o número de pontos turísticos:\n");
    scanf("%i", &npontostur1);

    //Solicitação das informações e armazenagem do conteúdo digitado pelo usuário para a segunda carta
    printf("Insira informações sobre a carta 2!\n");

    printf("Qual a letra do estado:\n");
    scanf(" "); 
    scanf("%c", &letraEstado2);

    printf("Qual o código da carta?\n");
    scanf("%s", &codigoCarta2);

    printf("Qual o nome do estado?\n");
    scanf(" "); //Evitar que fique junto com o código de baixo e evitar que o fgets pegue o \n
    fgets(nomeCidade2, 50, stdin);

    printf("Qual a população do estado?\n");
    scanf("%i", &populacao2);

    printf("Qual a área do estado?\n");
    scanf("%f", &areaKm2);

    printf("Qual o PIB do estado?\n");
    scanf("%f", &pib2);

    printf("Qual o número de pontos turísticos do estado?\n");
    scanf("%i", &npontostur2);

    //Saída dos dados fornecidos pelo usuário
    printf("Carta 1:\n");
    printf("Estado: %c\n", letraEstado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %i\n", populacao1);
    printf("Área: %.2f km²\n", areaKm1); //.2f = solicitação para mostrar apenas duas casas decimais
    printf("PIB: %.2f bilhões de reais\n", pib1); // .2f = solicitação para mostrar apenas duas casas decimais
    printf("Número de Pontos Turísticos: %i\n", npontostur1);

    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", letraEstado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s", nomeCidade2);
    printf("População: %i\n", populacao2);
    printf("Área: %.2f km²\n", areaKm2); // .2f = solicitação para mostrar apenas duas casas decimais
    printf("PIB: %.2f bilhões de reais\n", pib2); // .2f = solicitação para mostrar apenas duas casas decimais
    printf("Número de Pontos Turísticos: %i\n", npontostur2);
    
    return 0;
    

}