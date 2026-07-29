#include <stdio.h>

int main(){
  int m[3][3];
  int l;
  int c;
  
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      scanf("%d", &m[i][j]);
    }
  }
  
  int maior = m[0][0];
  
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      if(m[i][j] > maior){
        maior = m[i][j];
        l = i;
        c = j;
      }
    }
  }
  
  printf("Maior valor: %d | Linha e Coluna: %d, %d\n", maior, l, c);
  
}
