#include <stdio.h>

int main(){
    
    //carta 1
    char estado = 'A';
    char codigo[4]= "A01";
    char nome_da_cidade[20] = "São Paulo";
    int populacao = 12000000;
    float area = 20000000.00; 
    float pib = 500000000000;
    int numeros_de_pontos_turisticos = 20;
    float densidade_populacional = populacao / area;
    float pib_per_capita =  pib / populacao;

    printf("carta1:\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de pontos turísticos: %d\n", numeros_de_pontos_turisticos);
    printf("Densidade populacional: %.2f\n", densidade_populacional);
    printf("PIB per capita: %.2f\n", pib_per_capita);
   

    printf("\n");
    //carta2
    char estado2 = 'B';
    char codigo2[4]= "B02";
    char nome_da_cidade2[20] = "Bahia";
    int populacao2 = 30000000;
    float area2 = 982000.11;
    float pib2 = 100000000000;
    int numeros_de_pontos_turisticos2 = 10;
    float densudade_populacional2 = populacao2 / area2; 
    float pib_per_capita2 = pib2 / populacao2;
    
    
    printf("Carta2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome_da_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n" , numeros_de_pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n", densidade_populacional);
    printf("PIB per capita: %.2f\n", pib_per_capita2);
   
   


    return 0;
}