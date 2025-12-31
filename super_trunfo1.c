#include <stdio.h>
#include <string.h>

int main() {
    // ================= CARTA 1 =================
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1, pib1;
    int pontos1;

    float densidade1, pibPerCapita1, superPoder1;

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Codigo (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Nome da cidade: ");
    getchar();  // Para consumir o '\n' deixado pelo scanf
    fgets(cidade1, 50, stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;  // Remover o '\n' no final da string

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area em km2: ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // Cálculos Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;  // PIB convertido para reais
    superPoder1 = populacao1 + area1 + pib1 + pontos1 + pibPerCapita1 + (1 / densidade1); // Cálculo do Super Poder

    // ================= CARTA 2 =================
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2, pib2;
    int pontos2;

    float densidade2, pibPerCapita2, superPoder2;

    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Codigo (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Nome da cidade: ");
    getchar();  // Para consumir o '\n' deixado pelo scanf
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;  // Remover o '\n' no final da string

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area em km2: ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // Cálculos Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;  // PIB convertido para reais
    superPoder2 = populacao2 + area2 + pib2 + pontos2 + pibPerCapita2 + (1 / densidade2); // Cálculo do Super Poder

    // ================= COMPARAÇÃO =================

    printf("\n===== COMPARAÇÃO DOS ATRIBUTOS =====\n");

    // Comparação de População (Carta 1 vence se populacao1 > populacao2)
    printf("População: %d\n", (populacao1 > populacao2));

    // Comparação de Área (Carta 1 vence se area1 > area2)
    printf("Área: %d\n", (area1 > area2));

    // Comparação de PIB (Carta 1 vence se pib1 > pib2)
    printf("PIB: %d\n", (pib1 > pib2));

    // Comparação de Pontos Turísticos (Carta 1 vence se pontos1 > pontos2)
    printf("Pontos Turísticos: %d\n", (pontos1 > pontos2));

    // Comparação de Densidade Populacional (Carta 1 vence se densidade1 < densidade2)
    printf("Densidade Populacional: %d\n", (densidade1 < densidade2));

    // Comparação de PIB per Capita (Carta 1 vence se pibPerCapita1 > pibPerCapita2)
    printf("PIB per Capita: %d\n", (pibPerCapita1 > pibPerCapita2));

    // Comparação de Super Poder (Carta 1 vence se superPoder1 > superPoder2)
    printf("Super Poder: %d\n", (superPoder1 > superPoder2));

    return 0;
}