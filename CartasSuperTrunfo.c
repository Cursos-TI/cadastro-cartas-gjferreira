#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
        //Variável codcarta receberá 2 caracteres, mas precisa reservar 3 pq com 2 gerou bug

        //Variáveis da primeira carta:
    int carta1 = 1, populacao1, ptturistico1;
    char estado1, codcarta1[3], cidade1[30];
    float area1f, pib1f;

        //Variáveis da segunda carta:
    int carta2 = 2, populacao2, ptturistico2;
    char estado2, codcarta2[3], cidade2[30];
    float area2f, pib2f;

  // Área para entrada de dados
  
        //Coleta de informações da primeira carta:
    printf("Informe a letra do Estado da primeira carta (entre 'A' e 'H'):\n");
    scanf("%c", &estado1);
    printf("Informe o código da carta (entre 01 e 04):\n");
    scanf("%s", &codcarta1);
    printf("Informe o nome da Cidade da carta:\n");
    scanf("%s", &cidade1);
    printf("Informe o número de habitantes da Cidade:\n");
    scanf("%d", &populacao1);
    printf("Informe a área da Cidade em Quilômetros Quadrados:\n");
    scanf("%f", &area1f);
    printf("Informe o Produto Interno Bruto da Cidade:\n");
    scanf("%f", &pib1f);
    printf("Informe a quantidade de pontos turísticos da Cidade:\n");
    scanf("%d", &ptturistico1);

        //Coleta de informações da segunda carta:
    printf("Informe a letra do Estado da segunda carta (entre 'A' e 'H'):\n");
        //Espaço antes do %c necessário para não gerar bug da linguagem
    scanf(" %c", &estado2);
    printf("Informe o código da carta (entre 01 e 04):\n");
    scanf("%s", &codcarta2);
    printf("Informe o nome da Cidade da carta:\n");
    scanf("%s", &cidade2);
    printf("Informe o número de habitantes da Cidade:\n");
    scanf("%d", &populacao2);
    printf("Informe a área da Cidade em Quilômetros Quadrados:\n");
    scanf("%f", &area2f);
    printf("Informe o Produto Interno Bruto da Cidade:\n");
    scanf("%f", &pib2f);
    printf("Informe a quantidade de pontos turísticos da Cidade:\n");
    scanf("%d", &ptturistico2);
  // Área para exibição dos dados da cidade
  
        //Saída de informações das cartas:
    printf("\nCarta %i:\nEstado: %c\nCódigo: %c%s\nNome da Cidade: %s\nPopulação: %i\nÁrea: %.2f km²\nPIB: %.2f Bilhões de Reais\nNúmero de Pontos Turísticos: %i\n\n", carta1, estado1, estado1, codcarta1, cidade1, populacao1, area1f, pib1f, ptturistico1);
    printf("Carta %i:\nEstado: %c\nCódigo: %c%s\nNome da Cidade: %s\nPopulação: %i\nÁrea: %.2f km²\nPIB: %.2f Bilhões de Reais\nNúmero de Pontos Turísticos: %i\n", carta2, estado2, estado2, codcarta2, cidade2, populacao2, area2f, pib2f, ptturistico2);
  
return 0;
} 
