#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char estado[30];
    char cidade[30];
    char codigo[3];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;  
    
    printf("Digite o nome do estado: \n");
    scanf("%s", &estado);
    printf("Estado: %s\n", estado);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);
    printf("Cidade: %s\n", cidade);

    printf("Digite o codigo da carta: \n");
    scanf("%s", &codigo);
    printf("Código: %s\n", codigo);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);
    printf("População: %d\n", populacao);

    printf("Digite a area da cidade: \n");
    scanf("%f", &area);
    printf("Área: %f\n", area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);
    printf("PIB: %f\n", pib);

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &pontos_turisticos);
    printf("Pontos turísticos: %d\n", pontos_turisticos);

    return 0;
  
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
