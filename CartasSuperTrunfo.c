#include <stdio.h>
#include <string.h>

int main (){

char estado, cidade[50], cod_carta[4], estado2, cidade2[50], cod_carta2[4]; // Aqui, já crio variáveis para ambas as cartas
int populacao, pontos_turisticos, populacao2, pontos_turisticos2;
float area, pib, area2, pib2;

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
    
    printf("\n");   

    printf ("Carta 1:\n");

    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", cod_carta);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    
    
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

    printf("\n");

    printf ("Carta 2:\n");

    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", cod_carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    
    return 0;
}