#include <stdio.h>

int main(){
  int m[3][3];
  int soma = 0;
  
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      scanf("%d", &m[i][j]);
    }
  }
  
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      if(i < j){
        soma = soma + m[i][j];
      }
    }
  }
  
  printf("%d", soma);
  
}
