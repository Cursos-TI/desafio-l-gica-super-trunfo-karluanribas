#include <stdio.h>

int main() {
    // ---------------------- CARTA 1 ----------------------
    char estado1[3];
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // ---------------------- CARTA 2 ----------------------
    char estado2[3];
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // ---------------------- ENTRADA DE DADOS ----------------------
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (ex: SP): ");
    scanf("%s", estado1);
    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (ex: RJ): ");
    scanf("%s", estado2);
    printf("Código da carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // ---------------------- CÁLCULOS ----------------------
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    // ---------------------- EXIBIÇÃO DAS CARTAS ----------------------
    printf("\n===== CARTAS CADASTRADAS =====\n");
    printf("\nCarta 1 - %s (%s)\n", cidade1, estado1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.6f\n", pibPerCapita1);

    printf("\nCarta 2 - %s (%s)\n", cidade2, estado2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.6f\n", pibPerCapita2);

    // ---------------------- COMPARAÇÃO ----------------------
    printf("\n===== COMPARAÇÃO =====\n");
    printf("Atributo utilizado: PIB per capita\n\n");

    if (pibPerCapita1 > pibPerCapita2) {
        printf("Carta 1 - %s (%.6f) venceu!\n", cidade1, pibPerCapita1);
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("Carta 2 - %s (%.6f) venceu!\n", cidade2, pibPerCapita2);
    } else {
        printf("Empate! Ambas as cidades possuem o mesmo PIB per capita (%.6f)\n", pibPerCapita1);
    }

    return 0;
}
#include <stdio.h>

// Desafio Super Trunfo - Nível Aventureiro
// Tema: Interatividade no Super Trunfo
// Objetivo: Implementar um menu para escolher o atributo de comparação
//            e determinar o vencedor entre duas cartas.

int main() {
    // ---------------------- CARTA 1 ----------------------
    char estado1[3] = "SP";
    char codigo1[4] = "A01";
    char cidade1[50] = "Sao Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 699.28; // em bilhões
    int pontosTuristicos1 = 20;

    // ---------------------- CARTA 2 ----------------------
    char estado2[3] = "RJ";
    char codigo2[4] = "B02";
    char cidade2[50] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1182.30;
    float pib2 = 364.00; // em bilhões
    int pontosTuristicos2 = 25;

    // ---------------------- CÁLCULOS ----------------------
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    // ---------------------- MENU INTERATIVO ----------------------
    int opcao;

    printf("=== SUPER TRUNFO - COMPARADOR DE CARTAS ===\n\n");
    printf("Cartas disponíveis:\n");
    printf("1 - %s (%s)\n", cidade1, estado1);
    printf("2 - %s (%s)\n", cidade2, estado2);
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("6 - PIB per capita\n");
    printf("\nDigite o número da opção desejada: ");
    scanf("%d", &opcao);

    // ---------------------- COMPARAÇÃO ----------------------
    printf("\n===== RESULTADO DA COMPARAÇÃO =====\n");

    switch (opcao) {
        case 1: // População
            printf("Atributo: População\n");
            printf("%s: %d habitantes\n", cidade1, populacao1);
            printf("%s: %d habitantes\n", cidade2, populacao2);

            if (populacao1 > populacao2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (populacao2 > populacao1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 2: // Área
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);

            if (area1 > area2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (area2 > area1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões\n", cidade1, pib1);
            printf("%s: %.2f bilhões\n", cidade2, pib2);

            if (pib1 > pib2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (pib2 > pib1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 4: // Pontos turísticos
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos\n", cidade1, pontosTuristicos1);
            printf("%s: %d pontos\n", cidade2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 5: // Densidade Demográfica (menor vence)
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", cidade1, densidade1);
            printf("%s: %.2f hab/km²\n", cidade2, densidade2);

            if (densidade1 < densidade2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (densidade2 < densidade1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 6: // PIB per capita
            printf("Atributo: PIB per capita\n");
            printf("%s: %.6f bilhões/habitante\n", cidade1, pibPerCapita1);
            printf("%s: %.6f bilhões/habitante\n", cidade2, pibPerCapita2);

            if (pibPerCapita1 > pibPerCapita2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (pibPerCapita2 > pibPerCapita1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        default:
            printf("Opção inválida! Escolha um número de 1 a 6.\n");
            break;
    }

    printf("\n=== Fim da comparação ===\n");
    return 0;
}
