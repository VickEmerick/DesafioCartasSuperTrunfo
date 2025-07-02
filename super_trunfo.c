#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis para a Carta 1
    char estado1;
    char codigo1[5];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    // Variáveis para a Carta 2
    char estado2;
    char codigo2[5];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    // --- Entrada de dados da Carta 1 ---
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf("%4s", codigo1);

    getchar();
    printf("Nome da Cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos para Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1e9f) / populacao1;
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1e9f) + pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);

    // --- Entrada de dados da Carta 2 ---
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B02): ");
    scanf("%4s", codigo2);

    getchar();
    printf("Nome da Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos para Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1e9f) / populacao2;
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1e9f) + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    // --- Exibição dos resultados das comparações ---
    printf("\nComparação de Cartas:\n");
    // População
    printf("População: %lu vs %lu — %s venceu\n", 
           populacao1, populacao2,
           populacao1 > populacao2 ? "Carta 1" : "Carta 2");
    // Área
    printf("Área: %.2f vs %.2f — %s venceu\n", 
           area1, area2,
           area1 > area2 ? "Carta 1" : "Carta 2");
    // PIB
    printf("PIB: %.2f vs %.2f bilhões — %s venceu\n", 
           pib1, pib2,
           pib1 > pib2 ? "Carta 1" : "Carta 2");
    // Pontos Turísticos
    printf("Pontos Turísticos: %d vs %d — %s venceu\n", 
           pontosTuristicos1, pontosTuristicos2,
           pontosTuristicos1 > pontosTuristicos2 ? "Carta 1" : "Carta 2");
    // Densidade (menor vence)
    printf("Densidade Populacional: %.2f vs %.2f hab/km² — %s venceu\n", 
           densidade1, densidade2,
           densidade1 < densidade2 ? "Carta 1" : "Carta 2");
    // PIB per Capita
    printf("PIB per Capita: %.2f vs %.2f reais — %s venceu\n", 
           pibPerCapita1, pibPerCapita2,
           pibPerCapita1 > pibPerCapita2 ? "Carta 1" : "Carta 2");
    // Super Poder
    printf("Super Poder: %.2f vs %.2f — %s venceu\n", 
           superPoder1, superPoder2,
           superPoder1 > superPoder2 ? "Carta 1" : "Carta 2");

    return 0;
}
