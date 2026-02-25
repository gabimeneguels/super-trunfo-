#include <stdio.h>
#include <string.h>

// Estrutura que representa uma carta do Super Trunfo
struct Carta {
    char estado[50];
    char codigo[10];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade;
    float pibPerCapita;
};

int main() {

    // Declaração das duas cartas
    struct Carta carta1, carta2;

    // =========================
    // Cadastro da Carta 1
    // =========================
    strcpy(carta1.estado, "SP");
    strcpy(carta1.codigo, "C1");
    strcpy(carta1.nomeCidade, "São Paulo");
    carta1.populacao = 12300000;
    carta1.area = 1521.11;
    carta1.pib = 699000000000.0;
    carta1.pontosTuristicos = 50;

    // =========================
    // Cadastro da Carta 2
    // =========================
    strcpy(carta2.estado, "RJ");
    strcpy(carta2.codigo, "C2");
    strcpy(carta2.nomeCidade, "Rio de Janeiro");
    carta2.populacao = 6000000;
    carta2.area = 1200.25;
    carta2.pib = 300000000000.0;
    carta2.pontosTuristicos = 30;

    // =========================
    // Cálculo da Densidade Populacional
    // =========================
    carta1.densidade = carta1.populacao / carta1.area;
    carta2.densidade = carta2.populacao / carta2.area;

    // =========================
    // Cálculo do PIB per capita
    // =========================
    carta1.pibPerCapita = carta1.pib / carta1.populacao;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    // =========================
    // Escolha do atributo para comparação
    // Neste exemplo: POPULAÇÃO
    // =========================

    printf("Comparação de cartas (Atributo: População)\n\n");

    printf("Carta 1 - %s (%s): %d\n",
           carta1.nomeCidade, carta1.estado, carta1.populacao);

    printf("Carta 2 - %s (%s): %d\n\n",
           carta2.nomeCidade, carta2.estado, carta2.populacao);

    // =========================
    // Lógica de comparação
    // Maior valor vence
    // =========================
    if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
    }

    return 0;
}
