#include <stdio.h>

int main() {
  //declaração de variáveis
  char  C1Estado;
  char  C1Codigo[4];
  char  C1Cidade[20];
  unsigned long int C1Populacao;
  float C1Area;
  float C1PIB;
  int   C1PontosTur;
  float C1DensidadePop;
  float C1PIBPerCapita;
  float C1SuperPoder;
  char  C2Estado;
  char  C2Codigo[4];
  char  C2Cidade[20];
  unsigned long int C2Populacao;
  float C2Area;
  float C2PIB;
  int   C2PontosTur;  
  float C2DensidadePop;
  float C2PIBPerCapita;  
  float C2SuperPoder;

  int Opcao1;
  int Opcao2;
  float ValorC1Opcao1;
  float ValorC2Opcao1;
  float ValorC1Opcao2;
  float ValorC2Opcao2;
  float SomaC1;
  float SomaC2;

  //dados da carta 1
  printf("Informe os dados da carta 1:\n");

  printf("Estado: ");
  scanf(" %c", &C1Estado);

  printf("Código: ");
  scanf("%s", C1Codigo);  

  printf("Cidade: ");
  scanf("%s", C1Cidade);  

  printf("População: ");
  scanf("%ld", &C1Populacao);    

  printf("Área: ");
  scanf("%f", &C1Area);     

  printf("PIB: ");
  scanf("%f", &C1PIB); 
  
  printf("Pontos Turísticos: ");
  scanf("%d", &C1PontosTur);    

  C1DensidadePop = (float) C1Populacao / C1Area;
  C1PIBPerCapita = (float) C1PIB / C1Area;
  C1SuperPoder = (float) C1Populacao + C1Area + C1PIB + C1PontosTur + C1PIBPerCapita + (1000 / C1DensidadePop);  

  //dados da carta 2
  printf(" \n");
  printf("Informe os dados da carta 2:\n");

  printf("Estado: ");
  scanf(" %c", &C2Estado);

  printf("Código: ");
  scanf("%s", C2Codigo);  

  printf("Cidade: ");
  scanf("%s", C2Cidade); 

  printf("População: ");
  scanf("%ld", &C2Populacao);    

  printf("Área: ");
  scanf("%f", &C2Area);     

  printf("PIB: ");
  scanf("%f", &C2PIB); 
  
  printf("Pontos Turísticos: ");
  scanf("%d", &C2PontosTur);   

  C2DensidadePop = (float) C2Populacao / C2Area;
  C2PIBPerCapita = (float) C2PIB / C2Area;  
  C2SuperPoder = (float) C2Populacao + C2Area + C2PIB + C2PontosTur + C2PIBPerCapita + (1000 / C2DensidadePop);

  //estrutura do menu seletor de opções - PRIMEIRO ATRIBUTO
  printf("\n *** Selecione o PRIMEIRO atributo que deseja comparar ***\n");    
  printf("1 - Nome\n");
  printf("2 - População\n");
  printf("3 - Área\n");
  printf("4 - PIB\n");
  printf("5 - Pontos Turísticos\n");
  printf("6 - Densidade demográfica\n");
  printf("-------------------------------------------------------\n");
  printf("Digite sua opção: ");
  scanf("%d", &Opcao1);  
  printf("-------------------------------------------------------\n");

  //estrutura do menu seletor de opções - SEGUNDO ATRIBUTO
  printf("\n *** Selecione o SEGUNDO atributo que deseja comparar ***\n");
  (Opcao1 != 1) ?  printf("1 - Nome\n") : "";
  (Opcao1 != 2) ?  printf("2 - População\n") : "";
  (Opcao1 != 3) ?  printf("3 - Área\n") : "";
  (Opcao1 != 4) ?  printf("4 - PIB\n") : "";
  (Opcao1 != 5) ?  printf("5 - Pontos Turísticos\n") : "";
  (Opcao1 != 6) ?  printf("6 - Densidade demográfica\n") : "";
  printf("-------------------------------------------------------\n");
  printf("Digite sua opção: ");
  scanf("%d", &Opcao2);  
  printf("-------------------------------------------------------\n");    

  //valida se a primeira e a segunda opções selecionadas são iguais
  if ((Opcao1 == Opcao2) || ((Opcao1 < 1) && (Opcao1 > 6)) || ((Opcao2 < 1) && (Opcao2 > 6))) {
    Opcao1 = 0;
  } 
  else  {
    printf("*** Resultado do primeiro atributo ***\n");    
    printf("--------------------------------------\n");      
  }   

  //regras para a primeira opção selecionada

  ValorC1Opcao1 = 0;
  ValorC2Opcao1 = 0;

  switch (Opcao1)
  {
  case 1:
    printf("Opção 1 selecionada: 1 - Nome \n");
    printf("Carta 1 - Nome: %s \n", C1Cidade);
    printf("Carta 2 - Nome: %s \n", C2Cidade);    
    break;

  case 2:
    printf("Opção 1 selecionada: 2 - População \n");
    printf("Carta 1 - Nome: %s - População: %ld \n", C1Cidade, C1Populacao);
    printf("Carta 2 - Nome: %s - População: %ld \n", C2Cidade, C2Populacao);

    ValorC1Opcao1 = (float) C1Populacao;
    ValorC2Opcao1 = (float) C2Populacao;

    if (C1Populacao > C2Populacao) {
      printf("Carta 1 - VENCEDORA!!!\n");         
    }
    else if (C1Populacao < C2Populacao) {
      printf("Carta 2 - VENCEDORA!!!\n");   
    }
    else {
      printf("Desafio empatado!\n");   
    }
    break;    

  case 3:
    printf("Opção 1 selecionada: 3 - Área \n");
    printf("Carta 1 - Nome: %s - Área: %.2f \n", C1Cidade, C1Area);
    printf("Carta 2 - Nome: %s - Área: %.2f \n", C2Cidade, C2Area);

    ValorC1Opcao1 = C1Area;
    ValorC2Opcao1 = C2Area;    

    if (C1Area > C2Area) {
      printf("Carta 1 - VENCEDORA!!!\n");       
    }
    else if (C1Area < C2Area) {
      printf("Carta 2 - VENCEDORA!!!\n");   
    }
    else {
      printf("Desafio empatado!\n");   
    }
    break;      
    
  case 4:
    printf("Opção 1 selecionada: 4 - PIB \n");
    printf("Carta 1 - Nome: %s - PIB: %.2f \n", C1Cidade, C1PIB);
    printf("Carta 2 - Nome: %s - PIB: %.2f \n", C2Cidade, C2PIB);

    ValorC1Opcao1 = C1PIB;
    ValorC2Opcao1 = C2PIB;        

    if (C1PIB > C2PIB) {
      printf("Carta 1 - VENCEDORA!!!\n");  
    }
    else if (C1PIB < C2PIB) {
      printf("Carta 2 - VENCEDORA!!!\n");   
    }
    else {
      printf("Desafio empatado!\n");   
    }
    break;    
    
  case 5:
    printf("Opção 1 selecionada: 5 - Número de Pontos Turísticos \n");
    printf("Carta 1 - Nome: %s - Número de Pontos Turísticos: %.d \n", C1Cidade, C1PontosTur);
    printf("Carta 2 - Nome: %s - Número de Pontos Turísticos: %.d \n", C2Cidade, C2PontosTur);

    ValorC1Opcao1 = (float) C1PontosTur; 
    ValorC2Opcao1 = (float) C2PontosTur;           

    if (C1PontosTur > C2PontosTur) {
      printf("Carta 1 - VENCEDORA!!!\n");   
    }
    else if (C1PontosTur < C2PontosTur) {
      printf("Carta 2 - VENCEDORA!!!\n");   
    }
    else {
      printf("Desafio empatado!\n");   
    }
    break;  
    
  case 6:
    printf("Opção 1 selecionada: 6 - Densidade demográfica \n");
    printf("Carta 1 - Nome: %s - Densidade demográfica: %f \n", C1Cidade, C1DensidadePop);
    printf("Carta 2 - Nome: %s - Densidade demográfica: %f \n", C2Cidade, C2DensidadePop);

    ValorC1Opcao1 = (1.0 / C1DensidadePop); 
    ValorC2Opcao1 = (1.0 / C2DensidadePop);      

    if (C2DensidadePop > C1DensidadePop) {
      printf("Carta 1 - VENCEDORA!!!\n");   
    }
    else if (C2DensidadePop < C1DensidadePop) {
      printf("Carta 2 - VENCEDORA!!!\n");   
    }
    else {
      printf("Desafio empatado!\n");   
    }
    break;        
  
  default:
    printf("A opção selecionada é inválida\n");
    break;
  }

    //regras para a segunda opção selecionada

  printf("--------------------------------------\n");  
  printf("*** Resultado do segundo atributo  ***\n");    
  printf("--------------------------------------\n");  

  ValorC1Opcao2 = 0;
  ValorC2Opcao2 = 0;

  switch (Opcao2)
  {
  case 1:
    printf("Opção 2 selecionada: 1 - Nome \n");
    printf("Carta 1 - Nome: %s \n", C1Cidade);
    printf("Carta 2 - Nome: %s \n", C2Cidade);    
    break;

  case 2:
    printf("Opção 2 selecionada: 2 - População \n");
    printf("Carta 1 - Nome: %s - População: %ld \n", C1Cidade, C1Populacao);
    printf("Carta 2 - Nome: %s - População: %ld \n", C2Cidade, C2Populacao);

    ValorC1Opcao2 = (float) C1Populacao;
    ValorC2Opcao2 = (float) C2Populacao;

    if (C1Populacao > C2Populacao) {
      printf("Carta 1 - VENCEDORA!!!\n");         
    }
    else if (C1Populacao < C2Populacao) {
      printf("Carta 2 - VENCEDORA!!!\n");   
    }
    else {
      printf("Desafio empatado!\n");   
    }
    break;    

  case 3:
    printf("Opção 2 selecionada: 3 - Área \n");
    printf("Carta 1 - Nome: %s - Área: %.2f \n", C1Cidade, C1Area);
    printf("Carta 2 - Nome: %s - Área: %.2f \n", C2Cidade, C2Area);

    ValorC1Opcao2 = C1Area;
    ValorC2Opcao2 = C2Area;    

    if (C1Area > C2Area) {
      printf("Carta 1 - VENCEDORA!!!\n");       
    }
    else if (C1Area < C2Area) {
      printf("Carta 2 - VENCEDORA!!!\n");   
    }
    else {
      printf("Desafio empatado!\n");   
    }
    break;      
    
  case 4:
    printf("Opção 2 selecionada: 4 - PIB \n");
    printf("Carta 1 - Nome: %s - PIB: %.2f \n", C1Cidade, C1PIB);
    printf("Carta 2 - Nome: %s - PIB: %.2f \n", C2Cidade, C2PIB);

    ValorC1Opcao2 = C1PIB;
    ValorC2Opcao2 = C2PIB;        

    if (C1PIB > C2PIB) {
      printf("Carta 1 - VENCEDORA!!!\n");  
    }
    else if (C1PIB < C2PIB) {
      printf("Carta 2 - VENCEDORA!!!\n");   
    }
    else {
      printf("Desafio empatado!\n");   
    }
    break;    
    
  case 5:
    printf("Opção 2 selecionada: 5 - Número de Pontos Turísticos \n");
    printf("Carta 1 - Nome: %s - Número de Pontos Turísticos: %.d \n", C1Cidade, C1PontosTur);
    printf("Carta 2 - Nome: %s - Número de Pontos Turísticos: %.d \n", C2Cidade, C2PontosTur);

    ValorC1Opcao2 = (float) C1PontosTur; 
    ValorC2Opcao2 = (float) C2PontosTur;           

    if (C1PontosTur > C2PontosTur) {
      printf("Carta 1 - VENCEDORA!!!\n");   
    }
    else if (C1PontosTur < C2PontosTur) {
      printf("Carta 2 - VENCEDORA!!!\n");   
    }
    else {
      printf("Desafio empatado!\n");   
    }
    break;  
    
  case 6:
    printf("Opção 2 selecionada: 6 - Densidade demográfica \n");
    printf("Carta 1 - Nome: %s - Densidade demográfica: %f \n", C1Cidade, C1DensidadePop);
    printf("Carta 2 - Nome: %s - Densidade demográfica: %f \n", C2Cidade, C2DensidadePop);

    ValorC1Opcao2 = (1000 / C1DensidadePop); 
    ValorC2Opcao2 = (1000 / C2DensidadePop);      

    if (C2DensidadePop > C1DensidadePop) {
      printf("Carta 1 - VENCEDORA!!!\n");   
    }
    else if (C2DensidadePop < C1DensidadePop) {
      printf("Carta 2 - VENCEDORA!!!\n");   
    }
    else {
      printf("Desafio empatado!\n");   
    }
    break;        
  
  default:
    printf("A opção selecionada é inválida\n");
    break;
  }  

    //regras para o resultado geral

  SomaC1 = ValorC1Opcao1 + ValorC1Opcao2;
  SomaC2 = ValorC2Opcao1 + ValorC2Opcao2;
  
  //regras para a segunda opção selecionada

  printf("--------------------------------------\n");  
  printf("***   Resultado geral das cartas   ***\n");    
  printf("--------------------------------------\n");    

  printf("Soma Atributos Carta 1 : %f \n", SomaC1);    
  printf("Soma Atributos Carta 2 : %f \n", SomaC2);

  if (SomaC1 > SomaC2) {
    printf("Carta 1 - VENCEDORA!!!\n");  
  }
  else if (SomaC1 < SomaC2) {
    printf("Carta 2 - VENCEDORA!!!\n");  
  } 
  else {
    printf("Desafio empatado!\n");
  }

  return 0;
}