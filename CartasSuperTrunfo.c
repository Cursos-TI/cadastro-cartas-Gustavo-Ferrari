#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf
// para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado, estado02, cidade[50], cidade02[50], cardCode[4], cardCode02[4];
  char dummy; // Variável para consumir o caractere de nova linha deixado pelo scanf
  int população, população02, turisticSpots, turisticSpots02;
  float area, area02, PIB, PIB02;

  // Área para entrada de dados

  printf("Insira os dados da CARTA 01: \n");
  printf("Digite uma letra de 'A' a 'H': \n");
  scanf("%s", &estado);
  printf("Digite o código da carta (Letras + número(01,02,03 ou 04)): \n");
  printf("Exemplos: 'A01', B03, H02 \n");
  scanf("%s", cardCode);
  scanf("%c", &dummy);
  printf("Digite o nome da cidade: \n");
  scanf("%49[^\n]", cidade); // Usar %49[^\n] para ler uma string com espaços, limitando a 49 caracteres para evitar estourar o buffer e não deixar linha a mais no output
  printf("Digite a população da cidade: \n");
  scanf("%d", &população);
  printf("Digite a área da cidade (em km²): \n");
  scanf("%f", &area);
  printf("Digite o PIB da cidade: \n");
  scanf("%f", &PIB);
  printf("Digite o número de pontos turísticos da cidade: \n");
  scanf("%d", &turisticSpots);  

  printf("Insira os dados da CARTA 02: \n");
  printf("Digite uma letra de 'A' a 'H': \n");
  scanf("%s", &estado02);
  printf("Digite o código da carta (Letras + número(01,02,03 ou 04)): \n");
  printf("Exemplos: 'A01', B03, H02 \n");
  scanf("%s", cardCode02);
  scanf("%c", &dummy);
  printf("Digite o nome da cidade: \n");
  scanf("%49[^\n]", cidade02); // Usar %49[^\n] para ler uma string com espaços, limitando a 49 caracteres para evitar estourar o buffer e não deixar linha a mais no output
  printf("Digite a população da cidade: \n");
  scanf("%d", &população02);
  printf("Digite a área da cidade (em km²): \n");
  scanf("%f", &area02);
  printf("Digite o PIB da cidade: \n");
  scanf("%f", &PIB02);
  printf("Digite o número de pontos turísticos da cidade: \n");
  scanf("%d", &turisticSpots02);  

  // Área para exibição dos dados da cidade

  printf("Carta: 1 \n");
  printf("Estado: %c \n", estado);
  printf("Código: %s \n", cardCode);
  printf("Cidade: %s \n", cidade);
  printf("População: %d \n", população);
  printf("Área: %.2f km² \n", area);
  printf("PIB: %.2f \n", PIB);
  printf("Número de pontos turísticos: %d \n", turisticSpots);
  printf("\n");
  printf("Carta: 2 \n");
  printf("Estado: %c \n", estado02);
  printf("Código: %s \n", cardCode02);
  printf("Cidade: %s \n", cidade02);
  printf("População: %d \n", população02);
  printf("Área: %.2f km² \n", area02);
  printf("PIB: %.2f \n", PIB02);
  printf("Número de pontos turísticos: %d \n", turisticSpots02);

return 0;
} 
