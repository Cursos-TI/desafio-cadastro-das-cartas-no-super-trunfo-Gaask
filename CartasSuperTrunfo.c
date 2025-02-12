#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigo[4], codigo2[4]; //Declaração da variável código da cidade, que tem como base 4 caracteres
    char nome[20], nome2[20]; //Declaração da variável nome da cidade, que tem como base 20 caracteres
    int populacao, populacao2; //Declaração da variável população, utilizando números inteiros
    int area, area2; //Declaração da variável área, utilizando números inteiros
    int pib, pib2; //Declaração da variável PIB, utilizando números inteiros
    int turismo, turismo2; //Declaração da variável turismo, utilizando números inteiros
    float densidade, densidade2; //Declaração da variável densidade, utilizando números flutuantes
    float PIB, PIB2; //Declaração da variável PIB, utilizando números flutuantes
    float ResultadoDensidade;
    float ResultadoPIB;
    int Ponto1, Ponto2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Bem-vindo! Por favor, insira o código da primeira cidade: "); //Exibe a mensagem no terminal solicitando a inserção do dado "codigo"
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
    printf("PIB per capita: %.2f \n", PIB); //Exibe o dado "PIB" calculado anteriormente

    // ** INSERÇÃO DE DADOS DA SEGUNDA CARTA **

    printf("\nPor favor, insira o código da segunda cidade: "); //Exibe a mensagem no terminal solicitando a inserção do dado "codigo2"
    scanf("%s", &codigo2); //Permite a inserção do dado "código2" no terminal

    printf("\nAgora, por favor, digite o nome: "); //Exibe a mensagem no terminal solicitando a inserção do dado "nome2"
    scanf(" %s", &nome2); //Permite a inserção do dado "nome2" no terminal

    printf("\nDigite a população: ");//Exibe a mensagem no terminal solicitando a inserção do dado "populacao2"
    scanf(" %d", &populacao2); //Permite a inserção do dado "populacao2" no terminal

    printf("\nDigite a área: "); //Exibe a mensagem no terminal solicitando a inserção do dado "area2"
    scanf(" %d", &area2); //Permite a inserção do dado "area2" no terminal

    printf("\nDigite o PIB: "); //Exibe a mensagem no terminal solicitando a inserção do dado "PIB2"
    scanf(" %d", &pib2); //Permite a inserção do dado "PIB2" no terminal

    printf("\nPor fim, digite a quantidade de pontos turísticos disponíves em sua cidade: "); //Exibe a mensagem no terminal solicitando a inserção do dado "turismo2"
    scanf(" %d", &turismo2); //Permite a inserção do dado "turismo2" no terminal

    densidade2 = (float)populacao2 / area2; //calcula a densidade populacional 2
    PIB2 = (float)pib2 / populacao2; //calcula o PIB per capita 2
    
    printf("\nConfira a sua seleção:\n"); //Exibe a mensagem no terminal confirmando os dados
    printf("Cidade: %s \n", codigo2); //Exibe o dado "codigo2" digitado anteriormente, no terminal
    printf("Nome: %s\n", nome2); //Exibe o dado "nome2" digitado anteriormente, no terminal
    printf("População: %d\n", populacao2); //Exibe o dado "populacao2" digitado anteriormente, no terminal
    printf("Área: %d\n", area2); //Exibe o dado "area2" digitado anteriormente, no terminal
    printf("PIB: %d\n", pib2); //Exibe o dado "pib2" digitado anteriormente, no terminal
    printf("pontos turísticos: %d\n", turismo2); //Exibe o dado "turismo2" digitado anteriormente, no terminal
    printf("Densidade populacional: %.2f\n", densidade2); //Exibe o dado "densidade2" calculado anteriormente
    printf("PIB per capita: %.2f \n", PIB2); //Exibe o dado "PIB2" calculado anteriormente

    
    printf("\nA carta 1 - %s - possui os seguintes poderes: \n", codigo);
    printf("Densidade populacional: %.2f \n", densidade);
    printf("PIB per capita: %.2f \n", PIB);

    printf("\nA carta 2 - %s - possui os seguintes poderes: \n", codigo2);
    printf("Densidade populacional: %.2f \n", densidade2);
    printf("PIB per capita: %.2f \n", PIB2);

    printf("A carta vencedora é a com menor densidade populacional e maior PIB per capita");
}
