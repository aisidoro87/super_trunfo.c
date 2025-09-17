#include <stdio.h>

int main() {
    char estado1[10], estado2[10];
    char codigo1[5], codigo2[5];
    char nomeCidade1[100], nomeCidade2[100];
    int numeroHabitantes1, numeroHabitantes2;
    int pontosTuristicos1, pontosTuristicos2;
    float area1, area2;
    double pib1, pib2; 
    double densidade1, densidade2, pibPerCapita1, pibPerCapita2;

    printf("---------- Calculando Densidade Populacional e PIB per Capita ---------- \n");

    printf("-------- CARTA 1 --------\n\n");
    printf("Escreva a letra do Estado de A a H: ");
    scanf("%s", estado1);

    printf("Escreva o código da carta entre 01 e 04: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Escreva o número de habitantes: ");
    scanf("%d", &numeroHabitantes1);

    printf("Escreva o tamanho da cidade em kilometro quadrado: ");
    scanf("%f", &area1);

    printf("Escreva o PIB da cidade (em bilhões de reais): ");
    scanf("%lf", &pib1);

    printf("Escreva a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos1);

    printf("-------- CARTA 2 --------\n\n");
    printf("Escreva a letra do Estado de A a H: ");
    scanf("%s", estado2);

    printf("Escreva o código da carta entre 01 e 04: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Escreva o número de habitantes: ");
    scanf("%d", &numeroHabitantes2);

    printf("Escreva o tamanho da cidade em kilometro quadrado: ");
    scanf("%f", &area2);

    printf("Escreva o PIB da cidade (em bilhões de reais): ");
    scanf("%lf", &pib2);

    printf("Escreva a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    densidade1 = (double) numeroHabitantes1 / area1;
    pibPerCapita1 = (pib1 * 1e9) / numeroHabitantes1;

    densidade2 = (double) numeroHabitantes2 / area2;
    pibPerCapita2 = (pib2 * 1e9) / numeroHabitantes2;

    // Saída
    printf("\n-------- RESULTADO DA CARTA 1 --------\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", numeroHabitantes1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n-------- RESULTADO DA CARTA 2 --------\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", numeroHabitantes2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}s
