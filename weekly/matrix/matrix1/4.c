#include <stdio.h>

int main(){
  int m[5][5] = {
    {0, 1, 2, 3, 4},
    {5, 0, 6, 7, 8},
    {9, 10, 0, 11, 12},
    {13, 14, 15, 0, 16},
    {17, 18, 19, 20, 0}
  };
  
  int v[10];
  int count = 0;
  
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      if(i + j > 5 - 1){
        v[count] = m[i][j];
        count++;
      }
    }
  }

  int menor = v[0];
  int maior = v[0];
  int soma = 0;
  
  for(int i = 0; i < 10; i++){
    if(v[i] > maior){
      maior = v[i];
    }
    
    if(v[i] < menor){
      menor = v[i];
    }
    soma = soma + v[i];
  }

  float media = (float)soma / count;
  
  printf("\nMaior valor: %d | Menor valor: %d | Media: %.2f\n", maior, menor, media);
  return 0;
}
