#include <stdio.h>

int main() {
    char carta[20] = "1";          
    char codigo[20] = "a01";             
    char estado[20] = "Amazonas";       
    char cidade[20] = "Sucubduri";       
    double populacao = 380000;          
    float areakm = 20606.000;           
    float pib = 25086.000000;              
    int pontosturisticos = 20;         

    printf("Carta: %s\n", carta);
    printf("Codigo: %s\n", codigo);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %.0f\n", populacao);
    printf("Área km²: %.3f\n", areakm);
    printf("PIB: %.3f\n", pib);
    printf("Pontos Turísticos: %d\n", pontosturisticos);

printf("\n");

   
    char carta1[20] = "2";
    char codigo1[20] = "b01";
    char estado1[20] = "Mato Grosso";
    char cidade1[20] = "Gafanhotos";
    double populacao1 = 45000.000000;  
    float areakm1 = 600.0000000;
    float pib1 = 750.000000;
    int pontosturisticos1 = 35;

    // Exemplo de impressão:
    printf("Carta: %s\n", carta1);
    printf("Codigo: %s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %.2f\n", populacao1);
    printf("Area (km²): %.2f\n", areakm1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);

    return 0;
}
