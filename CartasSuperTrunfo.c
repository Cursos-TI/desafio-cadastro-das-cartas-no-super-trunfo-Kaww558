#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

int cdc,npt,area,PIB,p;

char nome[50];
printf("Para cadastrar sua carta insira as seguintes informações \n");
printf("O codigo da carta: ");
scanf("%d",&cdc);
printf("Nome da cidade: ");
scanf("%49s",nome);
printf("População: ");
scanf(" %d",&p);
printf("Area da cidade: ");
scanf("%d",&area);
printf("O PIB da cidade: ");
scanf("%d",&PIB);
printf("Numero de pontos turisticos: ");
scanf("%d",&npt);
printf("Os dados de sua carta são: \n");
printf("\n Nome: %s \n",nome);
printf("\n A População: %d \n",p);
printf("\n Area da Cidade: %d \n",area);
printf("\n O PIB da Cidade: %d \n",PIB);
printf("\n O Numero de pontos turisticos: %d \n",npt);
printf("\n O Codigo da sua carta: %d \n",cdc);

    return 0;
}
