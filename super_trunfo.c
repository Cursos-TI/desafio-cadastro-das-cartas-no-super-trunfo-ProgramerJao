#include <stdio.h>


int main(){

//SUPER TRUNFO ESTADOS - Jao
    char estado1[20], cidade1[20], codigo1[2];
    int populacao1, turisticos1;
    float area1, pib1;

    char estado2[20], cidade2[20], codigo2[3];
    int populacao2, turisticos2;
    float area2, pib2;

    // Cadastro das Cartas:
    
    //CARTA 1
    
    printf("SIMBORA CADASTRAR AS CARTAS?\n");

    printf("Codigo da primeira carta: \n");
    scanf("%s", codigo1);

    printf("Digite o Estado 1: \n");
    scanf("%s", estado1);

    printf("digite a cidade 1: \n");
    scanf("%s", cidade1);

    printf("Digite a População da cidade 1: \n");
    scanf("%i", &populacao1);
    
    printf("Digite a área da cidade 1: \n");
    scanf("%f", &area1);
    
    printf("Digite o PIB da cidade 1: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade 1:\n");
    scanf("%i", &turisticos1);

    // CARTA 2
    printf("\nDigite o Codigo da carta 2: \n");
    scanf("%s", codigo2);
    

    printf("Digite o estado da carta 2: \n");
    scanf("%s", estado2);
    

    printf("Digite a cidade da carta 2: \n");
    scanf("%s", cidade2);
    
    printf("Digite a população da cidade 2: \n");
    scanf("%i", &populacao2);
    

    printf("Digite a área da cidade 2: \n");
    scanf("%f", &area2);
    

    printf("Digite o PIB da cidade 2: \n");
    scanf("%f", &pib2);
    
    printf("Digite a quantidade de pontos turísticos da cidade 2:\n");
    scanf("%i", &turisticos2);
    printf("\n");
    

    //Informações da carta 1
    printf("Primeira Carta\nEstado: %s\nCódigo do estado: %s\nNome da Cidade: %s\nPopulação: %i\nÁrea: %f\nPIB: %f\nNumero de pontos turisticos: %i\n", estado1, codigo1, cidade1, populacao1, area1, pib1, turisticos1);
   
    printf("\n\n");

    //Informações da carta 2
    printf("Segunda Carta\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %i\nÁrea: %f\nPIB: %f\nNumero de pontos turisticos: %i\n\n", estado2, codigo2, cidade2, populacao2, area2, pib2, turisticos2);
    return 0;
}