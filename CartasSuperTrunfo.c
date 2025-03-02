#include <stdio.h>

int main() {
    // Dados da primeira carta
    char estado1[] = "A", cidade1[] = "São Paulo";
    int pont1 = 50;
    float populacao1 = 12300000, area1 = 1521.11, pib1 = 690.79;
    float densidade1 = populacao1 / area1;

    // Dados da segunda carta
    char estado2[] = "B", cidade2[] = "Rio de Janeiro";
    int pont2 = 100;
    float populacao2 = 6748000, area2 = 1182.3, pib2 = 561.20;
    float densidade2 = populacao2 / area2;

    int opcaoCarta, opcaoAtributo1, opcaoAtributo2;

    // Menu das cartas
    printf("==== Bem-vindo ao jogo Super Trunfo ====\n");
    printf("Escolha a carta que deseja para compararmos:\n");
    printf("1. São Paulo\n");
    printf("2. Rio de Janeiro\n");
    printf("Digite a opção desejada:\n");
    scanf("%d", &opcaoCarta);

    // Verificação de entrada inválida para a carta
    if (opcaoCarta != 1 && opcaoCarta != 2) {
        printf("Opção inválida! O programa será encerrado.\n");
        return 0;  // Encerra o programa se a carta escolhida for inválida
    }

    // Dados da carta escolhida
    char* cidadeEscolhida;
    float populacaoEscolhida, areaEscolhida, pibEscolhido, densidadeEscolhida;
    int pontEscolhido;

    if (opcaoCarta == 1) {
        cidadeEscolhida = cidade1;
        populacaoEscolhida = populacao1;
        areaEscolhida = area1;
        pibEscolhido = pib1;
        densidadeEscolhida = densidade1;
        pontEscolhido = pont1;
    } else {
        cidadeEscolhida = cidade2;
        populacaoEscolhida = populacao2;
        areaEscolhida = area2;
        pibEscolhido = pib2;
        densidadeEscolhida = densidade2;
        pontEscolhido = pont2;
    }

    // Menu para escolher o primeiro atributo
    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    scanf("%d", &opcaoAtributo1);

    // Menu para escolher o segundo atributo
    printf("Escolha o segundo atributo para comparar (não pode ser igual ao primeiro):\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    scanf("%d", &opcaoAtributo2);

    if (opcaoAtributo2 == opcaoAtributo1) {
        printf("Opção inválida! O segundo atributo não pode ser igual ao primeiro.\n");
        return 0;  // Encerra o programa se o usuário escolher o mesmo atributo
    }

    // Variáveis para comparar valores dos atributos
    float valorAtributo1cidade1, valorAtributo1cidade2;
    float valorAtributo2cidade1, valorAtributo2cidade2;

    // Atribuindo valores para atributos escolhidos
    switch (opcaoAtributo1) {
        case 1: valorAtributo1cidade1 = populacao1; valorAtributo1cidade2 = populacao2; break;
        case 2: valorAtributo1cidade1 = area1; valorAtributo1cidade2 = area2; break;
        case 3: valorAtributo1cidade1 = pib1; valorAtributo1cidade2 = pib2; break;
        case 4: valorAtributo1cidade1 = pont1; valorAtributo1cidade2 = pont2; break;
        case 5: valorAtributo1cidade1 = densidade1; valorAtributo1cidade2 = densidade2; break;
        default: break;
    }

    switch (opcaoAtributo2) {
        case 1: valorAtributo2cidade1 = populacao1; valorAtributo2cidade2 = populacao2; break;
        case 2: valorAtributo2cidade1 = area1; valorAtributo2cidade2 = area2; break;
        case 3: valorAtributo2cidade1 = pib1; valorAtributo2cidade2 = pib2; break;
        case 4: valorAtributo2cidade1 = pont1; valorAtributo2cidade2 = pont2; break;
        case 5: valorAtributo2cidade1 = densidade1; valorAtributo2cidade2 = densidade2; break;
        default: break;
    }

    // Comparação dos atributos
    float somacidade1 = valorAtributo1cidade1 + valorAtributo2cidade1;
    float somacidade2 = valorAtributo1cidade2 + valorAtributo2cidade2;

    // Exibição dos resultados
    printf("\nComparação entre %s e %s:\n", cidade1, cidade2);

    printf("Atributo 1: ");
    switch (opcaoAtributo1) {
        case 1: printf("População"); break;
        case 2: printf("Área"); break;
        case 3: printf("PIB"); break;
        case 4: printf("Pontos Turísticos"); break;
        case 5: printf("Densidade Demográfica"); break;
    }
    printf("\n%s: %.2f vs %s: %.2f\n", cidade1, valorAtributo1cidade1, cidade2, valorAtributo1cidade2);

    printf("Atributo 2: ");
    switch (opcaoAtributo2) {
        case 1: printf("População"); break;
        case 2: printf("Área"); break;
        case 3: printf("PIB"); break;
        case 4: printf("Pontos Turísticos"); break;
        case 5: printf("Densidade Demográfica"); break;
    }
    printf("\n%s: %.2f vs %s: %.2f\n", cidade1, valorAtributo2cidade1, cidade2, valorAtributo2cidade2);

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", cidade1, somacidade1);
    printf("%s: %.2f\n", cidade2, somacidade2);

    if (somacidade1 > somacidade2) {
        printf("\n%s venceu a rodada!\n", cidade1);
    } else if (somacidade1 < somacidade2) {
        printf("\n%s venceu a rodada!\n", cidade2);
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}
