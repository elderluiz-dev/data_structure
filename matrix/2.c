#include <stdio.h>

int main(){
  int var[10];
  
  for(int i = 0; i < 10; i++){
    scanf("%d", &var[i]);
  }
  
  int maior = var[1];
  int menor = var[1];
  
  for(int i = 0; i < 10; i++){
    if(var[i] > maior){
      maior = var[i];
    }
    if(var[i] < menor){
      menor = var[i];
    }
  }
  
  int dif = maior - menor;
  printf("A diferença entre o maior e o menos valor é: %d", dif);
}
