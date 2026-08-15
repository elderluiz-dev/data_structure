#include <stdio.h>
#include <stdlib.h>

int main(){
// DEFINIÇÃO E LEITURA
  int l;
  printf("Digite a quantidade de linhas da matriz: ");
  scanf("%d", &l);

  int c;
  printf("Digite a quantidade de colunas da matriz: ");
  scanf("%d", &c);
  
  int **p = malloc(l * sizeof(*p));
  if(p == NULL){
    printf("Falha na alocação!\n");
    return 1;
  }

  for(int i = 0; i < l; i++){
    p[i] = malloc(c * sizeof(*p[i]));
    
    if(p[i] == NULL){
      printf("Falha na alocação!\n");
      return 1;
    }
  }
  
  printf("Popule a matriz: ");
  for(int i = 0; i < l; i++){
    for(int j = 0; j < c; j++){
      scanf("%d", &p[i][j]);
    }
  }
  
  printf("\n");

// LÓGICA DA QUESTÃO

  for(int i = 0; i < l; i++){
    int mat = 0;
    for(int j = 0; j < c; j++){
      mat++;
      printf("%d, ", p[i][j]);
      if(mat == c){
        printf("\n");
      }
    }
  }

  printf("\n");
  
  int soma = 0;
  for(int i = 0; i < l; i++){
    for(int j = 0; j < c; j++){
        soma = soma + p[i][j];
      }
    }
  
  printf("Soma de todos os elementos: %d\n", soma);

  int sumLin[l];
  
  for(int i = 0; i < l; i++){
    sumLin[i] = 0;
    for(int j = 0; j < c; j++){
      sumLin[i] += p[i][j];
    }
  }
  
  printf("Soma de cada linha: ");
  for(int i = 0; i < l; i++){
    printf("%d, ", sumLin[i]);
  }
  
  int maior = p[0][0];
  for(int i = 0; i < l; i++){
    for(int j = 0; j < c; j++){
      if(p[i][j] > maior){
        maior = p[i][j];
      }
    }
  }
  printf("\nMaior elemento: %d", maior);
  
// LIBERAÇÃO DE MEMÓRIA E RETURN
  for(int i = 0; i < l; i++){
    free(p[i]);
  }
  
  free(p);
  return 0;
}
