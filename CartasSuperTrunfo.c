#include <stdio.h>

  int main() {

    //Variáveis da Carta 1
   
  char code1[5]; //código da carta. Ex.:"A001"
  int population1;
  double area1;
  float pib1; //Produto Interno Bruto
  int attractions1;  //número de pontos turísticos da cidade

  //Variáveis da Carta 2

  char code2[5];
  int population2;
  double area2;
  float pib2;
  int attractions2;

  //Entrada de dados - Carta 1

  printf("Desafio SuperTrunfo - Países!\n");
  printf("=== Super Trunfo - Cadastro de Cartas (Nível Novato) ===\n");
  printf("Observação: use ponto (.) para decimais (ex.: 1234.56)\n\n");

  printf("Digite o código da carta (ex.:A001): ");
  scanf("%s", code1);

  printf("Digite a população: ");
  scanf("%d", &population1);

  printf("Digite a área em km²: ");
  scanf("%lf", &area1);

  printf("Digite o PIB: ");
  scanf("%f", &pib1);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &attractions1);

  //Entrada de dados - Carta 2

  printf("\nAgora cadastre a segunda carta:\n");

  printf("Digite o código da carta (ex.:A001): ");
  scanf("%s", code2);

  printf("Digite a população: ");
  scanf("%d", &population2);

  printf("Digite a área em km²: ");
  scanf("%lf", &area2);

  printf("Digite o PIB: ");
  scanf("%f", &pib2);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &attractions2);

  // Exibição dos dados - Carta 1
  printf("\n=== Carta Cadastrada ===\n")  ;
  printf("Código: %s\n", code1);
  printf("População: %d\n", population1);
  printf("Área: %lf\n", area1);
  printf("PIB: %f\n", pib1);
  printf("Pontos Turísticos: %d\n", attractions1);

  //Exibição dos dados - Carta 2

    printf("\n=== Carta Cadastrada ===\n")  ;
  printf("Código: %s\n", code2);
  printf("População: %d\n", population2);
  printf("Área: %lf\n", area2);
  printf("PIB: %f\n", pib2);
  printf("Pontos Turísticos: %d\n", attractions2);


return 0;
} 
