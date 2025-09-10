#include <cstdio>

int main() {
    // Variáveis da Carta 1
    char codigo1[4];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    // Variáveis da Carta 2
    char codigo2[4];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    // Cadastro da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o codigo da cidade (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a area (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);



