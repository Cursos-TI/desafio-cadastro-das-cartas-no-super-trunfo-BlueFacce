#include <stdio.h>

int main() {

    // Variáveis para receber os dados
    unsigned long int populacao1, populacao2;
    int pont1, pont2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2, pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;
    int atributo;  // Variável de controle para o switch

    // Boas vindas ao jogador
    printf("=============================SUPER TRUNFO============================\n");
    printf("Olá jogador, seja bem vindo ao super trunfo cadastro de cartas\n");
    printf("Preciso que me ajude com o cadastro de duas cartas:\n");

    // Dados da primeira carta
    printf("Cadastro da primeira carta(A01):\n");
    printf("População: \n");
    scanf("%lu", &populacao1);
    printf("Área (em km²): \n");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): \n");
    scanf("%f", &pib1);
    printf("Pontos turísticos: \n");
    scanf("%d", &pont1);

    // Cálculo dos novos atributos
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    // Dados da segunda carta
    printf("Cadastro da segunda carta(B02):\n");
    printf("População: \n");
    scanf("%lu", &populacao2);
    printf("Área (em km²): \n");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): \n");
    scanf("%f", &pib2);
    printf("Pontos turísticos: \n");
    scanf("%d", &pont2);

    // Cálculo dos novos atributos
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // Exibição de dados
    printf("\nDados da carta (A01): \n");
    printf("População: %lu\n", populacao1);
    printf("Área (em km²): %.2f\n", area1);
    printf("PIB (em bilhões de reais): %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pont1);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade1);
    printf("PIB per capita: %.2f bilhões de reais\n", pib_per_capita1);

    printf("\nDados da carta (B02): \n");
    printf("População: %lu\n", populacao2);
    printf("Área (em km²): %.2f\n", area2);
    printf("PIB (em bilhões de reais): %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pont2);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade2);
    printf("PIB per capita: %.2f bilhões de reais\n", pib_per_capita2);

    // Comparação dos atributos e cálculo do Super Poder
    printf("\n==================== RESULTADOS DA COMPARAÇÃO ====================\n");

    // Comparação de População
    atributo = 1;  // Controla qual atributo estamos comparando
    switch(atributo) {
        case 1:
            if (populacao1 > populacao2) {
                printf("Resultado População: A1 (População) vence!\n");
            } else if (populacao2 > populacao1) {
                printf("Resultado População: B2 (População) vence!\n");
            } else {
                printf("Resultado População: Empate!\n");
            }
            break;
    }

    // Comparação de Área
    atributo = 2;
    switch(atributo) {
        case 2:
            if (area1 > area2) {
                printf("Resultado Área: A1 (Área) vence!\n");
            } else if (area2 > area1) {
                printf("Resultado Área: B2 (Área) vence!\n");
            } else {
                printf("Resultado Área: Empate!\n");
            }
            break;
    }

    // Comparação de PIB
    atributo = 3;
    switch(atributo) {
        case 3:
            if (pib1 > pib2) {
                printf("Resultado PIB: A1 (PIB) vence!\n");
            } else if (pib2 > pib1) {
                printf("Resultado PIB: B2 (PIB) vence!\n");
            } else {
                printf("Resultado PIB: Empate!\n");
            }
            break;
    }

    // Comparação de Pontos turísticos
    atributo = 4;
    switch(atributo) {
        case 4:
            if (pont1 > pont2) {
                printf("Resultado Pontos turísticos: A1 (Pontos turísticos) vence!\n");
            } else if (pont2 > pont1) {
                printf("Resultado Pontos turísticos: B2 (Pontos turísticos) vence!\n");
            } else {
                printf("Resultado Pontos turísticos: Empate!\n");
            }
            break;
    }

    // Comparação de Densidade Populacional (menor vence)
    atributo = 5;
    switch(atributo) {
        case 5:
            if (densidade1 < densidade2) {
                printf("Resultado Densidade populacional: A1 (Densidade populacional) vence!\n");
            } else if (densidade2 < densidade1) {
                printf("Resultado Densidade populacional: B2 (Densidade populacional) vence!\n");
            } else {
                printf("Resultado Densidade populacional: Empate!\n");
            }
            break;
    }

    // Comparação de PIB per capita
    atributo = 6;
    switch(atributo) {
        case 6:
            if (pib_per_capita1 > pib_per_capita2) {
                printf("Resultado PIB per capita: A1 (PIB per capita) vence!\n");
            } else if (pib_per_capita2 > pib_per_capita1) {
                printf("Resultado PIB per capita: B2 (PIB per capita) vence!\n");
            } else {
                printf("Resultado PIB per capita: Empate!\n");
            }
            break;
    }

    // Cálculo do Super Poder (soma dos atributos com inversão da densidade)
    super_poder1 = (populacao1 + area1 + pib1 + pont1 + (1 / densidade1) + pib_per_capita1);
    super_poder2 = (populacao2 + area2 + pib2 + pont2 + (1 / densidade2) + pib_per_capita2);

    printf("\nSuper Poder:\n");
    printf("A1 (Super Poder) = %.2f\n", super_poder1);
    printf("B2 (Super Poder) = %.2f\n", super_poder2);

    if (super_poder1 > super_poder2) {
        printf("Resultado Super Poder: A1 vence no Super Poder!\n");
    } else if (super_poder2 > super_poder1) {
        printf("Resultado Super Poder: B2 vence no Super Poder!\n");
    } else {
        printf("Resultado Super Poder: Empate no Super Poder!\n");
    }

    printf("\n=======Obrigado pela sua ajuda, tenha um ótimo dia jogador ;D=======\n");

    return 0;
}