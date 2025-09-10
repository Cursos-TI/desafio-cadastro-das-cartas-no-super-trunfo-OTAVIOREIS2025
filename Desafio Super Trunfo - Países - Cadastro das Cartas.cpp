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

    // Cadastro da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o codigo da cidade (ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a area (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição formatada
    printf("\n\n===== CARTAS CADASTRADAS =====\n");

    printf("\n+----------------------------+\n");
    printf("|       SUPER TRUNFO         |\n");
    printf("|         PAISES             |\n");
    printf("+----------------------------+\n");
    printf("| Codigo: %-5s              |\n", codigo1);
    printf("| Populacao: %-10d      |\n", populacao1);
    printf("| Area: %-10.2f km²   |\n", area1);
    printf("| PIB: %-10.2f bi     |\n", pib1);
    printf("| Pontos Turisticos: %-3d   |\n", pontosTuristicos1);
    printf("+----------------------------+\n");

    printf("\n+----------------------------+\n");
    printf("|       SUPER TRUNFO         |\n");
    printf("|         PAISES             |\n");
    printf("+----------------------------+\n");
    printf("| Codigo: %-5s              |\n", codigo2);
    printf("| Populacao: %-10d      |\n", populacao2);
    printf("| Area: %-10.2f km²   |\n", area2);
    printf("| PIB: %-10.2f bi     |\n", pib2);
    printf("| Pontos Turisticos: %-3d   |\n", pontosTuristicos2);
    printf("+----------------------------+\n");

    return 0;
}



