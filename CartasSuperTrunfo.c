#include <stdio.h>

int main(){
    //variáveis 
    char estado1[3], estado2[3], codigo1[3], codigo2[3], cidade1[30], cidade2[30];
    int pont1, pont2;
    float area1, area2, pib1, pib2, populacao1, populacao2;
    
    //Introdução do programa

    printf("====Bem vindo ao jogo de cartas Super Trunfo====\n");
    printf("Preciso que me ajude com dados para duas cartas.\n");

    //Entrada de dados da carta1

    printf("Primeira carta:\n");
    printf("Estado (Letra de 'A' a 'H'):\n");
    scanf("%s", estado1);
    printf("Código (Número de 01 a 04):\n");
    scanf("%s", codigo1);
    printf("Cidade:\n");
    scanf("%s", cidade1);
    printf("População:\n");
    scanf("%f", &populacao1);
    printf("Area (Em km²):\n");
    scanf("%f", &area1);
    printf("PIB (Em bilhões de reais):\n");
    scanf("%f", &pib1);
    printf("Pontos turísticos:\n");
    scanf("%d", &pont1);

    //Entrada de dados carta2

    printf("Segunda carta:\n");
    printf("Estado (Letra de 'A' a 'H'):\n");
    scanf("%s", estado2);
    printf("Código (Número de '01' a '04'):\n");
    scanf("%s", codigo2);
    printf("Cidade:\n");
    scanf("%s", cidade2);
    printf("Populãção:\n");
    scanf("%f", &populacao2);
    printf("Area (Em km²):\n");
    scanf("%f", &area2);
    printf("PIB (Em bilhões de reais):\n");
    scanf("%f", &pib2);
    printf("Pontos turísticos:\n");
    scanf("%d", &pont1);

    //Saída de dados das cartas

    printf("===Primeira Carta===\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %.2f\n", populacao1);
    printf("Area (Em km²): %.2f\n", area1);
    printf("PIB (Em bilhões de reais): %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pont1);

    printf("===Segunda carta===\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %.2f\n", populacao2);
    printf("Area (Em km²): %.2f\n", area2);
    printf("PIB (Em bilhões de reais): %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pont2);

    return 0;
}
