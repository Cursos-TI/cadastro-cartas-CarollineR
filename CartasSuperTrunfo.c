#include <stdio.h>

// Área para definição das variáveis para armazenar as propriedades das cidades

  int main() {
   
  char code[5]; //código da carta. Ex.:"A001"
  int population;
  double area;
  float pib; //Produto Interno Bruto
  int attractions;  //número de pontos turísticos da cidade

  printf("Desafio SuperTrunfo - Países!\n");
  printf("=== Super Trunfo - Cadastro de Cartas (Nível Novato) ===\n");
  printf("Observação: use ponto (.) para decimais (ex.: 1234.56)\n\n");

  //Entradas
  printf("Digite o código da carta (ex.:A001): ");
  scanf("%s", code);

  printf("Digite a população: ");
  scanf("%d", &population);

  printf("Digite a área em km²: ");
  scanf("%lf", &area);

  printf("Digite o PIB: ");
  scanf("%f", &pib);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &attractions);

  // Área para exibição dos dados da cidade
  printf("\n=== Carta Cadastrada ===\n")  ;
  printf("Código: %s\n", code);
  printf("%d", &population);
  printf("%lf", &area);
  printf("%f", &pib);
  printf("%d", &attractions);


return 0;
} 
