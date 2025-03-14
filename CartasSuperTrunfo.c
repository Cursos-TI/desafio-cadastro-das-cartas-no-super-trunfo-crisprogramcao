#include <stdio.h>  

int main(){

    printf("Super Trunfo!\n");
    printf("\n\n");
    //Carta1
    char estado = 'A';
    char codigo[4]= "A01";
    char nome_da_cidade[20] = "São Paulo";
    int populacao = 124519999;
    float area = 1550110;
    float pib = 820980607731;
    int numeros_de_pontos_turisticos = 30;


    printf("Carta1: \n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Números de Pontos Turíticos: %d" , numeros_de_pontos_turisticos);
    printf("\n\n");

    //Carta2

    char estado2 = 'B';
    char codigo2[5]= "B02";
    char nome_da_cidade2[20]= "Bahia";
    int populacao2 = 30000000;
    float area2 =982000.11;
    float pib2 =400000000;
    int numeros_de_pontos_turisticos2 =40;


    printf("Carta2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Números de Pontos Turísticos: %d\n", numeros_de_pontos_turisticos2);

    return 0;



}
