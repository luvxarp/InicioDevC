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

    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Codigo (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Nome da cidade: ");
    getchar();
    fgets(cidade1, 50, stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area em km2: ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pontos1 + pibPerCapita1 + (1 / densidade1);


    // ================= CARTA 2 =================
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2, pib2;
    int pontos2;

    float densidade2, pibPerCapita2, superPoder2;

    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Codigo (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Nome da cidade: ");
    getchar();
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area em km2: ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontos2 + pibPerCapita2 + (1 / densidade2);


    // =================================================================
    // ESCOLHA DO ATRIBUTO DE COMPARAÇÃO (mude o número para testar)
    //
    // 1 - População
    // 2 - Área
    // 3 - PIB
    // 4 - Densidade populacional (MENOR vence)
    // 5 - PIB per Capita
    // 6 - Pontos turísticos
    // 7 - Super Poder
    // =================================================================

    int atributo = 1;  // <<< altere aqui

    printf("\n===== RESULTADO DA COMPARAÇÃO =====\n");

    // Agora com if/else, sem switch:
    
    if (atributo == 1) { // POPULAÇÃO
        printf("\nComparação por POPULACAO:\n");
        printf("%s: %d habitantes\n", cidade1, populacao1);
        printf("%s: %d habitantes\n", cidade2, populacao2);

        if (populacao1 > populacao2)
            printf("\nVencedora: Carta 1 (%s)\n", cidade1);
        else if (populacao1 < populacao2)
            printf("\nVencedora: Carta 2 (%s)\n", cidade2);
            else 
            printf("\nDEU EMPATE!!!!!\n");
    }

    else if (atributo == 2) { // ÁREA
        printf("\nComparação por AREA:\n");
        printf("%s: %.2f km²\n", cidade1, area1);
        printf("%s: %.2f km²\n", cidade2, area2);

        if (area1 > area2)
            printf("\nVencedora: Carta 1 (%s)\n", cidade1);
        else
            printf("\nVencedora: Carta 2 (%s)\n", cidade2);
    }

    else if (atributo == 3) { // PIB
        printf("\nComparação por PIB:\n");
        printf("%s: %.2f bilhões\n", cidade1, pib1);
        printf("%s: %.2f bilhões\n", cidade2, pib2);

        if (pib1 > pib2)
            printf("\nVencedora: Carta 1 (%s)\n", cidade1);
        else
            printf("\nVencedora: Carta 2 (%s)\n", cidade2);
    }

    else if (atributo == 4) { // Densidade (MENOR vence)
        printf("\nComparação por DENSIDADE POPULACIONAL:\n");
        printf("%s: %.2f hab/km²\n", cidade1, densidade1);
        printf("%s: %.2f hab/km²\n", cidade2, densidade2);

        if (densidade1 < densidade2)
            printf("\nVencedora: Carta 1 (%s)\n", cidade1);
        else
            printf("\nVencedora: Carta 2 (%s)\n", cidade2);
    }

    else if (atributo == 5) { // PIB per capita
        printf("\nComparação por PIB PER CAPITA:\n");
        printf("%s: %.2f R$\n", cidade1, pibPerCapita1);
        printf("%s: %.2f R$\n", cidade2, pibPerCapita2);

        if (pibPerCapita1 > pibPerCapita2)
            printf("\nVencedora: Carta 1 (%s)\n", cidade1);
        else
            printf("\nVencedora: Carta 2 (%s)\n", cidade2);
    }

    else if (atributo == 6) { // Pontos turísticos
        printf("\nComparação por PONTOS TURISTICOS:\n");
        printf("%s: %d pontos\n", cidade1, pontos1);
        printf("%s: %d pontos\n", cidade2, pontos2);

        if (pontos1 > pontos2)
            printf("\nVencedora: Carta 1 (%s)\n", cidade1);
        else
            printf("\nVencedora: Carta 2 (%s)\n", cidade2);
    }

    else if (atributo == 7) { // Super poder
        printf("\nComparação por SUPER PODER:\n");
        printf("%s: %.2f\n", cidade1, superPoder1);
        printf("%s: %.2f\n", cidade2, superPoder2);

        if (superPoder1 > superPoder2)
            printf("\nVencedora: Carta 1 (%s)\n", cidade1);
        else
            printf("\nVencedora: Carta 2 (%s)\n", cidade2);
    }

    else {
        printf("\nAtributo inválido.\n");
    }

    return 0;
}
