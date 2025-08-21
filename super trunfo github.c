#include <stdio.h>
#include <stdlib.h>

#define NUM_CARTAS 2

// Estrutura para armazenar os dados de uma carta
typedef struct {
    char estado;                // Letra de A a H
    char codigo[4];             // Ex: A01, B03
    char nomeCidade[100];      // Nome da cidade
    int populacao;             // Número de habitantes
    float area;                // Área em km²
    float pib;                 // Produto Interno Bruto
    int pontosTuristicos;      // Número de pontos turísticos
} Carta;

int main() {
    Carta cartas[NUM_CARTAS];

    printf("Cadastro de Cartas do Super Trunfo\n\n");

    for (int i = 0; i < NUM_CARTAS; i++) {
        printf("Carta %d:\n", i + 1);

        printf("Informe o estado (letra de A a H): ");
        scanf(" %c", &cartas[i].estado);

        printf("Informe o código da carta (ex: A01): ");
        scanf("%s", cartas[i].codigo);

        printf("Informe o nome da cidade: ");
        scanf(" %[^\n]", cartas[i].nomeCidade); // Lê até o final da linha

        printf("Informe a população da cidade: ");
        scanf("%d", &cartas[i].populacao);

        printf("Informe a área da cidade (em km²): ");
        scanf("%f", &cartas[i].area);

        printf("Informe o PIB da cidade (em bilhões de reais): ");
        scanf("%f", &cartas[i].pib);

        printf("Informe o número de pontos turísticos: ");
        scanf("%d", &cartas[i].pontosTuristicos);

        printf("\n");
    }

    // Exibe os dados das cartas
    for (int i = 0; i < NUM_CARTAS; i++) {
        printf("Carta %d:\n", i + 1);
        printf("Estado: %c\n", cartas[i].estado);
        printf("Código: %s\n", cartas[i].codigo);
        printf("Nome da Cidade: %s\n", cartas[i].nomeCidade);
        printf("População: %d\n", cartas[i].populacao);
        printf("Área: %.2f km²\n", cartas[i].area);
        printf("PIB: %.2f bilhões de reais\n", cartas[i].pib);
        printf("Número de Pontos Turísticos: %d\n", cartas[i].pontosTuristicos);
        printf("\n");
    }

    return 0;
	
	}