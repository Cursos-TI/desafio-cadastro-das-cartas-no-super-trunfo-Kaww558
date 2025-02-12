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

int npt,p;
float area ,PIB;
char nomec[50],cdc[4],est[50];
printf("Para cadastrar sua carta insira as seguintes informações \n");

printf("Nome do Estado: ");
scanf(" %49s",est);

printf("Nome da cidade: ");
scanf(" %49s",nomec);

printf("Codigo da carta: ");
scanf(" %3s",cdc);

printf("Populaco: ");
scanf(" %d",&p);

printf("Area da cidade: ");
scanf(" %f",&area);

printf("O PIB da cidade: ");
scanf(" %f",&PIB);

printf("Numero de pontos turisticos: ");
scanf(" %d",&npt);

   printf("\nOs dados de sua carta são:\n");
    printf(" Nome da Cidade: %s\n", nomec);
    printf(" Nome do Estado: %s\n", est);
    printf(" Código da Carta: %s\n", cdc);
    printf(" População: %d habitantes\n", p);
    printf(" Área da Cidade: %.2f km²\n", area);
    printf(" PIB da Cidade: R$ %.2f Reais\n", PIB);
    printf(" Número de Pontos Turísticos: %d\n", npt);



    return 0;
}
