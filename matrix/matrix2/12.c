#include <stdio.h>

int main(){
  int m[4][5];
  int soma = 0;
  
  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 5; j++){
      scanf("%d", &m[i][j]);
      soma += m[i][j];
   }
  }
  
  printf("Soma: %d", soma);
  
}
