#include <stdio.h>

int main() {
    
    char carta[20];       
    char codigo[20];          
    char estado[20];     
    char cidade[20];    
    double populacao;     
    float areakm;           
    float pib;            
    int pontosturisticos; 

    

      printf("======= carta ======== \n");
      printf("digite sua carta:");
      scanf("%s", &carta);
      printf("digite o codigo da sua carta: \n");
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


   char carta1[20];
   char codigo1[20];
   char estado1[20];
   char cidade1[20];
   double populacao1;
   float areakm1;
   float pib1;
   int pontosturisticos1;
     
      printf("======= carta1 ======== \n");

   
      
      printf("digite sua carta: \n");
      scanf("%s", &carta1);
      printf("digite o codigo da sua carta: \n");
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
  printf(" carta venceu ");
 } else  {
   printf("carta1 venceu");
 }
 






}
