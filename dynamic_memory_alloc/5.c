#include <stdio.h>
#include <stdlib.h>

int main(){
// DEFINIÇÃO E LEITURA
  int n;
  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);
  
  int *p = malloc(n * sizeof(*p));
  if(p == NULL){
    printf("Falha na alocação!\n");
    return 1;
  }
  
  printf("Digite os números do vetor: \n");
  for(int i = 0; i < n; i++){
    scanf("%d", &p[i]);
  }
  
  printf("\n");

// LÓGICA DA QUESTÃO
  int qtdPar = 0;
  int qtdImpar = 0;

  for(int i = 0; i < n; i++){
    if(p[i] % 2 == 0){
      qtdPar++;
    }else{
      qtdImpar++;
    }
  }
  
  int *vetPar = malloc(qtdPar * sizeof(*vetPar));
  if(vetPar == NULL){
    printf("Falha na alocação!\n");
    return 1;
  }
  
  int *vetImpar = malloc(qtdImpar * sizeof(*vetImpar));
  if(vetImpar == NULL){
    printf("Falha na alocação!\n");
    return 1;
  }

// O MAIS IMPORTANTE DA QUESTÃO É UTILIZAR INDICES DIFERENTES PARA OS VETORES DE PAR E IMPAR, USANDO O "I" DO VETOR ORIGINAL OCORRE ACESSO FORA DOS LIMITES ALOCADOS

  int indPar = 0;
  int indImpar = 0;
  
  for(int i = 0; i < n; i++){
    if(p[i] % 2 == 0){
      vetPar[indPar] = p[i];
      indPar++;
    }else{
      vetImpar[indImpar] = p[i];
      indImpar++;
    }
  }
  
  printf("\nNúmeros pares: ");
  for(int i = 0; i < qtdPar; i++){
    printf("%d, ", vetPar[i]);
  }
  
  printf("\nNúmeros ímpares: ");
  for(int i = 0; i < qtdImpar; i++){
    printf("%d, ", vetImpar[i]);
  }
  
  
// LIBERAÇÃO DE MEMÓRIA E RETURN
  free(p);
  free(vetPar);
  free(vetImpar);
  p = NULL;
  vetPar = NULL;
  vetImpar = NULL;
  return 0;
}
