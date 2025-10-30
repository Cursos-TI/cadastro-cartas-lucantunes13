#include <stdio.h>

   int main() {

       int carta;
       char codigo[50];
       char estado[50];
       char cidade[50];
       int populacao;
       float area;
       float pib;
       int pontos_turisticos;
       float densidade_populacional;
       float pib_per_capita;
      
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
       scanf("%d", &populacao);

       printf("Digite a area: ");
       scanf("%f", &area);

       printf("Digite o pib: ");
       scanf("%f", &pib);

       printf("Digite o numero de pontos_turisticos: ");
       scanf("%d", &pontos_turisticos);

       densidade_populacional = populacao / area;
       pib_per_capita = pib / populacao;

       printf("\n--- Dados da carta cadastrada ---\n\n");
      
       printf("carta: %d\n", carta);
       printf("codigo: %s\n", codigo);
       printf("estado: %s\n", estado);
       printf("cidade: %s\n", cidade); 
       printf("populacao: %d\n", populacao); 
       printf("area: %.2f\n", area);
       printf("pib: %.2f\n", pib);
       printf("pontos_turisticos: %d\n", pontos_turisticos);
       printf("densidade_populacional: %.2f hab/km²\n", densidade_populacional);
       printf("pib_per_capita: %.2f reais\n", pib_per_capita);
          
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
       scanf("%d", &populacao);

       printf("Digite a area: ");
       scanf("%f", &area);

       printf("Digite o pib: ");
       scanf("%f", &pib);

       printf("Digite o numero de pontos_turisticos: ");
       scanf("%d", &pontos_turisticos);

       densidade_populacional = populacao / area;
       pib_per_capita = pib / populacao;
      
       printf("\n--- Dados da carta cadastrada ---\n\n");

       printf("carta: %d\n", carta);
       printf("codigo: %s\n", codigo);
       printf("estado: %s\n", estado);
       printf("cidade: %s\n", cidade); 
       printf("populacao: %d\n", populacao); 
       printf("area: %.2f\n", area);
       printf("pib: %.2f\n", pib);
       printf("pontos_turisticos: %d\n", pontos_turisticos);
       printf("densidade_populacional: %.2f hab/km²\n", densidade_populacional);
       printf("pib_per_capita: %.2f reais\n", pib_per_capita);
      
return 0;
}

