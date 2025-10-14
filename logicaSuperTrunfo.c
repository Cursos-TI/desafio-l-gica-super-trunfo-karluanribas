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