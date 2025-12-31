#include <stdio.h>
#include <string.h>

int main() {
    // ================= CARTA 1 =================
    char estado1[] = "SP";
    char codigo1[] = "A01";
    char cidade1[] = "São Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 500.0; // em bilhões
    int pontos1 = 20;

    float densidade1, pibPerCapita1;

    // Cálculos da Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;  // PIB convertido para reais

    // ================= CARTA 2 =================
    char estado2[] = "RJ";
    char codigo2[] = "B02";
    char cidade2[] = "Rio de Janeiro";
    int populacao2 = 6000000;
    float area2 = 1182.0;
    float pib2 = 200.0; // em bilhões
    int pontos2 = 10;

    float densidade2, pibPerCapita2;

    // Cálculos da Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;  // PIB convertido para reais

    // ================= COMPARAÇÃO =================
    
    // Atributo escolhido para comparação (aqui, escolhemos População)
    // Se quiser comparar outro atributo, altere a linha abaixo
    int atributo_comparacao = 1;  // 1: População, 2: Área, 3: PIB, 4: Densidade Populacional, 5: PIB per Capita

    // Variáveis para armazenar os resultados
    int resultado1 = 0, resultado2 = 0;

    // ================= LÓGICA DE COMPARAÇÃO =================

    switch(atributo_comparacao) {
        case 1: // Comparar População
            printf("Comparação de Cartas (Atributo: População):\n");
            printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
            printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, populacao2);
            if (populacao1 > populacao2) {
                resultado1 = 1;
            } else {
                resultado2 = 1;
            }
            break;

        case 2: // Comparar Área
            printf("Comparação de Cartas (Atributo: Área):\n");
            printf("Carta 1 - %s (%s): %.2f km²\n", cidade1, estado1, area1);
            printf("Carta 2 - %s (%s): %.2f km²\n", cidade2, estado2, area2);
            if (area1 > area2) {
                resultado1 = 1;
            } else {
                resultado2 = 1;
            }
            break;

        case 3: // Comparar PIB
            printf("Comparação de Cartas (Atributo: PIB):\n");
            printf("Carta 1 - %s (%s): %.2f bilhões\n", cidade1, estado1, pib1);
            printf("Carta 2 - %s (%s): %.2f bilhões\n", cidade2, estado2, pib2);
            if (pib1 > pib2) {
                resultado1 = 1;
            } else {
                resultado2 = 1;
            }
            break;

        case 4: // Comparar Densidade Populacional
            printf("Comparação de Cartas (Atributo: Densidade Populacional):\n");
            printf("Carta 1 - %s (%s): %.2f hab/km²\n", cidade1, estado1, densidade1);
            printf("Carta 2 - %s (%s): %.2f hab/km²\n", cidade2, estado2, densidade2);
            if (densidade1 < densidade2) {  // Menor densidade vence
                resultado1 = 1;
            } else {
                resultado2 = 1;
            }
            break;

        case 5: // Comparar PIB per Capita
            printf("Comparação de Cartas (Atributo: PIB per Capita):\n");
            printf("Carta 1 - %s (%s): %.2f reais\n", cidade1, estado1, pibPerCapita1);
            printf("Carta 2 - %s (%s): %.2f reais\n", cidade2, estado2, pibPerCapita2);
            if (pibPerCapita1 > pibPerCapita2) {
                resultado1 = 1;
            } else {
                resultado2 = 1;
            }
            break;

        default:
            printf("Atributo inválido.\n");
            return 0;
    }

    // ================= RESULTADO DA COMPARAÇÃO =================
    if (resultado1 == 1) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    return 0;
}
