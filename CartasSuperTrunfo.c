#include <stdio.h>

int main() {

    int carta;
    char codigo[50];
    char estado[50];
    char cidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;

    // ============ CARTA 1 ===========
    printf("Digite o numero da carta: ");
    scanf("%d", &carta);

    printf("Digite o codigo da carta: ");
    scanf(" %s", codigo); 

    printf("Digite o estado: ");
    scanf("%s", estado); 

    printf("Digite a cidade: ");
    scanf("%s", cidade);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao);

    printf("Digite a area: ");
    scanf("%f", &area);

    printf("Digite o pib: ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos_turisticos: ");
    scanf("%d", &pontos_turisticos);

    densidade_populacional = (float)populacao / area;
    pib_per_capita = pib / (float)populacao;
    super_poder = (float)populacao + area + pib + pontos_turisticos + pib_per_capita + (1 / densidade_populacional);

    printf("\n--- Dados da carta cadastrada ---\n\n");

    printf("carta: %d\n", carta);
    printf("codigo: %s\n", codigo);
    printf("estado: %s\n", estado);
    printf("cidade: %s\n", cidade); 
    printf("populacao: %lu\n", populacao); 
    printf("area: %.2f\n", area);
    printf("pib: %.2f\n", pib);
    printf("pontos_turisticos: %d\n", pontos_turisticos);
    printf("densidade_populacional: %.2f hab/km²\n", densidade_populacional);
    printf("pib_per_capita: %.2f reais\n", pib_per_capita);
    printf("super_poder: %.2f\n", super_poder);

    // Armazenar os valores da carta 1 para comparacao
    unsigned long int populacao1 = populacao;
    float area1 = area;
    float pib1 = pib;
    int pontos1 = pontos_turisticos;
    float densidade1 = densidade_populacional;
    float pib_per_capita1 = pib_per_capita;
    float super_poder1 = super_poder;

    printf("\n\n--- Carta 2 ---\n\n");

    printf("Digite o numero da carta: ");
    scanf("%d", &carta);

    printf("Digite o codigo da carta: ");
    scanf(" %s", codigo); 

    printf("Digite o estado: ");
    scanf(" %s", estado); 

    printf("Digite a cidade: ");
    scanf(" %s", cidade);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao);

    printf("Digite a area: ");
    scanf("%f", &area);

    printf("Digite o pib: ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos_turisticos: ");
    scanf("%d", &pontos_turisticos);

    densidade_populacional = (float)populacao / area;
    pib_per_capita = pib / (float)populacao;
    super_poder = (float)populacao + area + pib + pontos_turisticos + pib_per_capita + (1 / densidade_populacional);

    printf("\n--- Dados da carta cadastrada ---\n\n");

    printf("carta: %d\n", carta);
    printf("codigo: %s\n", codigo);
    printf("estado: %s\n", estado);
    printf("cidade: %s\n", cidade); 
    printf("populacao: %lu\n", populacao); 
    printf("area: %.2f\n", area);
    printf("pib: %.2f\n", pib);
    printf("pontos_turisticos: %d\n", pontos_turisticos);
    printf("densidade_populacional: %.2f hab/km²\n", densidade_populacional);
    printf("pib_per_capita: %.2f reais\n", pib_per_capita);
    printf("super_poder: %.2f\n", super_poder);

    // Comparacoes
    printf("\nComparacao de Cartas:\n");
    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao ? 1 : 0);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area ? 1 : 0);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib ? 1 : 0);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontos1 > pontos_turisticos ? 1 : 0);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade_populacional ? 1 : 0);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita1 > pib_per_capita ? 1 : 0);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder ? 1 : 0);

    return 0;