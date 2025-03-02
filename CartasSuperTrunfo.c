#include <stdio.h>

int main(){
    //Dados da primeira carta
    char estado1[] = 'A', cidade1[] = 'São Paulo';
    int pont1 = 50;
    float populacao1 = 12300000, area1 = 1521.11, pib1 = 690.79;
    float densidade1 = populacao1 / area1;

    //Dados da segunda carta
    char estado2[] = 'B', cidade2[] = 'Rio de Janeiro';
    int pont2 = 100;
    float populacao2 = 6748000, area2 = 1182.3, pib2 = 561.20;
    float densidade2 = populacao2 / area2;

    int opcaoCarta, opcaoAtributo;

    //Menu das cartas
    printf("==== Bem vindo ao jogo Super Trunfo ====\n");
    printf("Escolha a carta que deseja comparar:\n");
    printf("1.São Paulo\n");
    printf("2.Rio de Janeiro\n");
    printf("Digite a opção desejada:\n");
    scanf("%d", opcaoCarta);

    //Dados da carta escolhida
    char* cidadeEscolhida;
    float populacaoEscolhida,areaEscolhida, pibEscolhido, densidadeEscolhida;
    int pontEscolhido;

    if(opcaoCarta == 1){
        cidadeEscolhida = cidade1;
        populacaoEscolhida = populacao1;
        areaEscolhida = area1;
        pibEscolhido = pib1;
        densidadeEscolhida = densidade1;
        pontEscolhido = pont1;
    } else if (opcaoCarta == 2) {
        cidadeEscolhida = cidade2;
        populacaoEscolhida = populacao2;
        areaEscolhida = area2;
        pibEscolhido = pib2;
        densidadeEscolhida = densidade2;
        pontEscolhido = pont2;
    } else {
        printf("Opção inválida!!");
        return 0;
    } 

    //Menu para escolher atributo
    printf("Escolha o atributo para comparar:\n");
    printf("1.População\n");
    printf("2.Area\n");
    printf("3.PIB\n");
    printf("Pontos Turísticos\n");
    printf("Densidade Demográfica\n");
    scanf("%d", &opcaoAtributo);

    //Comparação dos dados
    switch (opcaoAtributo) {
        case 1: {  // Comparar População
            printf("%s (População: %.2f) vs %s (População: %.2f)\n", cidade1, populacao1, cidade2, populacao2);
            if (populacao1 > populacao2) printf("%s venceu em População!\n", cidade1);
            else if (populacao1 < populacao2) printf("%s venceu em População!\n", cidade2);
            else printf("Empate em População!\n");
            break;
        }
        case 2: {  // Comparar Area
            printf("%s (Área: %.2f) vs %s (Área: %.2f)\n", cidade1, area1, cidade2, area2);
            if (area1 > area2) printf("%s venceu em Área!\n", cidade1);
            else if (area1 < area2) printf("%s venceu em Área!\n", cidade2);
            else printf("Empate em Área!\n");
            break;
        }
        case 3: {  // Comparar PIB
            printf("%s (PIB: %.2f) vs %s (PIB: %.2f)\n", cidade1, pib1, cidade2, pib2);
            if (pib1 > pib2) printf("%s venceu em PIB!\n", cidade1);
            else if (pib1 < pib2) printf("%s venceu em PIB!\n", cidade2);
            else printf("Empate em PIB!\n");
            break;
        }
        case 4: {  // Comparar Pontos Turísticos
            printf("%s (Pontos turísticos: %d) vs %s (Pontos turísticos: %d)\n", cidade1, pont1, cidade2, pont2);
            if (pont1 > pont2) printf("%s venceu em Pontos Turísticos!\n", cidade1);
            else if (pont1 < pont2) printf("%s venceu em Pontos Turísticos!\n", cidade2);
            else printf("Empate em Pontos Turísticos!\n");
            break;
        }
        case 5: {  // Comparar Densidade Demográfica
            printf("%s (Densidade: %.2f) vs %s (Densidade: %.2f)\n", cidade1, densidade1, cidade2, densidade2);
            if (densidade1 < densidade2) printf("%s venceu em Densidade Demográfica!\n", cidade1); // Menor densidade vence
            else if (densidade1 > densidade2) printf("%s venceu em Densidade Demográfica!\n", cidade2); 
            else printf("Empate em Densidade Demográfica!\n");
            break;
        }
        default: {  // Caso a opção do atributo seja inválida
            printf("Opção inválida! Por favor, escolha um número entre 1 e 5.\n");
            break;
        }
    }
    return 0;

}
