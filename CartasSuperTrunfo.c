#include <stdio.h>

int main() {
    
    char pais[20];       
    char codigo[20];          
    char estado[20];     
    char cidade[20];    
    double populacao;     
    float areakm;           
    float pib;            
    int pontosturisticos; 

    

      printf("======= PAIS ======== \n");
      printf("digite seus pai :");
      scanf("%s", &pais);
      printf("digite o codigo do seu pais: \n");
      scanf("%s", &codigo);
      printf("Digite seu estado: \n");
      scanf("%s", &estado);
      printf("Digite sua cidade: \n");
      scanf("%s", &cidade );
      printf("Digite a pupulaçao: \n");
      scanf("%f", &populacao);
      printf("Digite a area em km: \n");
      scanf("%f", &areakm);
      printf("Digite o PIB: \n");
      scanf("%f", &pib);
      printf("Digite quantidae de pontos turisticos de sua cidade:\n");
      scanf("%d", &pontosturisticos);


   char pais1[20];
   char codigo1[20];
   char estado1[20];
   char cidade1[20];
   double populacao1;
   float areakm1;
   float pib1;
   int pontosturisticos1;
     
      printf("======= PAIS 1 ======== \n");

   
      
      printf("digite seu pais: \n");
      scanf("%s", &carta1);
      printf("digite o codigo do seu pais: \n");
      scanf("%s", &codigo1);
      printf("Digite seu estado: \n");
      scanf("%s", &estado1);
      printf("Digite sua cidade: \n");
      scanf("%s", &cidade1 );
      printf("Digite a pupulaçao: \n");
      scanf("%f", populacao1 );
      printf("Digite a area em km: \n");
      scanf("%f", &areakm1);
      printf("Digite o PIB: \n");
      scanf("%f", &pib1);
      printf("Digite quantidae de pontos turisticos de sua cidade: \n");
      scanf("%d", &pontosturisticos1);

 if ( populacao > populacao1)
 {
  printf(" PAIS venceu ");
 } else  {
   printf(" PAIS 1 venceu");
 }
 






}
