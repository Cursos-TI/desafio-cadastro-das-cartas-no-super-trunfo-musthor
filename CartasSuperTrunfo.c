#include <stdio.h>
#include <string.h>

int main (){

char estado, cidade[50], cod_carta[4], estado2, cidade2[50], cod_carta2[4]; //Já criei as variáveis para a segunda carta
int pontos_turisticos, pontos_turisticos2;
unsigned long int populacao, populacao2; // Usei unsigned long int para evitar problemas com grandes números
float area, pib, area2, pib2, densidadepop, densidadepop2, pibpercapita, pibpercapita2; // Adicionei a densidade e o pib per capita

    printf("Dados da Primeira Carta:\n");

    printf("Digite uma letra de A até H, representando um dos oito estados: \n");
    scanf(" %c", &estado);

    printf("Digite o código da carta: \n");
    scanf("%s", cod_carta);

    getchar(); // Limpa o buffer do teclado
    printf("Digite o nome da cidade: \n");
    fgets(cidade, 50, stdin); // Lê a string com espaços
    cidade[strcspn(cidade, "\n")] = 0; // Remove a quebra de linha do nome da cidade

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);

    densidadepop = (float) populacao/area; // Fiz o cálculo de densidade populacional, usando casting 
    pibpercapita = (float) pib/populacao; // Fiz o cálculo de PIB per capita, usando casting
    float superpoder1 = (float) populacao + area + pib + pontos_turisticos + pibpercapita + (1/densidadepop); // fiz o inverso da densidade populacional para o superpoder
    printf("\n");   

      printf ("Carta 1:\n");

      printf("Estado: %c\n", estado);
      printf("Código da carta: %s\n", cod_carta);
      printf("Cidade: %s\n", cidade);
      printf("População: %d\n", populacao);
      printf("Área: %.2f km²\n", area);
      printf("PIB: %.2f bilhões de reais\n", pib);
      printf("Pontos turísticos: %d\n", pontos_turisticos);
      printf("Densidade populacional: %.2f hab/km²\n", densidadepop); // Adicionei a densidade populacional
      printf("PIB per capita: %.2f reais/habitante\n", pibpercapita); // Adicionei o PIB per capita
      printf("Superpoder: %.2f\n", superpoder1); // Adicionei o superpoder da carta 1
    
    printf("\n");

    printf("Dados da Segunda Carta:\n");

    printf("Digite uma letra de A até H, representando um dos oito estados: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", cod_carta2);

    getchar(); // Limpa o buffer do teclado
    printf("Digite o nome da cidade: \n");
    fgets(cidade2, 50, stdin); // Lê a string com espaços
    cidade2[strcspn(cidade2, "\n")] = 0; // Remove a quebra de linha

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos2);

    densidadepop2 = populacao2/area2; // Fiz o cálculo de densidade populacional
    pibpercapita2 = pib2/populacao2;  // Fiz o cálculo de PIB per capita
    float superpoder2 = (float) populacao2 + area2 + pib2 + pontos_turisticos2 + pibpercapita2 + (1/densidadepop2); // fiz o inverso da densidade populacional para o superpoder
    
    printf("\n");

      printf ("Carta 2:\n");

      printf("Estado: %c\n", estado2);
      printf("Código da carta: %s\n", cod_carta2);
      printf("Cidade: %s\n", cidade2);
      printf("População: %d\n", populacao2);
      printf("Área: %.2f km²\n", area2);
      printf("PIB: %.2f bilhões de reais\n", pib2);
      printf("Pontos turísticos: %d\n", pontos_turisticos2);
      printf("Densidade populacional: %.2f hab/km²\n", densidadepop2); // Adicionei a densidade populacional
      printf("PIB per capita: %.2f reais/habitante\n", pibpercapita2); // Adicionei o PIB per capita

    printf("\n");

        printf("Comparação de Cartas: \n"); // Vamos compara todos os atributos agora
        printf("\n");
        printf("Populacao: Carta %d venceu (%d)\n", 
          (populacao > populacao2) ? 1 : 2,
          (populacao > populacao2) ? 1 : 0);
        printf("Área: Carta %d venceu (%d)\n",
          (area > area2) ? 1 : 2,
          (area > area2) ? 1 : 0);
        printf("PIB: Carta %d venceu (%d)\n",
          (pib > pib2) ? 1 : 2,
          (pib > pib2) ? 1 : 0);
        printf("Pontos Turísticos: Carta %d venceu (%d)\n",
          (pontos_turisticos > pontos_turisticos2) ? 1 : 2,
          (pontos_turisticos > pontos_turisticos2) ? 1 : 0);
        printf("Densidade Populacional: Carta %d venceu (%d)\n",
          (densidadepop < densidadepop2) ? 1 : 2,
          (densidadepop < densidadepop2) ? 1 : 0);
        printf("PIB per Capita: Carta %d venceu (%d)\n",
          (pibpercapita > pibpercapita2) ? 1 : 2,
          (pibpercapita > pibpercapita2) ? 1 : 0);
        printf("Superpoder: Carta %d venceu (%d)\n",
          (superpoder1 > superpoder2) ? 1 : 2,
          (superpoder1 > superpoder2) ? 1 : 0);            
        printf("\n");
    
  return 0;
}