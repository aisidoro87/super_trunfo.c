#include <stdio.h>

int main() {
    // Dados das Cartas
    char estado1[10], estado2[10];
    char codigo1[5], codigo2[5];
    char nomeCidade1[100], nomeCidade2[100];
    unsigned long int numeroHabitantes1, numeroHabitantes2;
    int pontosTuristicos1, pontosTuristicos2;
    float area1, area2;
    double pib1, pib2; 
    double densidade1, densidade2, pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // Resultados das comparações (0 ou 1)
    int resultadoHabitantes, resultadoArea, resultadoPIB;
    int resultadoPontosTuristicos, resultadoDensidade;
    int resultadoPibPerCapita, resultadoSuperPoder;

    printf("---------- Calculando Densidade Populacional e PIB per Capita ---------- \n");

    // -------- CARTA 1 --------
    printf("\n-------- CARTA 1 --------\n\n");
    printf("Escreva a letra do Estado de A a H: ");
    scanf("%s", estado1);

    printf("Escreva o código da carta entre 01 e 04: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Escreva o número de habitantes: ");
    scanf("%lu", &numeroHabitantes1);

    printf("Escreva o tamanho da cidade em kilometro quadrado: ");
    scanf("%f", &area1);

    printf("Escreva o PIB da cidade (em bilhões de reais): ");
    scanf("%lf", &pib1);

    printf("Escreva a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos1);

    // -------- CARTA 2 --------
    printf("\n-------- CARTA 2 --------\n\n");
    printf("Escreva a letra do Estado de A a H: ");
    scanf("%s", estado2);

    printf("Escreva o código da carta entre 01 e 04: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Escreva o número de habitantes: ");
    scanf("%lu", &numeroHabitantes2);

    printf("Escreva o tamanho da cidade em kilometro quadrado: ");
    scanf("%f", &area2);

    printf("Escreva o PIB da cidade (em bilhões de reais): ");
    scanf("%lf", &pib2);

    printf("Escreva a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos2);

    // -------- CÁLCULOS --------
    densidade1 = (double) numeroHabitantes1 / area1;
    pibPerCapita1 = (pib1 * 1e9) / numeroHabitantes1;

    densidade2 = (double) numeroHabitantes2 / area2;
    pibPerCapita2 = (pib2 * 1e9) / numeroHabitantes2;

    superPoder1 = numeroHabitantes1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);
    superPoder2 = numeroHabitantes2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

    // -------- COMPARAÇÕES --------
    resultadoHabitantes = numeroHabitantes1 > numeroHabitantes2;
    resultadoArea = area1 > area2;
    resultadoPIB = pib1 > pib2;
    resultadoPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
    resultadoDensidade = densidade1 < densidade2; 
    resultadoPibPerCapita = pibPerCapita1 > pibPerCapita2;
    resultadoSuperPoder = superPoder1 > superPoder2;

    // -------- RESULTADOS --------
    printf("\nComparação de Cartas:\n\n");
    printf("População: Carta %d venceu (%d)\n", 2 - resultadoHabitantes, resultadoHabitantes);
    printf("Área: Carta %d venceu (%d)\n", 2 - resultadoArea, resultadoArea);
    printf("PIB: Carta %d venceu (%d)\n", 2 - resultadoPIB, resultadoPIB);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", 2 - resultadoPontosTuristicos, resultadoPontosTuristicos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", 2 - resultadoDensidade, resultadoDensidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", 2 - resultadoPibPerCapita, resultadoPibPerCapita);
    printf("Super Poder: Carta %d venceu (%d)\n", 2 - resultadoSuperPoder, resultadoSuperPoder);

    return 0;
}
