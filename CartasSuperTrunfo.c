#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigo[4]; //Declaração da variável código da cidade, que tem como base 4 caracteres
    char nome[20]; //Declaração da variável nome da cidade, que tem como base 20 caracteres
    int populacao; //Declaração da variável população, utilizando números inteiros
    int area; //Declaração da variável área, utilizando números inteiros
    int pib; //Declaração da variável PIB, utilizando números inteiros
    int turismo; //Declaração da variável turismo, utilizando números inteiros
    float densidade; //Declaração da variável densidade, utilizando números flutuantes
    float PIB; //Declaração da variável PIB, utilizando números flutuantes
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Bem-vindo! Por favor, insira o código da cidade: "); //Exibe a mensagem no terminal solicitando a inserção do dado "codigo"
    scanf("%s", &codigo); //Permite a inserção do dado "código" no terminal

    printf("\nAgora, por favor, digite o nome: "); //Exibe a mensagem no terminal solicitando a inserção do dado "nome"
    scanf(" %s", &nome); //Permite a inserção do dado "nome" no terminal

    printf("\nDigite a população: ");//Exibe a mensagem no terminal solicitando a inserção do dado "populacao"
    scanf(" %d", &populacao); //Permite a inserção do dado "populacao" no terminal

    printf("\nDigite a área: "); //Exibe a mensagem no terminal solicitando a inserção do dado "area"
    scanf(" %d", &area); //Permite a inserção do dado "area" no terminal

    printf("\nDigite o PIB: "); //Exibe a mensagem no terminal solicitando a inserção do dado "PIB"
    scanf(" %d", &pib); //Permite a inserção do dado "PIB" no terminal

    printf("\nPor fim, digite a quantidade de pontos turísticos disponíves em sua cidade: "); //Exibe a mensagem no terminal solicitando a inserção do dado "turismo"
    scanf(" %d", &turismo); //Permite a inserção do dado "turismo" no terminal

    densidade = (float)populacao / area; //calcula a densidade populacional
    PIB = (float)pib / populacao; //calcula o PIB per capita
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nConfira a sua seleção:\n"); //Exibe a mensagem no terminal confirmando os dados
    printf("Cidade: %s \n", codigo); //Exibe o dado "codigo" digitado anteriormente, no terminal
    printf("Nome: %s\n", nome); //Exibe o dado "nome" digitado anteriormente, no terminal
    printf("População: %d\n", populacao); //Exibe o dado "populacao" digitado anteriormente, no terminal
    printf("Área: %d\n", area); //Exibe o dado "area" digitado anteriormente, no terminal
    printf("PIB: %d\n", pib); //Exibe o dado "pib" digitado anteriormente, no terminal
    printf("pontos turísticos: %d\n", turismo); //Exibe o dado "turismo" digitado anteriormente, no terminal
    printf("Densidade populacional: %.2f\n", densidade); //Exibe o dado "densidade" calculado anteriormente
    printf("PIB per capita: %.2f", PIB); //Exibe o dado "PIB" calculado anteriormente
}
