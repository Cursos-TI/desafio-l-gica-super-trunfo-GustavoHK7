#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    char cidade1[20];
    int pt1, populacao1;
    float area1, pib1;
    float densidade1;
    float percapita1;

    char cidade2[20];
    unsigned int pt2, populacao2;
    float area2, pib2;
    float densidade2;
    float percapita2;
    
    int opcao, regras, atributo;
//menu interativo
    printf("***Super Trunfo*** \n");
    printf("1* Iniciar jogo \n");
    printf("2* Regras \n");
    printf("3* Sair... \n");
    printf("Escolha uma opção! \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Insira os dados de suas cartas: \n");
// cidade 1:
        printf("Digite o nome da cidade 1: \n");
        scanf("%s", cidade1);
// população 1:    
        printf("Digite a População: \n");
        scanf("%u", &populacao1);
// pontos turísticos 1:    
        printf("Digite os pontos turísticos: \n");
        scanf("%u", &pt1);
// area 1:
        printf("Digite a area: \n");
        scanf("%f", &area1);
// Pib 1:    
        printf("Digite o Pib: \n");    
        scanf("%f", &pib1);
// Densidade 1:    
        densidade1 = (float) (populacao1 / area1);

// cidade 2:
        printf("Digite o nome da cidade 2: \n");
        scanf("%s", cidade2);
// populção 2:
        printf("Digite a População: \n");
        scanf("%u", &populacao2);
// pontos turísticos 2:
        printf("Digite os pontos turísticos: \n");
        scanf("%u", &pt2);
// area 2:
        printf("Digite a area: \n");
        scanf("%f", &area2);
// Pib 2:
        printf("Digite o Pib: \n");
        scanf("%f", &pib2);
// Densidade 2:
         densidade2 = (float) (populacao2 / area2);
        
        
        printf("***Atributos*** \n");
        printf("1* População \n");
        printf("2* Pontos Turísticos \n");
        printf("3* Área \n");
        printf("4* Pib \n");
        printf("5* Densidade Populacional \n");
        printf("Escolha qual atributo usar para fazer a comparação! \n");
        scanf("%d", &atributo);
        
        switch(atributo)
        {
        case 1:
        if (populacao1 == populacao2) {
        printf("### Empate! ### \n");   
        } 
        else if (populacao1 > populacao2) {
        printf("### %s Vence! ### \n",cidade1 );
        } 
        else 
        printf("### %s Vence! ### \n", cidade2);  
        break;
        case 2:
        if (pt1 == pt2) {
        printf("### Empate! ### \n");
        } 
        else if (pt1 > pt2) {
        printf("### %s Vence! ### \n",cidade1);
        } 
        else 
        printf("### %s Vence! ### \n", cidade2);
        break;
        case 3:
        if (area1 == area2) {
        printf("### Empate! ### \n");
        } 
        else if (area1 > area2) {
        printf("### %s Vence! ### \n",cidade1);
        }
        else 
        printf("### %s Vence! ### \n", cidade2);
        break;
        case 4:
        if (pib1 == pib2) {
        printf("### Empate! ### \n");
        } 
        else if (pib1 > pib2) {
        printf("### %s Vence! ### \n",cidade1);
        } 
        else 
        printf("### %s Vence! ### \n", cidade2);
        break;
        case 5:
        if (densidade1 == densidade2) {
        printf("### Empate! ### \n");
        } 
        else if (densidade1 < densidade2) {
        printf("### %s Vence! ### \n",cidade1);
        } else 
        printf("### %s Vence! ### \n", cidade2);
        }
        break; 

        
        case 2:
        printf("***Regras*** \n");
        printf("1* O jogador 1 escolhe um atributo para comparar as cartas. \n");
        printf("2* O jogador 2 escolhe um atributo para comparar as cartas. \n");
        printf("3* O jogador com o maior valor no atributo escolhido ganha! \n");
        printf("4* atributos com mesmo valor resultam em empate. \n");
        break;
        
        
        case 3:
        printf("Saindo do jogo... \n");
        break;

        }  

    return 0;
}