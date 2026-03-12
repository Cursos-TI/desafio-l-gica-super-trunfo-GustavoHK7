#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado1[10], codigo1[10], cidade1[20];
    int pt1, populacao1;
    float area1, pib1;
    float densidade1;
    float percapita1;

    char estado2[20], codigo2[10], cidade2[20];
    unsigned int pt2, populacao2;
    float area2, pib2;
    float densidade2;
    float percapita2;

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    
//carta 1:    
    printf("Digite o Estado: \n");
    scanf("%s", estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a População: \n");
    scanf("%u", &populacao1);

    printf("Digite os pontos turísticos: \n");
    scanf("%u", &pt1);

    printf("Digite a area: \n");
    scanf("%f", &area1);

    printf("Digite o Pib: \n");
    scanf("%f", &pib1);

    densidade1 = (float) (populacao1 / area1);
    percapita1 = (float) (populacao1 / pib1);

//carta 2:    
    printf("Digite o Estado: \n");
    scanf("%s", estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a População: \n");
    scanf("%u", &populacao2);

    printf("Digite os pontos turísticos: \n");
    scanf("%u", &pt2);

    printf("Digite a area: \n");
    scanf("%f", &area2);

    printf("Digite o Pib: \n");
    scanf("%f", &pib2);

    densidade2 = (float) (populacao2 / area2);
    percapita2 = (float) (populacao2 / pib2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
    if (populacao1 > populacao2) {
    printf("Cidade 1 tem a maior população \n");
    } else {
    printf("Cidade 2 tem a maior população \n");
    }
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    if (populacao1 > populacao2) {
    printf("A cidade vencedora é Cidade 1! \n");
    } else {
    printf("A cidade vencedora é Cidade 2! \n");
    }
    return 0;
}
