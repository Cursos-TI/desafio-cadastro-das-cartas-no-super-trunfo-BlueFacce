#include <stdio.h>

int main (){

    //Variáveis para receber os dados
    int populacao1,populacao2,pont1,pont2;
    float area1,area2,pib1,pib2;
    float densidade1, densidade2, pib_per_capita1, pib_per_capita2;

    //Boas vindas ao player
    printf("=============================SUPER TRUNFO============================\n");
    printf("Olá jogador, seja bem vindo ao super trunfo cadastro de cartas\n");
    printf("Preciso que me ajude com o cadastro de duas cartas:\n");

    //Dados da primeira carta
    printf("Cadastro da primeira carta(A01):\n");
    printf("População: \n");
    scanf("%d", &populacao1);
    printf("Area(em km²): \n");
    scanf("%f", &area1);
    printf("PIB(em bilhoes de reais): \n");
    scanf("%f", &pib1);
    printf("Pontos turísticos: \n");
    scanf("%d", &pont1);

    //Cálculo dos novos atributos
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    //Dados da segunda carta
    printf("Cadastro da segunda carta(B02):\n");
    printf("População: \n");
    scanf("%d", &populacao2);
    printf("Area(em km²): \n");
    scanf("%f", &area2);
    printf("PIB(em bilhoes de reais): \n");
    scanf("%f", &pib2);
    printf("Pontos turísticos: \n");
    scanf("%d", &pont2);

    //Cálculo dos novos atributos
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    //Exibição de dados
    printf("Dados da carta (A01): \n");
    printf("População: %d\n", populacao1);
    printf("Area (em km²): %.2f\n", area1);
    printf("PIB (em bilhoes de reais): %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pont1);
    printf("Densidade populacional: %.2f\n habitantes/km²\n", densidade1);
    printf("PIB per capita: %.2f bilhões de reais\n", pib_per_capita1);

    printf("Dados da carta (B02): \n");
    printf("População: %d\n", populacao2);
    printf("Area (em km²): %.2f\n", area2);
    printf("PIB (em bilhoes de reais): %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pont2);
    printf("Densidade populacional: %.2f\n habitantes/km²\n", densidade1);
    printf("PIB per capita: %.2f bilhões de reais\n", pib_per_capita2);
    
    printf("=======Obrigado pela sua ajuda, tenha um ótimo dia jogador ;D=======\n");
    
    return 0;
}