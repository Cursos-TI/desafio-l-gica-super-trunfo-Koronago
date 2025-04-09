#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    char estado[3];
    char codigo[5];
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    printf("Informe os dados da Carta1:\n");
    printf("Estado: ");
    scanf("%2s", carta1.estadoA);
    printf("Código: ");
    scanf("%4s", carta1.codigoA);
    printf("Nome da cidade 1: ");
    scanf(" %[^\n]s", carta1.nome_cidade1);
    printf("PopulaçãoA: ");
    scanf("%d", &carta1.populacaoA);
    printf("Área: ");
    scanf("%f", &carta1.areaA);
    printf("PIB: ");
    scanf("%f", &carta1.pibA);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticosA);

    printf("Informe os dados da Carta2:\n");
    printf("Estado: ");
    scanf("%2s", carta2.estadoB);
    printf("Código: ");
    scanf("%4s", carta2.codigoB);
    printf("Nome da cidade 2: ");
    scanf(" %[^\n]s", carta2.nome_cidade2);
    printf("População: ");
    scanf("%d", &carta2.populacaoB);
    printf("Área: ");
    scanf("%f", &carta2.areaB);
    printf("

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    
    if (populacaoA > populacaoB) {
         printf("Cidade 1 tem maior populaçao. \n");
    } else {
        printf("Cidade 2 tem maior populaçao. \n");
    }
    
    printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
