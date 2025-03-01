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
//carta1
int npt,p;
float area ,PIB,dp,PIBC;
char nomec[50],cdc[4],est[50];

printf("Insira as seguintes informações da Primeira Carta \n");

printf("Nome do Estado: ");
scanf(" %49s",est);

printf("Nome da cidade: ");
scanf(" %49s",nomec);

printf("Codigo da carta: ");
scanf(" %3s",cdc);

printf("Populacao: ");
scanf(" %d",&p);

printf("Area da cidade: ");
scanf(" %f",&area);
dp=p / area;
printf("O PIB da cidade: ");
scanf(" %f",&PIB);
PIBC=PIB/p;
printf("Numero de pontos turisticos: ");
scanf(" %d",&npt);

   //carta2
    int c2npt,c2p;
    float c2area ,c2PIB,c2dp,c2PIBC;
    char c2nomec[50],c2cdc[4],c2est[50];

    printf("\n Insira as  informações da Segunda Carta \n");
    
    printf("Nome do Estado: ");
    scanf(" %49s",c2est);
    
    printf("Nome da cidade: ");
    scanf(" %49s",c2nomec);
    
    printf("Codigo da carta: ");
    scanf(" %3s",c2cdc);
    
    printf("Populacao: ");
    scanf(" %d",&c2p);
    
    printf("Area da cidade: ");
    scanf(" %f",&c2area);
    c2dp=c2p / c2area;
    printf("O PIB da cidade: ");
    scanf(" %f",&c2PIB);
    c2PIBC=c2PIB/c2p;
    printf("Numero de pontos turisticos: ");
    scanf(" %d",&c2npt);
    

 

//carta1 dados
 float ss=  area + PIB + dp + PIBC + npt + p;
    printf("\nOs dados da Primeira carta são:\n");
    printf(" Nome da Cidade: %s\n", nomec);
    printf(" Nome do Estado: %s\n", est);
    printf(" Código da Carta: %s\n", cdc);
    printf(" População: %d habitantes\n", p);
    printf(" Área da Cidade: %.2f km²\n", area);
    printf(" PIB da Cidade: %.2f \n", PIB);
    printf(" Número de Pontos Turísticos: %d\n", npt);
    printf(" densidade populacional: %.2f hab/km²\n",dp);
    printf(" PIB per Capita: R$ %.2f Reais \n",PIBC);
    printf(" Super Poder: %.2f \n ",ss);



    ////carta2 dados
     float  ss2=  c2area + c2area + c2dp + c2PIBC + c2npt + c2p;
       printf("\nOs dados da Segunda carta são:\n");
        printf(" Nome da Cidade: %s\n", c2nomec);
        printf(" Nome do Estado: %s\n", c2est);
        printf(" Código da Carta: %s\n", c2cdc);
        printf(" População: %d habitantes\n", c2p);
        printf(" Área da Cidade: %.2f km²\n", c2area);
        printf(" PIB da Cidade: %.2f \n", PIB);
        printf(" Número de Pontos Turísticos: %d\n", c2npt);
        printf(" densidade populacional: %.2f hab/km²\n",c2dp);
        printf(" PIB per Capita: R$ %.2f Reais\n",c2PIBC);
        printf(" Super Poder: %.2f\n ",ss2);


printf("\nComparacao Das cartas\n   (1)(=)(carta 1 ganhou) \n   (0)(=)( carta 2 ganhou)  \n ");
printf(" \n A carta ganhadora e: %d \n",ss > ss2); 
























    return 0;
}
